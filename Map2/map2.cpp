#include <iostream>
#include <map>
using namespace std;

int main() {

	//map은 key와 value로 이루어져 있다. 
	map<int, int> d1; //길이가 0인 맵

	map<int, int> d2 = { {1,2}, {3,4}, {5,6} };
	
	cout << "d1.size() = " << d1.size() << '\n';
	cout << "d2.size() = " << d2.size() << '\n';

	d1[10] = 20;
	cout << "d1[10] = " << d1[10] << '\n'; //10에 맵핑된 20이 출력
	cout << "d2[1] = " << d2[1] << '\n';

	return 0;
}