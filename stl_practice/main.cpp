#include <iostream>
#include <vector>
using namespace std;

int main() {
	//���ʹ� ���̸� ������ �� �ִ� �迭
	vector<int> v1;
	vector<int> v2(10); //���̰� 10�� ����
	vector<int> v3(15);
	vector<int> v4(15,1);//ù���� ���ڴ� ����, �ι�° ���ڴ� �ʱⰪ 1
	vector<int> v4 = { 1,2,3,4,5 };

	vector<pair<int, int>> v5;
	vector<pair<int, int>> v6 = { {1,2},{3,4} };
	v6.resize(5);
	v6.clear();
	

	return 0;
}