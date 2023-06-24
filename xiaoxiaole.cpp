#include<bits/stdc++.h>
using namespace std;
int t,n,a[51];
bool flag=true;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }sort(a+1,a+1+n);
		for(int i=1;i<n;i++)if(a[i+1]-a[i]>1)flag=false;
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}return 0;
}