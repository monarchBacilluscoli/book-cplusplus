/*
*石头剪刀布游戏
*/
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	while (1) {
		int computer(0), you(0);
		do {
			cout << "你好！ 石头=0, 剪刀=1, 布=2";
			computer = rand() % 3;
			cout << "请出手：";
			cin >> you;
			switch (you - computer) {
			case 0:
				cout << "平手!" << endl;
				break;
			case 1: case -2:
				cout << "你输了!" << endl;				
				break;
			case -1: case 2:
				cout << "你赢了!" << endl;
				break;
			default:
				cout << "出错了！" << endl;
			}
		} while (computer==you);
		cout << "还要玩吗？Y/N:";
		char play;
		cin >> play;
		if (play == 'N' || play == 'n') break;
	}
	return 0;
}