#pragma once
class VendingManchine
{
private:
	int money;
	int colaStock;
public:
	VendingManchine();
	void insertMoney(int amount);
	void buyCola();
	int getMoney() const;
	int getColaStock() const;
};

