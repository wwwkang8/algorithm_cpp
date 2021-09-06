#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
using namespace std;

/**
 * 문제 : 신규아이디 추천
 * 링크 : https://programmers.co.kr/learn/courses/30/lessons/72410
 * */

string solution(string new_id) {
    string answer = "";
    string first_id = new_id;

    //1단계 : 소문자로 변환
    for(int i=0; i<first_id.size(); i++){
        first_id[i] = tolower(first_id[i]);
    }
    cout << "소문자로 변환 : " << first_id << "\n";

    //2단계 : 특정 문자만 남기고 모두 제거
    for(int i = 0; i < new_id.length(); ) {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9')
            || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            i++;
            continue;
        }

        new_id.erase(new_id.begin() + i);
    }

    // 3 단계
    for(int i = 1; i < new_id.length(); ){
        if (new_id[i] == '.' && new_id[i - 1] == '.'){
            new_id.erase(new_id.begin() + i);
            continue;
        }
        else i++;
    }

    //4단계
    if(first_id.front() == '.') first_id.erase(first_id.begin());
    if(first_id.back() == '.') first_id.erase(first_id.end() - 1); //문자열의 마지막은 null문자이기 때문에

    //5단계
    if(first_id.length() == 0){
        first_id = "a";
    }

    //6단계
    if(first_id.length() >= 16){
        while(first_id.length() != 15){
            first_id.erase(first_id.begin()+15);
        }
    }
    if(first_id.back() == '.') first_id.erase(first_id.end() -1);

    //7단계
    if(first_id.length() <=2){
        while(first_id.length()!=3){
            first_id.push_back(first_id.back());
        }
    }

    answer = first_id;


    return answer;
}

int main(void){

    string new_id = "asodiABCDEwpoe2..232.2";

    string answer = solution(new_id);

    cout << answer;


    return 0;
}
