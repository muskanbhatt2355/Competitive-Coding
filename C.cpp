#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll find_min(ll arr[],ll MAX,ll j){
	ll temp = MAX;
	for(ll k=MAX;k<=j;k++){
		if(arr[temp]>arr[k]){
			temp=k;
		}
	}
	return temp;
}

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		ll arr[n]={0};
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ll max_diff=0;
		ll MAX = 0;
		ll MIN = 0;
		for(ll j=0;j<n;j++){
			if(arr[j]>arr[MAX]){
				MIN = find_min(arr,MAX,j);
				ll diff = arr[MAX] - arr[MIN];
				if(diff>=max_diff){
					max_diff = diff;
				}
				MAX = j;
				//cout<<"MAX is "<<MAX<<endl;				
			}
		}
		MIN = find_min(arr,MAX,n-1);
		//cout<<"MIN is "<<MIN<<endl;
		ll diff = arr[MAX] - arr[MIN];
		//cout<<"diff is "<<diff<<endl;
		if(diff>=max_diff){
			max_diff = diff;
		}
		//cout<<"max_diff is "<<max_diff<<endl;
		ll power = 1;
		ll Count = 0;
		while(power<(max_diff+1)){
			power = power*2;
			Count++;
		}
		//cout<<max_diff<<" ";
		cout<<Count<<endl;
	}
	return 0;
}