#include "Enemy.h"
#include <Novice.h>
#include <math.h>

bool Enemy::isAlive_ = true;
int Enemy::enemyCount = 0;

Enemy::Enemy()
{
	enemyCount++;
}

Enemy::~Enemy()
{
}

void Enemy::Init()
{
	pos_ = { 0.0f,0.0f };
	radius_ = 20.0f;
	speed_ = 8.0f;

}

void Enemy::Update(char *keys)
{
	if (isAlive_ == 0) {
		if (keys[DIK_R]) {
			isAlive_ = true;
		}
	}

	if (isAlive_) {
		if (pos_.x <= 0.0f + radius_) {
			speed_  = -speed_;
		} else if (pos_.x >= 1280.0f - radius_) {
			speed_ = -speed_;
		}
		pos_.x += speed_;

	}

}

void Enemy::Draw()
{
	if (isAlive_) {
		Novice::DrawEllipse((int)pos_.x, (int)pos_.y, (int)radius_, (int)radius_, 0, RED, kFillModeSolid);
	}
}


void Enemy::CheckCollision(Bullet* bullet, Enemy* enemies[])
{
	if (!bullet->GetIsShot()) {
		return;
	}

	for (int i = 0; i < enemyCount; i++) {
		if (enemies[i]->isAlive_) {

			float dx = bullet->GetPos().x - enemies[i]->pos_.x;
			float dy = bullet->GetPos().y - enemies[i]->pos_.y;
			float distance = sqrtf(dx * dx + dy * dy);

			if (distance < bullet->GetRadius() + enemies[i]->radius_) {
				isAlive_ = false;
				bullet->SetIsShot(false);
				break;
			}
		}
	}
}