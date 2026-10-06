#pragma once
#include <iostream>
using namespace std;

//=======================
// 定数宣言
//=======================
//能力値の下限
const int MIN_LEVEL = 1;
//能力値の上限
const int MAX_LEVEL = 20;
//体力の上限
const int MAX_HP = 100;
//回復量の下限
const int HEAL_MIN = 1;
//回復量の上限
const int HEAL_MAX = 12;
//攻撃時の乱数の下限
const int ATTACK_MIN = 1;
//攻撃時の乱数の上限
const int ATTACK_MAX = 12;
//プレイヤーの攻撃
const int PLAYER_ATTACK = 1;
const int PLAYER_HEAL = 2;
//死亡時のＨＰ
const int DEAD_HP = 0;