#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int main(){
    cin>>a>>b;
    for(int i=0;i<=a.length()-1;i++)c+=a[a.length()-1-i];
    if(c==b)cout<<"YES";
    else cout<<"NO";
    return 0;
}