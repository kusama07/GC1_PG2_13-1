#pragma once
#include <Vector2.h>

class Bullet
{
public:
	Bullet();
	~Bullet();

	void Init();
	void Update();
	void Draw();

	bool SetIsShot(bool isShot) {  return isShot_ = isShot; };
	bool GetIsShot() { return isShot_; };
	Vector2 SetPos(Vector2 pos) { return pos_ = pos; };
	Vector2 GetPos() { return pos_; };
	float GetRadius() { return radius_; }

private:
	float radius_;
	Vector2 pos_;
	bool isShot_;
};

