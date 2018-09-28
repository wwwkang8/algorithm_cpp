#include <iostream>
#include <set>
#include <functional>
#include <cstdio>
using namespace std;

int main() {

	set<int> s1; //ũ�� 0
	set<int> s2 = { 1,2,3,4,5 };//�⺻������ ������������ ����
	set<int> s3 = { 1,1,1,2,2,2,3,3,3,3 }; //�ߺ��� ������� �ʱ� ������ ũ�Ⱑ 3�� set�̴�.
	/*�⺻������ Set�� ������������ ���ĵȴ�*/

	cout << "s1.size() = " << s1.size() << "\n";
	cout << "s2.size() = " << s2.size() << "\n";
	cout << "s3.size() = " << s3.size() << "\n";

	set<int, greater<int>> s4; //greater�� ����ϸ� ū ���� ���� ���ͼ� ������������ ���.




	set<int> s; //���̰� 0�� Set�� ����
	s.insert(1); s.insert(3); s.insert(2); //Set���� 1,2,3�� �߰�
	cout << "s.size() = " << s.size() << "\n";

	pair<set<int>::iterator, bool> result = s.insert(4);
	cout << "result iterator = " << *result.first << "\n";
	cout << "result bool = " << result.second << "\n";

	auto result2 = s.insert(3);
	cout << "result2 iterator = " << *result2.first << "\n"; //���� set���� �̹� 3�� �ִ�.
	cout << "result2 bool = " << result2.second << "\n";// ���Կ� �����߱� ������ 0�� ��µȴ�.





	set<int> s5 = { 1,2,3,4,5 }; 
	s5.erase(s5.begin()); // ù ��° �ε����� �����͸� �����Ѵ�.
	cout << "s5.size() = " << s5.size() << "\n";

	/*iterator*/
	auto it = s5.begin(); // ���� begin�� 0�� �ε����� �ִ� 2�̴�.
	++it; // �ε��� 1 ������Ų��
	cout << "*it = " << *it << '\n'; // 3�� ����Ű�� �־ 3�� ��µȴ�. 
	it = s5.erase(it); // 3�� �����ϸ� �� ���� ������ 4�� ��ȯ�ȴ�.
	cout << "*it = " << *it << '\n'; //4�� ����Ű�� �־ 4�� ��µȴ�.
	cout << "s5.size() = " << s5.size() << '\n';


	set<int> s6 = { 5,2,4,1,3,7,6 }; //�̷��� ����Ǿ ���������δ� ������������ ���ĵȴ�.
	for (auto it = s6.begin(); it != s6.end(); ++it) {
		cout << *it << ' ';
	}
	// set�� �⺻������ ������������ ���ĵǱ� ������ 1,2,3'''' ������ ��µȴ�.
	cout << '\n';

	for (auto x : s6) {
		cout << x << ' ';
	}
	cout << '\n';

	void print(set<int> &s, set<int>::iterator it) {
		if (it == s.end()) {
			cout << "end\n"; //ã������ ���Ұ� ���� �� end ���
		}
		else {
			cout << *it << '\n';
		}
	}

	set<int> s7 = { 7,5,3,1 };
	auto it = s7.find(1);
	print(s7, it); //��� 1�� ���´�

	it = s7.find(2);
	print(s7, it); //2�� ���� ������ ������ �ʴ´�

	it = s7.find(3);
	print(s7, it);

	it = s7.find(4);
	print(s7, it);

	





























	return 0;
}