#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
#include <sstream>
using namespace std;

int price = 1260;
int count12 = 0;
vector<int> coinType = {500, 100, 50, 10};

int main(void){

    for(int i=0; i<coinType.size(); i++) {

        int coin = coinType[i];
        count12 += price / coin;
        price = price % coin;

    }

    cout << count12;


    return 0;
}
