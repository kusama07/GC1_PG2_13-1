#pragma once
#include <Vector2.h>

class Bullet
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Bullet();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Bullet();

	/// <summary>
	/// 初期化関数
	/// </summary>
	void Init();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	/// <summary>
	///	描画関数 
	/// </summary>
	void Draw();

	/// <summary>
	/// isShotのセッター
	/// </summary>
	/// <param name="isShot">弾を撃っているかどうかのフラグ</param>
	/// <returns></returns>
	bool SetIsShot(bool isShot) {  return isShot_ = isShot; };

	/// <summary>
	/// isShotのゲッター
	/// </summary>
	/// <returns></returns>
	bool GetIsShot() { return isShot_; };

	/// <summary>
	/// posのセッター
	/// </summary>
	/// <param name="pos">座標</param>
	/// <returns></returns>
	Vector2 SetPos(Vector2 pos) { return pos_ = pos; };

	/// <summary>
	/// posのゲッター
	/// </summary>
	/// <returns></returns>
	Vector2 GetPos() { return pos_; };

	/// <summary>
	/// 半径のゲッター
	/// </summary>
	/// <returns></returns>
	float GetRadius() { return radius_; }

private:
	float radius_;
	Vector2 pos_;
	bool isShot_;
};

