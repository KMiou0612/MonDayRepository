#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(int hp, int attack, int defence, int evasion)
{
	plyAtk = attack;
	plyDef = defence;
	plyEvs = evasion;
}

int Player::choice()
{
	cout << "‚±‚Ìƒ^[ƒ“‚É‚·‚é‚±‚Æ‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n";
	cout << "1‚ÅUŒ‚\n";
	cout << "2‚Å‰ñ•œ\n";
}