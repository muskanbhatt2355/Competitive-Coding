#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n,A,B;
		cin>>n>>A>>B;
		string str="abcdefghijklmnopqrstuvwxyz";
		char arr[n];
		ll k=0;
		for(ll i=0;i<A;i++){
			if(k==B){
				k=0;
			}
			arr[i]=str[k];
			k++;
		}
		ll left = 0;
		ll right = A;
		while(right<=n-1){
			arr[right]=arr[left];
			left++;
			right++;
		}
		for(ll j=0;j<n;j++){
			cout<<arr[j];
		}
		cout<<endl;
	}
	return 0;
}