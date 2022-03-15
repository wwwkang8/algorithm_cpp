#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
#include <sstream>
using namespace std;

//a와 b를 비교하여, a>b의 결과를 반환한다.
bool desc(int a, int b){
    return a > b;
}


int main(void){

    // N : 배열의 크기, M : 숫자가 더해지는 횟수, K : 연속해서 더해질 수 있는 최대 횟수
    int N, M, K;
    int answer = 0;

    cin >> N >> M >> K;

    int array[N];

    for(int i=0; i<N; i++){
        cin >> array[i];
    }

    sort(array, array+5, desc);

    // 1. 배열 내에서 첫번쨰로 큰수, 두번쨰로 큰수를 찾아서 더하기만 하면된다.
    while(true) {

        for(int i=0; i<K; i++) {
            if(M == 0) {
                break;
            }

            answer += array[0];
            M--;

        }

        if(M == 0) {
            break;
        }

        answer += array[1];
        M--;

    }

    cout << answer;




    return 0;
}
