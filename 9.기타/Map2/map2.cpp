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
	cout << "d2[1] = " << d2[1] << '\n'; //1에 맵핑된 2가 출력된다.
	cout << "d2.size() = " << d2.size() << '\n';
	cout << "d2[2] = " << d2[2] << '\n';//2에 맵핑된 값이 없어서 0으로 맵핑. 크기가 1개 증가한다.
	cout << "d2.size() = " << d2.size() << '\n';
	cout << "d2[3] = " << d2[3] << '\n';//3에 맵핑된 값 4가 출력된다.
	cout << "d2[4] = " << d2[4] << '\n';
	cout << "d2[5] = " << d2[5] << '\n';

	/*map을 이용한 제곱근 구하기*/
	map<int, int> d3;
	map<int, int> d4;

	for (int i = 1; i <= 9; i += 2) {
		d3[i] = i * i;
		d4[i] = i * i;
	}

	cout << "d3.size() = " << d3.size() << '\n';
	cout << "d4.size() = " << d4.size() << '\n';

	for (int i = 1; i <= 10; i++) {
		if (d3[i]) { // 값이 없으면 0과 맵핑하여 크기가 1씩 증가
			cout << i << ' '; //값이 존재한다면 출력
		}
	}
	cout << '\n';
	for (int i = 1; i <= 10; i++) {
		if (d4.count(i)) {// key값에 해당하는 원소들(value)의 개수를 반환한다.
			
			cout << i << ' ';
		}
	}
	cout << '\n';
	cout << "d3.size() = " << d3.size() << '\n';
	cout << "d4.size() = " << d4.size() << '\n';

	/*map의 이터레이터*/
	map<int, int> d = { {1,2}, {3,4}, {5,6} };

	for (auto it = d.begin(); it != d.end(); ++it) {//이터레이터를 이용하여 키와 원소 출력
		// first가 키, second가 값이다.
		cout << (it->first) << ' ' << (it->second) << '\n';
	}

	for (auto p : d) {
		cout << p.first << ' ' << p.second << '\n';
	}


















	return 0;
}