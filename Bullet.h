#pragma once
#include <Vector2.h>

class Bullet
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Bullet();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Bullet();

	/// <summary>
	/// �������֐�
	/// </summary>
	void Init();

	/// <summary>
	/// �X�V����
	/// </summary>
	void Update();

	/// <summary>
	///	�`��֐� 
	/// </summary>
	void Draw();

	/// <summary>
	/// isShot�̃Z�b�^�[
	/// </summary>
	/// <param name="isShot">�e�������Ă��邩�ǂ����̃t���O</param>
	/// <returns></returns>
	bool SetIsShot(bool isShot) {  return isShot_ = isShot; };

	/// <summary>
	/// isShot�̃Q�b�^�[
	/// </summary>
	/// <returns></returns>
	bool GetIsShot() { return isShot_; };

	/// <summary>
	/// pos�̃Z�b�^�[
	/// </summary>
	/// <param name="pos">���W</param>
	/// <returns></returns>
	Vector2 SetPos(Vector2 pos) { return pos_ = pos; };

	/// <summary>
	/// pos�̃Q�b�^�[
	/// </summary>
	/// <returns></returns>
	Vector2 GetPos() { return pos_; };

	/// <summary>
	/// ���a�̃Q�b�^�[
	/// </summary>
	/// <returns></returns>
	float GetRadius() { return radius_; }

private:
	float radius_;
	Vector2 pos_;
	bool isShot_;
};

