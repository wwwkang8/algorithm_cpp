#include <iostream>
using namespace std;

int d[1001] = { 0 };
int tiles(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 2;

	if (n >= 3) {
		d[n] = tiles(n - 1) + tiles(n - 2);
	}
	return d[n];
}

int main() {
	int n = 0; //n 선언
	cin >> n;
	int answer = tiles(n - 1) + tiles(n - 2);

	cout << answer <<"\n";
	

}
//백준의 정답
/*
#include <cstdio>
int d[1001];
int main() {
d[0]=1;
d[1]=1;
int n;
scanf("%d",&n);
for (int i=2; i<=n; i++) {
d[i] = d[i-1]+d[i-2];
d[i] %= 10007;
}
printf("%d\n",d[n]);
return 0;
}




*/