#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll l,r;
		cin>>l>>r;
		if(l==r){
			cout<<l<<endl;
		}
		else{
			ll temp;
			temp = 1;
			while(r/temp>0){
				if(temp==r){
					break;
				}
				temp = temp*2;
			}
			if(temp-1==r){
				cout<<r<<endl;
			}
			else{
				if(temp!=r){
					temp=temp/2;
				}
				if(temp==r){
					cout<<temp-1<<endl;
				}
				else if((l<temp)&&(temp<r)){
					cout<<temp-1<<endl;
				}
				else if(temp==l){
					cout<<temp+1<<endl;
				}
				else if(temp<l){
					cout<<l<<endl;
				}
			}
		}

	}
	return 0;
}