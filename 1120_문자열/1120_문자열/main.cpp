//
//  main.cpp
//  1120_문자열
//
//  Created by Jeong Ho Kang on 2020/07/19.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str1;
    string str2;
    int diff = 0; // 두 문자열의 차이
    int lenDiff = 0;
    
    cin >> str1 >> str2 ;
    
    
    if(str1.length() == str2.length()){
        
        for(int i=0; i<str1.length(); i++){
            if(str1.at(i) != str2.at(i)){
                diff++;
            }
        }
        
    }else{
        lenDiff = (int)str2.length() - (int)str1.length();

//        for(int i=lenDiff; i>0; i--){
//
//            int index = (int)str2.length() - lenDiff;
//            string strAdd = to_string(str2.at(index));
//
//            str1.append(strAdd);
//
//        }
        
        for(int i=0; i<str1.size(); i++){
            if(str1.at(i) != str2.at(i)){
                diff++;
            }
        }
        
    }
    
    cout << diff << "\n" ;
    
    
    
    return 0;
}
