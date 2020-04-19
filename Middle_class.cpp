#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n,x;
		cin>>n>>x;
		double arr[n]={0.0};
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		reverse(arr,arr+n);
		//for(ll i=0;i<n;i++){
			//cout<<arr[i]<<" ";
		//}
		cout<<endl;
		double sum = arr[0];
		double avg = arr[0];
		ll index = 0;
		if(avg>=x){
			index = 1;
		}		
			//cout<<index<<" "<<sum<<" "<<avg<<endl;
		while(avg>=x){
			sum = sum + arr[index];
			index++;
			avg = sum/index;
			//cout<<index<<" "<<sum<<" "<<avg<<endl;
		}
		if(index==0){
			cout<<index<<endl;
		}
		else{
			cout<<index-1<<endl;
		}		
	}
	return 0;
}