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
        string s;
        cin>>s;
        int l =0;
        int r= s.length()-1;
        
        while(l<=r){
            if (s[l]==s[r]){
                l++;
                r--;
            }
            else{
                break;
            }
        }
        
        if (l>=r){
            cout<<-1<<endl;
            continue;
            }
        else{
            int savel=l;
            int saver=r;
            l++;
            int left =1;
            while(l<r){
                if (s[l]==s[r]){
                    l++;
                    r--;
                }
                else{
                    left =0;
                    break;
                    }
                    
            }
            if (left) cout<<savel<<endl;
            else cout<<saver<<endl;
        }
        
    }
    return 0;
}

