#include <tuple>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	//변수 t에 튜플을 만들었다
	auto t = make_tuple(10, 20, 30);

	int x = get<0>(t); //튜플의 인덱스 번호를 이용해서 값을 가져온다.
	int y = get<1>(t);
	int z = get<2>(t);

	cout << x << ' ' << y << ' ' << z << '\n';

	x = y = z = 0;

	//tie 함수를 이용하면 10,20,30 값을 순서대로 x,y,z에 맵핑해준다.
	tie(x, y, z) = t;

	cout << x << ' ' << y << ' ' << z << '\n';

	auto u = make_tuple(60, 70, 80);
	int i = get<0>(u);
	int j = get<1>(u);
	int k = get<2>(u);




	return 0;
}