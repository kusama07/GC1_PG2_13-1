#pragma once
#include <Vector2.h>
#include <Novice.h>
#include "Bullet.h"

class Player
{
public:
	Player();
	~Player();

	void Init();
	void Update(char *keys, char *preKeys);
	void Draw();

	Bullet* bullet_;
private:
	Vector2 pos_;
	float radius_;
	float speed_;
};

