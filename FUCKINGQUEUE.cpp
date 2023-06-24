#include<bits/stdc++.h>
using namespace std;
int n,t,f;
char s[51];
int main(){
    cin>>n>>t;
    for(int i=1;i<=n;i++)cin>>s[i];
    while(f<t){
        for(int i=1;i<=n;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }f++;
    }for(int i=1;i<=n;i++)cout<<s[i];
    return 0;
}
