#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int number, temp;
queue<int> que;

int main() {

    cin >> number;

    /** 큐에 숫자 push 하여 넣  */
    for(int i=1; i<=number; i++){
        que.push(i);
    };

    while(que.size() > 1){
        /** 맨위의 카드 버리기 */
        cout << que.front();
        cout << " ";
        que.pop();

        /** 그 다음 맨위의 카드를 맨 뒤로 넣기 */
        int temp = que.front();
        que.pop();
        que.push(temp);

    }

    /** 맨마지막에 남은 카드 출력 */
    cout << que.front();


    return 0;
}
