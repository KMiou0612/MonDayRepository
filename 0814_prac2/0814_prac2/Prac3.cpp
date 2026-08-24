#include <iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 35,82,17,96,54 };
	int* pNum;
	int max = 0;     //int max; で、後で　max = numbers[0]とする方法もある。

	//配列の先頭アドレスを取得する
	pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << *(pNum + i) << endl;

		if (max < *(pNum + i))
		{
			max = *(pNum + i);
		}
	}

	cout << "最大値：" << max << endl;

	return 0;
}