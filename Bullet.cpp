#include "Bullet.h"
#include <Novice.h>
Bullet::Bullet()
{
	radius_ = 10.0f;
	isShot_ = false;

}

Bullet::~Bullet()
{
}

void Bullet::Init()
{
}

void Bullet::Update()
{
	if (isShot_) {
		pos_.y -= 10.0f;
	}

	if (pos_.y <= 0.0f - radius_) {
		isShot_ = false;
	}
}

void Bullet::Draw()
{
	if (isShot_) {
		Novice::DrawEllipse((int)pos_.x, (int)pos_.y, (int)radius_, (int)radius_, 0, WHITE, kFillModeSolid);
	}

}
