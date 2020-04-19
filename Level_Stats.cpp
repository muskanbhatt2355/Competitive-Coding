#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		bool is = false;
		ll p[n+1]={0};
		ll c[n+1]={0};
		for(ll j=1;j<=n;j++){
			cin>>p[j]>>c[j];
			ll diff_p;
			ll diff_c;
			diff_p = p[j]-p[j-1];
			diff_c = c[j]-c[j-1];
			if(diff_p<diff_c){
				cout<<"NO"<<endl;
				is = true;
				break;
			} 
			else if(diff_p<0){
				cout<<"NO"<<endl;
				is = true;
				break;
			}
			else if(diff_c<0){
				cout<<"NO"<<endl;
				is = true;
				break;
			}
		}
		if(is == false){
			cout<<"YES"<<endl;
		}

	}
	return 0;
}