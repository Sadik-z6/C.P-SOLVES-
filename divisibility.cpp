#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,a,b;
    cin>>n;
    while(n--) {
        cin>>a>>b;
        if(a%b!=0 && a>b) {
            int mult=a/b;
            cout<<((mult*b)+b)-a<<'\n';
            
        }
        else if(a<b){
            cout<<b-a<<'\n';
            
        }
        else {
            cout<<a%b<<'\n';
            
        }
    }
    
    return 0;
}