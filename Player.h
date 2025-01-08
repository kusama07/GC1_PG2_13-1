#pragma once
#include <Vector2.h>
#include <Novice.h>
#include "Bullet.h"

class Player
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Player();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Player();

	/// <summary>
	/// �������֐�
	/// </summary>
	void Init();

	/// <summary>
	/// �X�V����
	/// </summary>
	/// <param name="keys">�L�[</param>
	/// <param name="preKeys">�v���X�L�[</param>
	void Update(char *keys, char *preKeys);
	
	/// <summary>
	/// �`��֐�
	/// </summary>
	void Draw();

public:
	Bullet* bullet_;

private:
	Vector2 pos_;
	float radius_;
	float speed_;
};

