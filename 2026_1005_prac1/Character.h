#pragma once
class Character
{
protected:
	int hp = MAX_HP;
	int attack;
	int defense;
	int evasion;

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Character();
	
	/// <summary>
	///ステータス表示
	/// </summary>
	void ShowState();
	
	/// <summary>
	/// 攻撃メソッド
	/// </summary>
	/// <param name="target">対象のキャラクターオブジェクト</param>
	void Attack(Character& target);
	
	/// <summary>
	/// 回復
	/// </summary>
	void Recovrey();
	//生存判定
	bool IsAlive();
		//HP取得
	int GetHp();
};

