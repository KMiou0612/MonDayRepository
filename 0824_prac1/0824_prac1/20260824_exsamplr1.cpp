#include <iostream>
using namespace std;

int main(void)
{
    //変数宣言
    int a = 0;
    int* p = &a;    //aのアドレスを取得してpに入れる　　　　　ポインター変数から変数aのアドレスを取得

    //現時点のaの値を表示
    cout << "aの初期値: " << a << endl;

    //中のaごとpの数字を変更する                            　ポインター変数からaの値を変更する
    *p = 10;

    //現在のaの値を表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}