#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
using namespace std;


int main(int argc, char* argv[]) {

    int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        int repeat;
        string str;
        cin >> repeat >> str;

        for(int j = 0;j < str.length();j++)
        {
            for(int k = 0;k < repeat;k++)
            {
                cout << str[j];
            }
        }

        cout << endl;

    }
    return 0;

}