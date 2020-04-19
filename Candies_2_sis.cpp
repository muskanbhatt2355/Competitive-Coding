#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		if(n==0){
			cout<<0<<endl;
		}
		else if(n%2==0){
			ll temp;
			temp = n/2;
			cout<<temp-1<<endl;
		}
		else if(n%2!=0){
			ll temp;
			temp = n/2;
			cout<<temp<<endl;
		}
	}
	return 0;
}