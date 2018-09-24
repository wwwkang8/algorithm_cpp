/*
pair
- pair를 사용하면 두 자료형 T1, T2를 묶을 수 있다.
- 항상 2개를 묶는다.
- 첫 번째 자료는 first
- 두 번째 자료는 second으로 접근할 수 있다.
- #include <algorithm>, #include <vector>에서 이미 포함하고 있다.
- make_pair()를 이용하거나 생성자를 이용해서 만들 수 있다.
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