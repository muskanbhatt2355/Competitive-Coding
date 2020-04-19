#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n,x;
		cin>>n>>x;
		ll x_count=x;
		ll arr[101];
		for(int j=0;j<=100;j++){
			arr[j]=0;
		}
		for(ll i=0;i<n;i++){
			ll temp;
			cin>>temp;
			if(arr[temp]==0){
				arr[temp]++;
			}			
		}
		int k=1;
		while(x_count>-1){
			//cout<<k<<" ";
			if(k<=100){
				if(arr[k]==1){
					k++;
				}
				else{
					x_count--;
					k++;
				}
				//cout<<x_count<<endl;
			}
			else{
				x_count--;
				k++;
			}
		}
		cout<<k-2<<endl;
	}
	return 0;
}