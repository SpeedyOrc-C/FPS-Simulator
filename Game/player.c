#include "player.h"
#include "../op_engine/op_engine.h"

void Player_Init(struct Player *player){
    Canvas_Init(&player->canvas, 32, 64);
    player->maxHealth = 100;
    player->health = player->maxHealth;
    player->atk = 1;
    player->moveSpeed = 1;
    player->rotationSpeed = 1;
    player->fireCDtime = 0.5;
    player->In_FireCD = 0;
    player->fireCDtime = 0.5;
    player->fireCDcounter = 0;
    player->DEADFLAG = 0;
    Vector3_Set(&player->facing,0,0,1);

    Transform_Init(&player->transform, NULL);
    Transform_Init(&player->canvas.camera_transform, &player->transform);
    Vector3_Set(&player->canvas.camera_transform.position, 0, 1.8, 0);

    struct Vector3 v1, v2;
    Vector3_Set(&v1, -0.5, -1, -0.5);
    Vector3_Set(&v2, 0.5, 1, 0.5);
    CollideBox_Init(&player->collideBox, NULL, 0.7, 2.1, 0.7);
    Vector3_Set(&player->collideBox.transform.position, 0, 1.06, 0);
    player->collideBox.transform = player->transform;
    player->collideBox.transform.position.y = 0.9;
}

struct Player* New_Player() {
    struct Player* player = (struct Player*)malloc(sizeof(struct Player));
    Player_Init(player);
    return player;
}

void Del_Player(struct Player *player){
    Del_Canvas(&player->canvas);
}

void Player_Move(struct Player *player, struct Vector3* move){
    Vector3_Add(&player->transform.position, move);
}

void Player_Rotate(struct Player *player, struct Vector3* angle){
    //Vector3_Add(&player->transform.rotation, angle);
    //Transform_RotationMatrixUpdate(&player->transform);

    struct Matrix3x3 RotationMatrix;
    Matrix3x3_FromEulerAngle(&RotationMatrix,angle,EULER_ANGLE_NORMAL);
    Matrix3x3_TransformMatrix(&RotationMatrix, &player->facing);
    Vector3_Normalize(&player->facing);

    Canvas_CameraRotate(&player->canvas,angle);
}

void Player_Start(struct Player *player){
    //TODO
    Vector3_Set(&player->transform.position,0,1,0);
}

void Player_Update(struct Player *player, double delta_time){
    if(player->In_FireCD){
        player->IsFiring = 0 ;
        //TODO
        player->fireCDcounter -= 0.5;
    }
    if(player->fireCDcounter <= 0) player->In_FireCD = 0;
    Player_Control(player, delta_time);
}

void Player_Control(struct Player *player, double delta_time){
    if(keydown(UP)) Player_RotateUp(player, delta_time);
    if(keydown(DOWN)) Player_RotateDown(player, delta_time);
    if(keydown(LEFT)) Player_RotateLeft(player, delta_time);
    if(keydown(RIGHT)) Player_RotateRight(player, delta_time);

    if(keydown(W)) Player_MoveForward(player, delta_time);
    if(keydown(S)) Player_MoveBackward(player, delta_time);
    if(keydown(A)) Player_MoveLeft(player, delta_time);
    if(keydown(D)) Player_MoveRight(player, delta_time);

    if(keydown(H)) Player_ChangeHealth(player, -5);
    if(keydown(K)) Player_ChangeHealth(player, 5);

    if(keydown(F)) Player_Shoot(player);
}
void Player_Shoot(struct Player *player){
    if(!player->IsFiring){
        if(!player->In_FireCD){
            player->IsFiring = 1;
            player->In_FireCD = 1;
            player->fireCDcounter = player->fireCDtime;
        }
    }
}
void Player_MoveForward(struct Player *player, double delta_time){
    struct Vector3 movement;
    Vector3_Set(&movement, player->facing.x, 0, player->facing.z);
    Vector3_Normalize(&movement);
    Vector3_Scale(&movement, player->moveSpeed * delta_time);
    Player_Move(player,&movement);
    Vector3_Copy(&movement, &player->moveDirection);
}
void Player_MoveBackward(struct Player *player, double delta_time){
    struct Vector3 movement;
    Vector3_Set(&movement, -player->facing.x, 0, -player->facing.z);
    Vector3_Normalize(&movement);
    Vector3_Scale(&movement, player->moveSpeed * delta_time);
    Vector3_Copy(&movement, &player->moveDirection);
    Player_Move(player, &movement);
}
void Player_MoveLeft(struct Player *player, double delta_time){
    struct Vector3 movement;
    Vector3_Set(&movement,-player->facing.z,0,player->facing.x);
    Vector3_Normalize(&movement);
    Vector3_Scale(&movement,player->moveSpeed * delta_time);
    Vector3_Copy(&movement,&player->moveDirection);
    Player_Move(player,&movement);
}
void Player_MoveRight(struct Player *player, double delta_time){
    struct Vector3 movement;
    Vector3_Set(&movement, player->facing.z, 0, -player->facing.x);
    Vector3_Normalize(&movement);
    Vector3_Scale(&movement, player->moveSpeed * delta_time);
    Vector3_Copy(&movement, &player->moveDirection);
    Player_Move(player,&movement);
}

void Player_RotateUp(struct Player *player, double delta_time){
    struct Vector3 rotation;
    Vector3_Set(&rotation, player->facing.z, 0, -player->facing.x);
    Vector3_Normalize(&rotation);
    Vector3_Scale(&rotation, player->rotationSpeed * delta_time);
    Player_Rotate(player, &rotation);
}
void Player_RotateDown(struct Player *player, double delta_time){
    struct Vector3 rotation;
    Vector3_Set(&rotation, -player->facing.z, 0, player->facing.x);
    Vector3_Normalize(&rotation);
    Vector3_Scale(&rotation, player->rotationSpeed * delta_time);
    Player_Rotate(player, &rotation);
}
void Player_RotateLeft(struct Player *player, double delta_time){
    struct Vector3 rotation;
    Vector3_Set(&rotation, 0, player->rotationSpeed * delta_time, 0);
    Player_Rotate(player, &rotation);
}
void Player_RotateRight(struct Player *player, double delta_time){
    struct Vector3 rotation;
    Vector3_Set(&rotation,0,-player->rotationSpeed * delta_time,0);
    Player_Rotate(player,&rotation);
}

void Player_ChangeHealth(struct Player *player, double deltaHealth){
    player->health += deltaHealth;
    if(player->health > player->maxHealth) player->health = player->maxHealth;
    if(player->health <= 0){
        player->health = 0;
        player->DEADFLAG = 1;
    }
}