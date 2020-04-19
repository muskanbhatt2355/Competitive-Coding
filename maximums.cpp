#include<iostream>
using namespace std;
#define ll long long int

int main(){
	ll n;
	cin>>n;
	ll b[n];
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	ll Max = 0;
	ll temp = 0;
	for(ll j=0;j<n;j++){
		Max = max(Max,temp);
		ll a;
		a = b[j] + Max;
		cout<<a<<" ";
		temp = a;
	}
	return 0;
}
/*
5
0 1 1 -2 1

0 1 2 0 3 

3
1000 999999000 -1000000000

1000 1000000000 0 */