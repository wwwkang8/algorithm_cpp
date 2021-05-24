#include <iostream>
// #include <cstdio>  // uncomment to use scanf/printf instead of cin/cout
#include <sstream>
#include <string>

using namespace std;

int main() {
	int balance = 20000;
	int overDis = 0; //초과 이동거리
	string line;
	getline(cin, line);
	stringstream ss(line);
	for (int distance; !(ss >> distance).fail(); ) {
		// @todo Write your code here.
		if (distance <= 40) {
			if (distance < 4) {//최소 이동거리인 4km보다 적다면
				cout << balance; //밸런스를 출력하고
				exit(0);// 프로그램을 종료한다
			}else if(balance < 720) { // 잔액이 기본요금보다 적다면 잔액 출력 후 프로그램 종료한다.
				cout << balance;
				exit(0);
			}

			balance = balance - 720;//4km이상이면 기본요금을 뺸다.
		}
		else {
			if ((distance - 40) % 8 == 0) {
				overDis = (distance - 40) / 8;
			}
			else {
				overDis = (distance - 40) / 8 + 1;
			}


			if (distance > 178) {
				cout << balance;
				exit(0);
			}
			else if (balance<720+overDis*80) {
				cout << balance;
				exit(0);
			}

			balance = balance -720- overDis*80;
			
		}
	}
	cout << balance;
	// @todo Write your code here.

	cout << endl;

	return 0;
}