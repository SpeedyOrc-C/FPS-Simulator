#ifndef FPS_SIMULATOR_ENEMY_H
#define FPS_SIMULATOR_ENEMY_H

#include "../op_engine/op_engine.h"
#include "models/models.h"

struct Enemy{
    struct Object head, leg, body;
    double speed, damage, health, findPathCD, attackDistance;
    struct Transform transform;
	struct CollideBox collideBox;
	double Critical_Rate;
    int canSeePlayer;
    struct Vector3 moveDirection, destination;
};

struct EnemyMeshes{
    struct Mesh *head, *body, *leg;
};

void Enemy_Init(struct Enemy *enemy, struct EnemyMeshes *meshes);
struct Enemy* New_Enemy(struct EnemyMeshes *meshes);
void Del_Enemy(struct Enemy *enemy);
void Enemy_Start(struct Enemy *enemy);
void Enemy_Update(struct Enemy *enemy, double delta_time);

void Enemy_Move(struct Enemy* enemy, struct Vector3 *move); //enemy consists of three objects: head and body
void Enemy_Rotation(struct Enemy *enemy, struct Vector3* angle);

void EnemyMeshes_Init(struct EnemyMeshes *meshes, struct Mesh *head, struct Mesh *body, struct Mesh *leg);
struct EnemyMeshes* New_EnemyMeshes(struct Mesh *head, struct Mesh *body, struct Mesh *leg);
void Del_EnemyMeshes(struct EnemyMeshes *meshes);

//enemy's damage to player
int Enemy_IsTargetInAttackRange(struct Enemy *enemy, struct Vector3 *targetPosition);

#endif //FPS_SIMULATOR_ENEMY_H
