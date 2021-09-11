#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
using namespace std;

/**
 * 문제 : 전화번호 목록(해시 문제)
 * 링크 : https://programmers.co.kr/learn/courses/30/lessons/42577
 * */


bool solution(vector<string> phone_book) {
    bool answer = true;

    /** 1번 : 정렬한다 --> 제일 작은거부터 정렬
     * 정렬을 하면 결국은 앞자리수가 비슷한것끼리 오름차순으로 정렬이 된다
     * 그렇기 때문에 i번째, i+1번째가 비교가 가능.
     * */

    sort(phone_book.begin(), phone_book.end());

    /** 2번 : for */
    if(phone_book.size() > 1){
        for(int i=0; i<=phone_book.size() - 1; i++){
            if(phone_book[i+1].find(phone_book[i]) != string::npos){
                answer = false;
            }
        }
    }


    return answer;

}

int main(void){

    vector<string> phone_book = { "12","131","13125","567","88"};

    bool result = solution(phone_book);

    cout << "결과 : " << result;


    return 0;
}
