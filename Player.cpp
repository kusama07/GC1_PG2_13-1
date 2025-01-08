#include "Player.h"

Player::Player()
{
	bullet_ = new Bullet{};
}

Player::~Player()
{
	delete bullet_;
}

void Player::Init() 
{
	pos_ = { 640.0f,500.0f };
	radius_ = 20.0f;
	speed_ = 10.0f;
}

void Player::Update(char *keys,char *preKeys)
{
	if (keys[DIK_W]) {
		pos_.y -= speed_;
	}
	if (keys[DIK_S]) {
		pos_.y += speed_;
	}
	if (keys[DIK_A]) {
		pos_.x -= speed_;
	}
	if (keys[DIK_D]) {
		pos_.x += speed_;
	}

	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0 && !bullet_->GetIsShot()) {
		bullet_->SetIsShot(true);
		bullet_->SetPos({ pos_.x,pos_.y });
	}

	bullet_->Update();
}

void Player::Draw()
{
	bullet_->Draw();
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, (int)radius_, (int)radius_, 0, WHITE, kFillModeSolid);
}
