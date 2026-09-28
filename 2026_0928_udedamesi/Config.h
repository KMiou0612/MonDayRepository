#pragma once
#include <iostream>

using namespace std;

//定数宣言
//カードの最小値
const int CARD_MIN_NUM = 1;
//カードの最大値
const int CARD_MAX_NUM = 11;
//カードセットの数
const int CARD_SET = 4;
//カードの枚数
const int CARD_TOTAL = 44;
//目標の値
const int BLACKJACK = 21;
//バーストの値
const int BURST = 22;
//最初にカードを引く枚数
const int START_DRAW_CARD = 2;
//ゲーム中に引くカードの枚数
const int DRAW_CARD = 1;
//カードを引く
const int INPUT_YES = 0;
//カードを引かない
const int INPUT_NO = 1;