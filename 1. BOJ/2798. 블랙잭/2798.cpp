#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
using namespace std;

int main(void){

    int N, M;
    int sum, max = 0;
    int num[100] = { 0, };

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            for (int k = j+1; k < N; k++) {
                sum = num[i] + num[j] + num[k];
                if (sum > max && sum <= M)
                    max = sum;
            }
        }
    }
    printf("%d\n", max);




    return 0;
}
