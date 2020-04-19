#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n,m;
		cin>>n>>m;
		ll sum = 0;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			sum = sum + arr[i];
		}
		ll d = sum - arr[0];
		if(arr[0] + d>=m){
			cout<<m<<endl;
		}
		else{
			cout<<sum<<endl;
		}
	}
	return 0;
}