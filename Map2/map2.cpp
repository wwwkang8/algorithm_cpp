#include <iostream>
#include <map>
using namespace std;

int main() {

	//map�� key�� value�� �̷���� �ִ�. 
	map<int, int> d1; //���̰� 0�� ��

	map<int, int> d2 = { {1,2}, {3,4}, {5,6} };
	
	cout << "d1.size() = " << d1.size() << '\n';
	cout << "d2.size() = " << d2.size() << '\n';

	d1[10] = 20;
	cout << "d1[10] = " << d1[10] << '\n'; //10�� ���ε� 20�� ���
	cout << "d2[1] = " << d2[1] << '\n';

	return 0;
}