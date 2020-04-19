#include<iostream>
#define ll long long int
using namespace std;

     
int main(){
  	ll t;
   	cin>>t;
   	for(ll i=0;i<t;i++){
  		ll n,k;
   		cin>>n>>k;
   		ll ans=(n-k)%2;
   		ll p = (k*(k-1))/2;
   		ll x = (n-k)/2;
   		if((ans==0)&&(n>=(k*k))){
   			cout<<"YES"<<endl;
   		}
   		else{
   			cout<<"NO"<<endl;
   		}
   	}
   	return 0;
}

