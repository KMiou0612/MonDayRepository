#pragma once
class MagicalGirl
{
public:

	int girl[2];

	/// <summary>
	/// コンストラクタ
	/// </summary>
	MagicalGirl();

	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~MagicalGirl();

	/// <summary>
	/// 戦闘行動
	/// </summary>
	virtual void Fight() = 0;

	/// <summary>
	/// プロフィール表示
	/// </summary>
	virtual void ShowProfile();
};

