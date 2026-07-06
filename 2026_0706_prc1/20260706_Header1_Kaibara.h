#pragma once
#include <iostream>
using namespace std;

const int PLAYERHP = 100;
const int HEALHP = 20;
const int MIN = 1;
const int MAX = 2;

//関数プロトタイプ宣言

/// <summary>
/// 回復関数
/// </summary>
/// <param name="hp"></param>
/// <returns></returns>
int Heal(int& hp);

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="min"></param>
/// <param name="max"></param>
/// <returns></returns>
int InputCheck(int min, int max);

/// <summary>
///	実行関数
/// </summary>
/// <param name=""></param>
void Run();