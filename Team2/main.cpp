#include <Novice.h>

const char kWindowTitle[] = "LC1D_22_ハギワラ_ケンタ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 750, 780);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	int speed = 5;
	int posX = 50;
	int posY = 630;

	//フラグ
	//int change = 0;
	//int next = 0;

	int POSX = 530;
	int POSY = -50;

	int POS2X = 320;
	int POS2Y = -590;

	int POS3X = 380;
	int POS3Y = -1150;

	int POS4X = 470;
	int POS4Y = -1780;
		
	int POS5X = 520;
	int POS5Y = -2430;

	int POS6X = 260;
	int POS6Y = -2850;

	int POS7X = 490;
	int POS7Y = -3209;


	int SPEED = 6;
	int SPEED2 = 8;
	int SPEED3 = 11;

	bool flag = true;
	bool flag2 = true;
	bool flag3 = true;
	bool flag4 = true;
	bool flag5 = true;
	bool flag6 = true;
	bool flag7 = true;

	//自機の当たり判定宣言
	int left = 0;
	int right = 0;
	int top = 0;
	int bottom = 0;

	//アイテム1の当たり判定宣言
	int LEFT = 0;
	int RIGHT = 0;
	int TOP = 0;
	int BOTTOM = 0;

	//アイテム2の当たり判定宣言
	int LEFT2 = 0;
	int RIGHT2 = 0;
	int TOP2 = 0;
	int BOTTOM2 = 0;

	//アイテム3の当たり判定宣言
	int LEFT3 = 0;
	int RIGHT3 = 0;
	int TOP3 = 0;
	int BOTTOM3 = 0;
	
	//アイテム4の当たり判定宣言
	int LEFT4 = 0;
	int RIGHT4 = 0;
	int TOP4 = 0;
	int BOTTOM4 = 0;

	//アイテム5の当たり判定宣言
	int LEFT5 = 0;
	int RIGHT5 = 0;
	int TOP5 = 0;
	int BOTTOM5 = 0;

	//アイテム6の当たり判定宣言
	int LEFT6 = 0;
	int RIGHT6 = 0;
	int TOP6 = 0;
	int BOTTOM6 = 0;

	//アイテム7の当たり判定宣言
	int LEFT7 = 0;
	int RIGHT7 = 0;
	int TOP7 = 0;
	int BOTTOM7 = 0;

	int score = 0;


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
		
		
			posX = posX + speed;

			if (posX <= 50) {
				speed *= -1;
			}
			if (posX >= 700) {
				speed *=-1;
			}
		

			if (keys[DIK_SPACE]&&preKeys[DIK_SPACE]==0) {
				speed *= -1;
		}


		POSY += SPEED;
		POS2Y += SPEED3;
		POS3Y += SPEED2;
		POS4Y += SPEED2;
		POS5Y += SPEED3;
		POS6Y += SPEED2;
		POS7Y += SPEED2;

		//自機の当たり判定の処理
		left = posX;
		right = posX + 25;
		top = posY;
		bottom = posY + 25;


		//アイテム1の当たり判定の処理
		LEFT = POSX;
		RIGHT = POSX+35;
		TOP = POSY;
		BOTTOM = POSY+35;

		//アイテム2の当たり判定の処理
		LEFT2 = POS2X;
		RIGHT2 = POS2X + 20;
		TOP2 = POS2Y;
		BOTTOM2 = POS2Y + 20;

		//アイテム3の当たり判定の処理
		LEFT3 = POS3X;
		RIGHT3 = POS3X + 30;
		TOP3 = POS3Y;
		BOTTOM3 = POS3Y + 30;

		//アイテム4の当たり判定の処理
		LEFT4 = POS4X;
		RIGHT4 = POS4X + 25;
		TOP4 = POS4Y;
		BOTTOM4 = POS4Y + 25;

		//アイテム5の当たり判定の処理
		LEFT5 = POS5X;
		RIGHT5 = POS5X + 20;
		TOP5 = POS5Y;
		BOTTOM5 = POS5Y + 20;

		//アイテム6の当たり判定の処理
		LEFT6 = POS6X;
		RIGHT6 = POS6X + 30;
		TOP6 = POS6Y;
		BOTTOM6 = POS6Y + 30;

		//アイテム7の当たり判定の処理
		LEFT7 = POS7X;
		RIGHT7 = POS7X + 25;
		TOP7 = POS7Y;
		BOTTOM7 = POS7Y + 25;




		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		//自機	
		Novice::DrawBox(posX, posY, 25, 25, 0.0f, WHITE, kFillModeSolid);

        //アイテム
		if (flag == true) {
			Novice::DrawBox(POSX, POSY, 35, 35, 0.0f, BLACK, kFillModeSolid);
		}
		if (flag2 == true) {
			Novice::DrawBox(POS2X, POS2Y, 20, 20, 0.0f, RED, kFillModeSolid);
		}
		if (flag3 == true) {
			Novice::DrawBox(POS3X, POS3Y, 30, 30, 0.0f, BLUE, kFillModeSolid);
		}
		if (flag4 == true) {
			Novice::DrawBox(POS4X, POS4Y, 25, 25, 0.0f, GREEN, kFillModeSolid);
		}
		if (flag5 == true) {
			Novice::DrawBox(POS5X, POS5Y, 20, 20, 0.0f, RED, kFillModeSolid);
		}
		if (flag6 == true) {
			Novice::DrawBox(POS6X, POS6Y, 30, 30, 0.0f, BLACK, kFillModeSolid);
		}
		if (flag7 == true) {
			Novice::DrawBox(POS7X, POS7Y, 25, 25, 0.0f, GREEN, kFillModeSolid);
		}
		
		

		if (LEFT <= right && left <= RIGHT && TOP <= bottom && top <= BOTTOM) {
			flag = false;
		}

		if (LEFT2 <= right && left <= RIGHT2 && TOP2 <= bottom && top <= BOTTOM2) {
			flag2 = false;
		}

		if (LEFT3 <= right && left <= RIGHT3 && TOP3 <= bottom && top <= BOTTOM3) {
			flag3 = false;
		}

		if (LEFT4 <= right && left <= RIGHT4 && TOP4 <= bottom && top <= BOTTOM4) {
			flag4 = false;
		}

		if (LEFT5 <= right && left <= RIGHT5 && TOP5 <= bottom && top <= BOTTOM5) {
			flag5 = false;
		}

		if (LEFT6 <= right && left <= RIGHT6 && TOP6 <= bottom && top <= BOTTOM6) {
			flag6 = false;
		}

		if (LEFT7 <= right && left <= RIGHT7 && TOP7 <= bottom && top <= BOTTOM7) {
			flag7 = false;
		}



		if (flag == false) {
			score = +30;
		}
		if (flag2 == false) {
			if (flag == true) {
				score = +50;
			}
			if (flag == false) {
				score += 50;
			}
		}
		if (flag3 == false) {
			if (flag == true&& flag2 == true) {
				score = +40;
			}
			if (flag == false|| flag2 == false) {
				score += 40;
			}
		}
		if (flag4 == false) {
			if (flag == true&& flag2 == true && flag3 == true) {
				score = +45;
			}
			if (flag == false|| flag2 == false || flag3 == false) {
				score += 45;
			}
		}
		if (flag5 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true) {
				score = +50;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false) {
				score += 50;
			}
		}
		if (flag6 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true && flag5 == true) {
				score = +40;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false || flag5 == false) {
				score += 40;
			}
		}
		if (flag7 == false) {
			if (flag == true && flag2 == true && flag3 == true && flag4 == true
				&& flag5 == true && flag6 == true) {
				score = +45;
			}
			if (flag == false || flag2 == false || flag3 == false || flag4 == false 
				|| flag5 == false || flag6 == false) {
				score += 45;
			}
		}


		Novice::ScreenPrintf(0, 60, "SCORE:%d", score);

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

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
