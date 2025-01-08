#pragma once
#include <Vector2.h>
#include "Bullet.h"
class Enemy
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Enemy();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy();

	/// <summary>
	/// 初期化関数
	/// </summary>
	void Init();

	/// <summary>
	/// 更新処理
	/// </summary>
	/// <param name="keys">キー</param>
	void Update(char *keys);

	/// <summary>
	/// 描画関数
	/// </summary>
	void Draw();

	/// <summary>
	/// ポジションのセッター
	/// </summary>
	/// <param name="pos">座標</param>
	/// <returns></returns>
	Vector2 SetPos(Vector2 pos) { return pos_ = pos; };

	/// <summary>
	/// 当たり判定
	/// </summary>
	/// <param name="bullet">弾</param>
	/// <param name="enemies">敵</param>
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

