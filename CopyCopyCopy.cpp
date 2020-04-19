#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		set <ll> S;
		for(ll j=0;j<n;j++){
			ll temp;
			cin>>temp;
			S.insert(temp);
		}
		cout<<S.size()<<endl;
	}
	return 0;
}
	