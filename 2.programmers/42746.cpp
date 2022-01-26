#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
#include <sstream>
using namespace std;

// https://programmers.co.kr/learn/courses/30/lessons/42746   다시 풀기


bool cmp(string a, string b){

    return a+b > b+a;
}


string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;

    for(auto num : numbers){
        temp.push_back(to_string(num));
    }
    sort(temp.begin(), temp.end(), cmp);
    if(temp.at(0) == "0") return "0";
    for(auto num : temp){
        answer += num;
    }




    return answer;
}


int main(void){

    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    solution(numbers);


    return 0;
}
