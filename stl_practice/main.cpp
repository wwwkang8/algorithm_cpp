#include <iostream>
#include <vector>
using namespace std;

int main() {
	//벡터는 길이를 변경할 수 있는 배열
	vector<int> v1;
	vector<int> v2(10); //길이가 10인 벡터
	vector<int> v3(15);
	vector<int> v4(15,1);//첫번쨰 인자는 길이, 두번째 인자는 초기값 1
	vector<int> v4 = { 1,2,3,4,5 };

	vector<pair<int, int>> v5;
	vector<pair<int, int>> v6 = { {1,2},{3,4} };
	v6.resize(5);
	v6.clear();
	

	return 0;
}