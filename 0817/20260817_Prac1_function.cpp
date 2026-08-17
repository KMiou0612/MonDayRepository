#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"
//選択の演出
void PitingType(int piting)
{

	switch (piting)
	{
		//０だった時
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
		//１だった時
	case 1:
		cout << "カーブを投げました" << endl;
		break;
		//２だった時
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
		//３だった時
	case 3:
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//勝敗の表示
void Result(int out)
{
	//もしもアウトが三回以上だった時
	if (out >= 3)
	{
		//プレイヤーの勝ちと表示する
		cout << "PLAYER WINNER!!" << endl;
	}
	//そうでなければ
	else
	{
		//CPUの勝ちと表示する
		cout << "CPU WINNER!!" << endl;
	}
}