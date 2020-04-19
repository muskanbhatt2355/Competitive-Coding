#include<iostream>
using namespace std;
#define ll long long int
const ll N = 998244353;
ll arr[2000006];

int main(){
	ll n,k;
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll max_sum = k*n - (k*(k-1))/2;
	cout<<max_sum<<" ";

	ll temp =0;
	ll prod = 1;
	for(ll j=1;j<n;j++){
		if(arr[j]>(n-k)){
			if((temp==0)&&(arr[0]<=(n-k))){
				temp = j;
			}
			else{
				ll len = j-temp;
				prod = ((prod%N)*(len%N))%N;
				temp=j;
			}
		}
	}
	cout<<prod<<endl;
	return 0;

}
/*
7 3
2 7 3 1 5 4 6

18 6
*/