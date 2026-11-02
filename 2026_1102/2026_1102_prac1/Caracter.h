#pragma once
#include <iostream>
#include <sstream>
#include "Config.h"
using namespace std;

class Caracter
{
private:
	int hp = MAX_HP;

protected:
	/// <summary>
	/// HP回復メソッド
	/// </summary>
	/// <param name="initialHp">回復数値</param>
	void RecoverHp(int initialHp);
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="initialHp">HP初期値</param>
	Caracter(int  initialHp);

	/// <summary>
	/// ステータス表示
	/// </summary>
	/// <param name="name">表示するキャラクター名</param>
	virtual void ShowStatus(const std::string& name) const;
	
	/// <summary>
	/// ダメージを受ける
	/// </summary>
	/// <param name="damage">ダメージ数値</param>
	void TakeDamage(int damage);

	/// <summary>
	/// HPを取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHp() const;
};