#pragma once
#include <Vector2.h>
#include <Novice.h>
#include "Bullet.h"

class Player
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Player();

	/// <summary>
	/// 初期化関数
	/// </summary>
	void Init();

	/// <summary>
	/// 更新処理
	/// </summary>
	/// <param name="keys">キー</param>
	/// <param name="preKeys">プレスキー</param>
	void Update(char *keys, char *preKeys);
	
	/// <summary>
	/// 描画関数
	/// </summary>
	void Draw();

public:
	Bullet* bullet_;

private:
	Vector2 pos_;
	float radius_;
	float speed_;
};

