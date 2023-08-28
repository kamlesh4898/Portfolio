#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,k;
        cin>>n>>k;
        string s[n];
        cin>>s;
        for(int i=1;i<n-2;i++){
            int temp=s[n-i+1];
            s[n-i+1]=s[n-i-1]
            s[n-i-1]=temp;
        }
        cout<<s<<endl;
    }
}