#include <iostream>
// #include <cstdio>  // uncomment to use scanf/printf instead of cin/cout
#include <sstream>
#include <string>

using namespace std;

int main() {
	int balance = 20000;
	int overDis = 0; //�ʰ� �̵��Ÿ�
	string line;
	getline(cin, line);
	stringstream ss(line);
	for (int distance; !(ss >> distance).fail(); ) {
		// @todo Write your code here.
		if (distance <= 40) {
			if (distance < 4) {//�ּ� �̵��Ÿ��� 4km���� ���ٸ�
				cout << balance; //�뷱���� ����ϰ�
				exit(0);// ���α׷��� �����Ѵ�
			}else if(balance < 720) { // �ܾ��� �⺻��ݺ��� ���ٸ� �ܾ� ��� �� ���α׷� �����Ѵ�.
				cout << balance;
				exit(0);
			}

			balance = balance - 720;//4km�̻��̸� �⺻����� �A��.
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