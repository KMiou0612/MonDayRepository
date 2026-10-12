/*
あなたはゲームプログラマーです。ゲームには「Player（プレイヤー）」「Enemy（敵）」「Boss（ボス）」の3種類のキャラクターが登場します。
以下の内容をコーティングしてください。
親クラスを作成しましょう。

以下の条件を満たすこと。

メンバー変数として、キャラクターの名前を管理する name を用意する。

name は private に設定し、カプセル化する。

コンストラクタで名前を設定できるようにする。

名前を取得するための GetName() メソッドを作成する。

攻撃処理を行う Attack() メソッドを作成する。

Attack() は子クラスでオーバーライドできるようにする。
*/

#include <iostream>
#include "Character.h"
using namespace std;

int main(void)
{
	//コンストラクタ
	Character character("あいうえお");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}