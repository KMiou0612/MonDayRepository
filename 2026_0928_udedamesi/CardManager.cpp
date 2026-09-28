#include "CardManager.h"
#include <cstdlib>
#include <ctime>

CardManager::CardManager()
{
	cardCount = CARD_TOTAL;
}

void CardManager::CreateCards()
{
	int index = 0;

	for (int num = CARD_MIN_NUM; num <= CARD_MAX_NUM; num++)  //１～１１の範囲のカード
	{
		for (int i = 0; i < CARD_SET; i++)
		{
			cards[index] = num;
			index++;
		}
	}
	//シャッフル
	for (int j = 0; j < CARD_TOTAL; j++)
	{
		int randIndex = j + rand() % (CARD_TOTAL - j);
		int temp = cards[j];
		cards[j] = cards[randIndex];
		cards[randIndex] = temp;
	}

	cardCount = CARD_TOTAL;
}

int CardManager::DrawCard()
{
	int card = cards[0];

	//残りのカードを前詰める
	for (int i = 0; i < cardCount - 1; i++)
	{
		cards[i] = cards[i + 1];
	}

	cardCount--;

	return card;
}

int CardManager::GetCardCount()
{
	return cardCount;
}