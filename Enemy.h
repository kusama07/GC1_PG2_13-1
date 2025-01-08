#pragma once
#include <Vector2.h>
#include "Bullet.h"
class Enemy
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Enemy();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Enemy();

	/// <summary>
	/// �������֐�
	/// </summary>
	void Init();

	/// <summary>
	/// �X�V����
	/// </summary>
	/// <param name="keys">�L�[</param>
	void Update(char *keys);

	/// <summary>
	/// �`��֐�
	/// </summary>
	void Draw();

	/// <summary>
	/// �|�W�V�����̃Z�b�^�[
	/// </summary>
	/// <param name="pos">���W</param>
	/// <returns></returns>
	Vector2 SetPos(Vector2 pos) { return pos_ = pos; };

	/// <summary>
	/// �����蔻��
	/// </summary>
	/// <param name="bullet">�e</param>
	/// <param name="enemies">�G</param>
	static void CheckCollision(Bullet* bullet, Enemy* enemies[]);

public:
	Bullet* bullet_;
	static bool isAlive_;
	static int enemyCount;

private:
	Vector2 pos_;
	float radius_;
	float speed_;
};

