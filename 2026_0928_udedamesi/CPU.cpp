#include "CPU.h"
#include "Config.h"
using namespace std;

CPU::CPU()
{
	total;
}

void CPU::AddCard(int card)
{
	total += card;
}

int CPU::GetTotal()
{
	return total;
}

void CPU::ShowStatus()
{
	cout << "CPU‚Ì‡ŒvF" << total << endl;
}