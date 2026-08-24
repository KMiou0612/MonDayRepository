/*問題：

次の配列が用意されています。
int numbers[5] = { 10, 20, 30, 40, 50 };

この配列に入っている5つの値を、ポインタを使って表示するプログラムを作成してください。

【条件】
・配列の要素を表示するときに numbers[i] を使用してはいけません。
・配列の先頭アドレスをポインタに保存してください。
・ポインタを使って配列の各要素を順番に取得してください。
・for文を使用してください。

【実行結果】
10
20
30
40
50
【ポイント】
ポインタを使うことで、配列の先頭アドレスから各要素の値を取得できることを確認してください。 */

#include <iostream>
using namespace std;

int main(void)
{
	int numbers[5] = { 10,20,30,40,50 };
	int* pNumbers;		

	//pNumbersをnumers[0]に対応させる
	pNumbers = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << "numbers[" << i << "] : " << * (pNumbers + i) << endl;
	}

	return 0;
}