#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {

	set<int> s1; //크기 0
	set<int> s2 = { 1,2,3,4,5 };//기본적으로 오름차순으로 정렬
	set<int> s3 = { 1,1,1,2,2,2,3,3,3,3 }; //중복을 허용하지 않기 때문에 크기가 3인 set이다.
	/*기본적으로 Set은 오름차순으로 정렬된다*/

	cout << "s1.size() = " << s1.size() << "\n";
	cout << "s2.size() = " << s2.size() << "\n";
	cout << "s3.size() = " << s3.size() << "\n";

	set<int, greater<int>> s4; //내림차순으로 정렬된다

	set<int> s;
	s.insert(1); s.insert(3); s.insert(2);
	cout << "s.size() = " << s.size() << "\n";

	pair<set<int>::iterator, bool> result = s.insert(4);
	cout << "result iterator = " << *result.first << "\n";
	cout << "result bool = " << result.second << "\n";

	auto result2 = s.insert(3);
	cout << "result2 iterator = " << *result2.first << "\n"; //현재 set에는 이미 3이 있다.
	cout << "result2 bool = " << result2.second << "\n";//삽입에 실패했기 때문에 0이 출력된다.

	set<int> s5 = { 1,2,3,4,5 };
	s.erase(s.begin());
	cout << "s5.size() = " << s.size() << "\n";

	


















	return 0;
}