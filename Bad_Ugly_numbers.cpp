#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll n_number(ll n){
	ll mult = 1;
	for(ll i=1;i<n;i++){
		mult = mult*10;
	}
	return mult;
}

ll ugly_no(ll n){
	ll num = n_number(n);
	while(num<n_number(n+1)){
		bool div = false;
		ll number=num;
		for(ll i=0;i<n;i++){
			ll digit = number%10;
			if(digit==0){
			    div = true;
			    break;
			}
			number=number/10;
			if((num%digit)==0){
				div = true;
				break;
			}
		}
		if(div==false){
			return num;
		}
		else{num=num+1;}
	}
	return -1;
}

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		cout<<ugly_no(n);
		cout<<endl;
	}
}