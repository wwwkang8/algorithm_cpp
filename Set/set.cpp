#include <iostream>
#include <set>
#include <functional>
#include <cstdio>
using namespace std;

int main() {

	set<int> s1; //크기 0
	set<int> s2 = { 1,2,3,4,5 };//기본적으로 오름차순으로 정렬
	set<int> s3 = { 1,1,1,2,2,2,3,3,3,3 }; //중복을 허용하지 않기 때문에 크기가 3인 set이다.
	/*기본적으로 Set은 오름차순으로 정렬된다*/

	cout << "s1.size() = " << s1.size() << "\n";
	cout << "s2.size() = " << s2.size() << "\n";
	cout << "s3.size() = " << s3.size() << "\n";

	set<int, greater<int>> s4; //greater를 사용하면 큰 것이 먼저 나와서 내림차순으로 출력.




	set<int> s; //길이가 0인 Set을 생성
	s.insert(1); s.insert(3); s.insert(2); //Set에는 1,2,3을 추가
	cout << "s.size() = " << s.size() << "\n";

	pair<set<int>::iterator, bool> result = s.insert(4);
	cout << "result iterator = " << *result.first << "\n";
	cout << "result bool = " << result.second << "\n";

	auto result2 = s.insert(3);
	cout << "result2 iterator = " << *result2.first << "\n"; //현재 set에는 이미 3이 있다.
	cout << "result2 bool = " << result2.second << "\n";// 삽입에 실패했기 때문에 0이 출력된다.





	set<int> s5 = { 1,2,3,4,5 }; 
	s5.erase(s5.begin()); // 첫 번째 인덱스의 데이터를 삭제한다.
	cout << "s5.size() = " << s5.size() << "\n";

	/*iterator*/
	auto it = s5.begin(); // 현재 begin은 0번 인덱스에 있는 2이다.
	++it; // 인덱스 1 증가시킨다
	cout << "*it = " << *it << '\n'; // 3을 가리키고 있어서 3이 출력된다. 
	it = s5.erase(it); // 3을 삭제하면 그 다음 원소인 4가 반환된다.
	cout << "*it = " << *it << '\n'; //4를 가리키고 있어서 4가 출력된다.
	cout << "s5.size() = " << s5.size() << '\n';


	set<int> s6 = { 5,2,4,1,3,7,6 }; //이렇게 저장되어도 내부적으로는 오름차순으로 정렬된다.
	for (auto it = s6.begin(); it != s6.end(); ++it) {
		cout << *it << ' ';
	}
	// set은 기본적으로 오름차순으로 정렬되기 때문에 1,2,3'''' 순서로 출력된다.
	cout << '\n';

	for (auto x : s6) {
		cout << x << ' ';
	}
	cout << '\n';

	void print(set<int> &s, set<int>::iterator it) {
		if (it == s.end()) {
			cout << "end\n"; //찾으려는 원소가 없을 때 end 출력
		}
		else {
			cout << *it << '\n';
		}
	}

	set<int> s7 = { 7,5,3,1 };
	auto it = s7.find(1);
	print(s7, it); //결과 1이 나온다

	it = s7.find(2);
	print(s7, it); //2는 없기 때문에 나오지 않는다

	it = s7.find(3);
	print(s7, it);

	it = s7.find(4);
	print(s7, it);

	





























	return 0;
}