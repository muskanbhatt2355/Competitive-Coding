#include<iostream>
using namespace std;
#define ll long long int
const ll N=1000000000+1;

int main(){
	ll n,k;
	cin>>n>>k;
	ll Count[N];
	for(ll j=0;j<N;j++){
		Count[j]=0;
	}
	for(ll i=0;i<n;i++){
		ll ip;
		cin>>ip;
		Count[ip]++;
	}
	//finding the no. with max Count
	ll x=0;///x is max_count_index
	for(ll j=0;j<N;j++){
		if(Count[j]>Count[x]){
			x=j;
		}
	}
	ll count_max=Count[x];
	ll m=0;
	ll M=N-1;
	ll steps=0;
	while(count_max<k){
		//starting no.
		for(ll j=m;j<N;j++){
			if(Count[j]!=0){
				m=j;
				break;
			}
		}
		for(ll j=M;j>=0;j--){
			if(Count[j]!=0){
				M=j;
				break;
			}
		}

		if((M-x)<=(x-m)){
			//i.e. if x is closer to the end
			steps = steps + (M-x);
			Count[M]--;
			count_max++;
		}
		else if((M-x)>(x-m)){
			//i.e. if x is closer to the beginning
			steps = steps + (x-m);
			Count[m]--;
			count_max++;
		}

	}
	cout<<steps;
	return 0;
}