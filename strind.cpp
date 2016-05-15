#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    while(n--){
        string str1, str2;
        cin>>str1;
        cin>>str2;
        vector<int> arr;
        for(int i=0; i<=(int('z')-int('a'));i++){
            arr.push_back(0);
        }
        bool flag=0;
        for(int i=0; i<str1.length();i++){
            arr[int(str1[i])-int('a')] =1;
        }
        
        for(int i=0; i<str2.length();i++){
            if(arr[int(str2[i])-int('a')]==1){
                
                flag =1;
            }
        }
        if (flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

