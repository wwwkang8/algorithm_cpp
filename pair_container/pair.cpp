/*
pair
- pair�� ����ϸ� �� �ڷ��� T1, T2�� ���� �� �ִ�.
- �׻� 2���� ���´�.
- ù ��° �ڷ�� first
- �� ��° �ڷ�� second���� ������ �� �ִ�.
- #include <algorithm>, #include <vector>���� �̹� �����ϰ� �ִ�.
- make_pair()�� �̿��ϰų� �����ڸ� �̿��ؼ� ���� �� �ִ�.
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
	pair<int, int> p1;
	cout << p1.first << ' ' << p1.second << '\n';

	p1 = make_pair(10, 20);
	cout << p1.first << ' ' << p1.second << '\n';

	p1 = pair<int, int>(30, 40);
	cout << p1.first << ' ' << p1.second << '\n';

	pair<int, int> p2(50, 60);
	cout << p2.first << ' ' << p2.second << '\n';

	p1 = make_pair(20, 30);
	pair<int, int> p3(30, 50);
	cout << p3.first << ' ' << p3.second << '\n';

	pair<int, int> p4;
	p4 = make_pair(30, 50);
	cout << p4.first << ' ' << p4.second << '\n ';


	return 0;
}