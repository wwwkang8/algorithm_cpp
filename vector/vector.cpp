#include <vector>
#include <iostream>
using namespace std;
/*
vector는 길이를 변경할 수 있는 배열이다.



*/
int main() {
	vector<int> v1; //벡터 생성
	vector<int> v2(10); //길이가 10인 벡터 생성
	vector<int> v3(15, 1); //길이가 15이고 초기화값이 1인 벡터 생성
	vector<int> v4 = { 1,2,3,4,5 }; //1,2,3,4,5 값을 가지고 있는 벡터 생성


	vector<pair<int, int>> v5;
	vector<pair<int, int>> v6 = { {1,2},{3,4} };
	vector<vector<int>> v7; //벡터 안에 또 벡터를 생성했다.

	int n = 10, m = 20;
	vector<vector<int>> v8(n, vector<int>(m));

	vector<int> a = { 1,2,3,4,5 };
	a.push_back(6);
	a.push_back(7);

	a.pop_back();
	a.pop_back();
	a.clear();

	a.resize(5);

	a.push_back(1);
	a.push_back(2);
	a.clear();

	vector<int> b = { 1,2,3,4,5 };
	cout << "size= " << b.size() << '\n';

	b.push_back(5);
	cout << "size = " << b.size() << '\n';
	cout << "empty = " << b.empty() << '\n';

	a.clear();
	cout << "size = " << a.size() << '\n';
	cout << "empty = " << a.empty() << '\n';

	vector<int> ac = { 1,2,3 };
	cout << "front = " << ac.front() << '\n';
	cout << "a[1] = " << ac[1] << '\n';
	cout << "back = " << ac.back() << '\n';

	vector<int> d = { 1,2,3,4,5 };
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << '\n';

	for (vector<int> ::iterator it = d.begin(); it != d.end(); ++it) {
		cout << *it << ' ';
	}
	cout << '\n';

	for (auto it = d.begin(); it != d.end(); ++it) {
		cout << "a[" << (it - d.begin()) << "] = " << *it << '\n';
	}

	vector<pair<int, int>> as;
	as.emplace_back(1, 2);
	as.push_back({ 3,4 });
	as.push_back(make_pair(5, 6));



	










	return 0;
}