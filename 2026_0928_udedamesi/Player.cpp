#include "Player.h"
#include "Config.h"
using namespace std;

Player::Player()
{
	total = 0;
}

void Player::AddCard(int card)
{
	total += card;
}

int Player::GetTotal()
{
	return total;
}

void Player::ShowStatus()
{
	cout << "Player‚Ì‡ŒvF" << total << endl;
}