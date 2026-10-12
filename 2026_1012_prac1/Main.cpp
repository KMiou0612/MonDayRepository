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

/*
〇追加分1
Character クラスを継承して、以下の3つのクラスを作成してください。

Player：Attack() をオーバーライドし、「剣で攻撃した！」と表示する。

Enemy：Attack() をオーバーライドし、「かみつき攻撃！」と表示する。

Boss：Attack() をオーバーライドし、「強力な必殺技を放った！」と表示する。

それぞれのクラスで、親クラスのコンストラクタを利用して名前を設定できるようにしてください。

※追加クラス
・Player
・Enemy
・Boss
*/

/*
〇追加分２
戦闘クラスを作成しましょう

戦闘の進行を管理する BattleManager クラスを作成してください。

戦闘を開始する StartBattle() メソッドを作成する。

StartBattle() では、キャラクターの名前を表示してから、攻撃処理を実行する。

キャラクターの情報や攻撃処理そのものは、各キャラクターのクラスに任せる。

BattleManager は戦闘の進行管理に専念する。

※追加クラス
・Battle Manager
*/

#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
using namespace std;

int main(void)
{
	//コンストラクタ
	//Character character("キャラクター");
	//cout << characer.GetName() << endl;
	
	//character.Attack();

	string playerName;
	string enemyName;
	string bossName;

	cout << "名前を入力してください。" << endl;
	cout << "勇者" << endl;
	cin >> playerName;
	cout << "敵" << endl;
	cin >> enemyName;
	cout << "ボス" << endl;
	cin >> bossName;

	//コンストラクタ
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	cout << "勇者の名前：" << player.GetName() << endl;
	cout << "敵の名前：" << enemy.GetName() << endl;
	cout << "ボスの名前：" << boss.GetName() << endl;

	player.Attack();
	enemy.Attack();
	boss.Attack();

	return 0;
}