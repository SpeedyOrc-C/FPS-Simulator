#include "op_engine/op_engine.h"
#include "test_map/map.h"
#include "test_map/test_boundary.h"
#include "playground.h"
#include <stdio.h>
#include <unistd.h>

void test()
{
	struct Mesh* map = ModelTest_boundary_New();
	struct Player plr; Player_Init(&plr); struct Player* player = &plr;
	struct Transform transform;
	struct CollideBox* box;
	struct Scene* scene = (struct Scene*) malloc(sizeof(struct Scene));
	Scene_Init(scene);

	struct Enemy* enemy = (struct Enemy*)malloc(sizeof(struct Enemy));
	struct Object* body = (struct Object*)malloc(sizeof (struct Object));
	struct Object* leg = (struct Object*)malloc(sizeof (struct Object));
	struct Object* face = (struct Object*)malloc(sizeof (struct Object));
	Enemy_Init(enemy,body,face,leg);

	int count = 1;
	bool dof = 0;
	struct Enemy_TransformLink* beginning = Enemy_FindWay(&enemy->body,scene);
	while (count < 100){
		if (count%10==0){dof = 1;}
		Scene_EnemyUpdate(enemy,dof,scene,beginning);
		printf("enemy x position: %f",enemy->transform.globalPosition.x);
        printf("player x position: %f",player->transform.globalPosition.x);
		count++;
		sleep(1);
	}


}