#include <tuple>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	//���� t�� Ʃ���� �������
	auto t = make_tuple(10, 20, 30);

	int x = get<0>(t); //Ʃ���� �ε��� ��ȣ�� �̿��ؼ� ���� �����´�.
	int y = get<1>(t);
	int z = get<2>(t);

	cout << x << ' ' << y << ' ' << z << '\n';

	x = y = z = 0;

	//tie �Լ��� �̿��ϸ� 10,20,30 ���� ������� x,y,z�� �������ش�.
	tie(x, y, z) = t;

	cout << x << ' ' << y << ' ' << z << '\n';

	auto u = make_tuple(60, 70, 80);
	int i = get<0>(u);
	int j = get<1>(u);
	int k = get<2>(u);




	return 0;
}