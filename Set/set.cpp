#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {

	set<int> s1; //ũ�� 0
	set<int> s2 = { 1,2,3,4,5 };//�⺻������ ������������ ����
	set<int> s3 = { 1,1,1,2,2,2,3,3,3,3 }; //�ߺ��� ������� �ʱ� ������ ũ�Ⱑ 3�� set�̴�.
	/*�⺻������ Set�� ������������ ���ĵȴ�*/

	cout << "s1.size() = " << s1.size() << "\n";
	cout << "s2.size() = " << s2.size() << "\n";
	cout << "s3.size() = " << s3.size() << "\n";

	set<int, greater<int>> s4; //������������ ���ĵȴ�

	set<int> s;
	s.insert(1); s.insert(3); s.insert(2);
	cout << "s.size() = " << s.size() << "\n";

	pair<set<int>::iterator, bool> result = s.insert(4);
	cout << "result iterator = " << *result.first << "\n";
	cout << "result bool = " << result.second << "\n";

	auto result2 = s.insert(3);
	cout << "result2 iterator = " << *result2.first << "\n"; //���� set���� �̹� 3�� �ִ�.
	cout << "result2 bool = " << result2.second << "\n";//���Կ� �����߱� ������ 0�� ��µȴ�.

	set<int> s5 = { 1,2,3,4,5 };
	s.erase(s.begin());
	cout << "s5.size() = " << s.size() << "\n";

	


















	return 0;
}