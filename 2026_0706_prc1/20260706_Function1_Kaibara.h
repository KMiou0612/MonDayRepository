#pragma once
#include <iostream>
#include "20260706_Header1_Kaibara.h"
using namespace std;

//回復関数
int Heal(int &hp)
{
	hp += HEALHP;
	
	cout << "HPを回復しました。" << endl;
}

//入力チェック関数
int InputCheck(int min, int max)
{
	//変数宣言
	int num;

	while (true)
	{
		//数字の入力
		cin >> num;
		//入力が合っているかの判定
		if (num < MIN || num > MAX)
		{
			cout << "入力された数字に誤りがあります。再度入力してください。" << endl;

		}
		else
		{
			//ループから抜ける
			break;
		}
	}
	return num;
}

//実行関数
void Run()
{
	//変数宣言
	int plyHp = PLAYERHP;
	int select;
	//内容表示
	cout << "プレイヤーのHPを２０回復することができます。\nプレイヤーのHPを回復しますか？\nYes:１\nNo :２" << endl;
	
	//入力チェック関数に渡し、戻り値で選択肢をもってくる
	select = InputCheck(MIN, MAX);

	//回復
	//１なら回復、２ならそのまま
	if (select == MIN)
	{
		Heal(plyHp);
		//結果の表示
		cout << "現在のHPは" << plyHp << "です。" << endl;
	}
	else
	{
		//結果の表示
		cout << "回復しませんでした。現在のHPは," << plyHp << "です。" << endl;
	}
}