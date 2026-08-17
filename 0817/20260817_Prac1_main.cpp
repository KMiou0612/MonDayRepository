#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
//投げる球の種類の最小値
const int PITING_MIN = 0;
//投げる球の種類の最大値
const int PITING_MAX = 3;
//確率
const int PROBABILITY = 4;
//ストライクの最大値
const int STRIKE_COUNT = 3;
//ボールの最大値
const int BALL_COUNT = 4;
//アウトの最大値
const int OUT_COUNT = 3;
//ヒットの最大値
const int HIT_COUNT = 4;

//メイン関数
int main(void)
{
    //変数宣言
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ゲームの前提と目的の説明
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //アウトが３回以上、ヒットが４回以上になるまでのゲームループ
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        //ゲームの進め方の説明
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力チェック
        while (true)
        {
            //プレイヤーの入力
            cin >> ply;
            //もしも入力された数字が投げる球の種類の最小値より小さく、最大値より大きければ
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                //以下を表示する
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            //そうでなければ
            else
            {
                //入力チェックのループを抜ける
                break;
            }
        }

        //選択の演出
        PitingType(ply);

        //敵の選択
        emy = rand() % PROBABILITY;

        //成功率
        prod = rand() % PROBABILITY;
        //もしプレイヤーと敵の回答が違ったとき、
        if (ply != emy)
        {
            //prodが０であればボール
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                //ボールの数を増やす
                Ball++;
            }
            //そうでなければストライク
            else
            {
                cout << "ストライク！！" << endl;
                //ストライクの数を増やす
                Strike++;
            }
        }
        //プレイヤーと敵の回答が同じだった時、
        else
        {
            //ストライクの数を０にする
            Strike = 0;
            //ボールの数を０にする
            Ball = 0;
            //もしprodが１であればアウト
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                //アウトの数を増やす
                Out++;
            }
            //そうでなければヒット
            else
            {
                cout << "HIT!!" << endl;
                //ヒットの数を増やす
                Hit++;
            }
        }
        //もしもストライクがストライクカウント以上か、ボールがボールカウント以上だった時、
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクの数がストライクカウント以上の時は
            if (Strike >= STRIKE_COUNT)
            {
                //アウトを増やす
                Out++;
            }
            //そうでなければ
            else
            {
                //ヒットを増やす
                Hit++;
            }
            //ストライクとボールの数を０にリセットする
            Strike = 0;
            Ball = 0;
        }
        //現状の結果の表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //勝敗の表示
    Result(Out);

    return 0;
}