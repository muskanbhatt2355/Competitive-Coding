#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		ll arr[n];
		ll Count[n+1]={0};
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			Count[arr[i]]++;
		}
		ll max_index = 0;
		ll distinct_els = 0;
		for(ll j=0;j<=n;j++){
			if(Count[j]>=Count[max_index]){
				max_index = j;
			}
			if(Count[j]!=0){
				distinct_els++;
			}

		}
		ll max_count = Count[max_index];
		distinct_els = distinct_els-1;
		if(max_count>distinct_els){
			if(max_count>distinct_els+1){
				cout<<distinct_els+1<<endl;
			}
			else if(max_count==distinct_els+1){
				cout<<distinct_els<<endl;
			}
		}
		else if(max_count==distinct_els){
			cout<<distinct_els<<endl;
		}
		else if(max_count<distinct_els){
			cout<<max_count<<endl;
		}
	}
	return 0;
}