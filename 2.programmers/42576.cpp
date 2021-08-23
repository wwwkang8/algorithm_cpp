#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
using namespace std;

/**
 * 문제 : 완주하지 못한 선수
 * 링크 : https://programmers.co.kr/learn/courses/30/lessons/42576
 * */

string solution(vector<string> participant, vector<string> completion) {

    string answer = "";

//    for(int i=0; i<participant.size(); i++){
//        for(int j=0; j<completion.size(); j++){
//            if(participant.at(i) == completion.at(j)){
//                participant[i] = "F";
//                completion[j]="K";
//            }
//        }
//    }
//
//    for(int k=0; k<participant.size(); k++){
//        if(participant.at(k) != "F"){
//            answer = participant.at(k);
//        }
//    }

//    sort(participant.begin(), participant.end());
//    sort(completion.begin(), completion.end());
//
//    for(int i=0; i<participant.size(); i++){
//        if(participant.at(i) != completion.at(i)){
//            answer = participant.at(i);
//        }
//    }

    map<string, int> m;

    for(auto c: completion){
        m[c] += 1;
    }

    for(auto p : participant){
        m[p] -= 1;
        if(m[p]<0){
            return p;
        }
    }



    return answer;
}

int main(void){

    vector<







    return 0;
}
