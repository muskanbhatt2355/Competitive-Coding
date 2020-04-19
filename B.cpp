#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		ll arr[n]={0};
		for(ll j=0;j<n;j++){
			cin>>arr[j];
		}
		sort(arr,arr+n);
		ll a=0;
		ll b=n-1;
		vector<ll> dec;
		ll back_diff = abs(arr[n-1]-arr[1]);
		ll front_diff = abs(arr[0] - arr[n-2]);
		if(front_diff>=back_diff){
			dec.push_back(arr[n-1]);
			dec.push_back(arr[0]);
			b = b--;
			a = a++;
			while(a<b){
				dec.push_back(arr[b]);
				dec.push_back(arr[a]);
				b--;
				a++;
			}
			if(a==b){
				dec.push_back(arr[a]);
			}
		}
		else{
			dec.push_back(arr[0]);
			dec.push_back(arr[n-1]);
			b--;
			a++;
			while(a<b){
				dec.push_back(arr[a]);
				dec.push_back(arr[b]);
				b--;
				a++;
			}
			if(a==b){
				dec.push_back(arr[a]);
			}
		}
		reverse(dec.begin(),dec.end());
		for(ll j=0;j<n;j++){
			cout<<dec[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}