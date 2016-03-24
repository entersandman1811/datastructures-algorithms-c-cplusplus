#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char pan[1000] ={0};
    cin.getline(pan,1000);
    const char *basestr = "abcdefghijklmnopqrstuvwxyz";
    const char *CapBasestr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count =0;
    
    if (strlen(pan)<26){
        cout<<"not pangram";
    }
    else{
        for (int i = 0; i<strlen(basestr); i++){
            for (int  j =0; j<strlen(pan); j++){
                if(pan[j]==basestr[i]|| pan[j]==CapBasestr[i])count++;              
            }
            if (!count) {
                cout<<"not pangram";
                return 0;
            }
            
            count =0;        
        }
        cout<<"pangram";
    }
    return 0;
}

