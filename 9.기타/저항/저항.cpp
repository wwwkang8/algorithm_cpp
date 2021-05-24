#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
문제 : 저항
내용 : 
문제 링크 : https://www.acmicpc.net/problem/1076
전자 제품에는 저항이 들어간다. 저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다.

처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다.

저항의 값은 다음 표를 이용해서 구한다.

백준 답 : https://gist.github.com/Baekjoon/9a5d86db0452703ec384


*/
int main() {
	string color[3];
	map<string, int> om1 = { {"black", 0},{"brown", 1}, {"red",2}, {"orange",3},{"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9} };
	map<int, int> om2 = { {0,1}, {1,10}, {2,100}, {3, 1000},{4, 10000}, {5, 100000}, {6, 1000000}, {7, 10000000}, {8, 100000000}, {9, 1000000000} };
	for (int i = 0; i < 3; i++) {
		cin >> color[i];
	}
	long long answer = 0;
	answer += 10 * om1[color[0]];
	answer += 1 * om1[color[1]];
	answer *= om2[om1[color[2]]];
	cout << answer<<'\n' ;

	return 0;
}