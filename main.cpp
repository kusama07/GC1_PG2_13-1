#include <Novice.h>
#include "Player.h"
#include "Enemy.h"

const char kWindowTitle[] = "GC1A_03_クサマリョウト_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	const int kNumEnemies = 2;
	Enemy* enemies[kNumEnemies];
	for (int i = 0; i < kNumEnemies; i++) {
		enemies[i] = new Enemy{};
		enemies[i]->Init();
	}

	// プレイヤーを作成
	Player* player = new Player{};
	player->Init();

	// 敵の初期位置を設定
	enemies[0]->SetPos({ 640.0f, 400.0f });
	enemies[1]->SetPos({ 700.0f, 500.0f });

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		
		player->Update(keys, preKeys);
		for (int i = 0; i < kNumEnemies; i++) {
			enemies[i]->Update(keys);
		}
		Enemy::CheckCollision(player->bullet_, enemies);

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///
		for (int i = 0; i < kNumEnemies; i++) {
			enemies[i]->Draw();
		}	
		player->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	for (int i = 0; i < kNumEnemies;i++) {
		delete enemies[i];
	}
	delete player;


	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
