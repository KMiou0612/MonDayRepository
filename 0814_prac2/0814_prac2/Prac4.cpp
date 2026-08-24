/*
5個の整数が入った配列を用意し、
関数を使って配列のすべての値を2倍にしてください。

配列には次の値を入れてください。

10、20、30、40、50

【条件】

・配列の値を任意の数字を入力して入力した数字分を倍にする処理は関数にしてください。
・main関数では、配列を作成して関数を呼び出してください。
・関数には配列と要素数を渡してください。
・for文を使用してください。
・関数の中で配列の値を変更してください。

【実行結果】
2を入力する。
変更前
10
20
30
40
50

変更後
20
40
60
80
100*/

#include <iostream>
#include "Prac4_header.h"
using namespace std;

int main(void)
{
	const int MAX_NUM = 5;

	int num[MAX_NUM] = { 10,20,30,40,50 };
	int* pNum;

	pNum = num;

	for (int i = 0; i < MAX_NUM; i++)
	{
		cout << *(pNum + i) << endl;
	}

	return 0;
}