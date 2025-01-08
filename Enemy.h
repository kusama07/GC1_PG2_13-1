#pragma once
#include <Vector2.h>
#include "Bullet.h"
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Init();
	void Update(char *keys);
	void Draw();

	Vector2 SetPos(Vector2 pos) { return pos_ = pos; };

	Bullet* bullet_;
	static void CheckCollision(Bullet* bullet, Enemy* enemies[]);
	static bool isAlive_;
	static int enemyCount;

private:
	Vector2 pos_;
	float radius_;
	float speed_;
};

