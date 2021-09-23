#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
#include <sstream>
using namespace std;


vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    queue<int> q;

    for(int i=0; i<progresses.size(); i++){
        int d = (100 - progresses[i])/speeds[i];
        if((progresses[i] + d*speeds[i]) != 100) d++;
        days.push_back(d);
    }

    q.push(days[0]);
    for(int i=1; i<days.size(); i++){
        if(q.front() >= days[i]){
            q.push(days[i]);
        }else{
            answer.push_back(q.size());
            while(!q.empty()) q.pop();
            q.push(days[i]);
        }
    }

    if(!q.empty()) answer.push_back(q.size());




    return answer;
}


int main(void){

    vector<int> progresses = { 95, 90, 99, 99, 80, 99 };
    vector<int> speeds = { 1, 1, 1, 1, 1, 1 };

    vector<int> answer = solution(progresses, speeds);

    for(int i=0; i<answer.size(); i++){
        cout << answer.at(i) << " ";
    }



    return 0;
}
