#include<iostream>
#define ll long long int
using namespace std;

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		int arr[n];
		for(ll i=0;i<n;i++){
			arr[i]=0;
		}
		ll untaken_princess = -1;
		for(ll i=0;i<n;i++){
			ll k;
			cin>>k;
			ll k_list[k];
			for(ll j=0;j<k;j++){
			    cin>>k_list[j];
			}
			bool kingdom_found = false;
			for(ll z=0;z<k;z++){
			    ll a = k_list[z]-1;
				if(arr[a]==0){
					arr[a]=1;
					kingdom_found = true;
					break;
				}
			}
			if(kingdom_found==false){
				untaken_princess = i;
			}
		}
		bool improve = false;
		for(ll x=0;x<n;x++){
			if(arr[x]==0){
			    improve = true;
				cout<<"IMPROVE"<<endl;
				cout<<untaken_princess+1<<" "<<x+1<<endl;
				break;
			}
		}
		if(improve==false){
		    cout<<"OPTIMAL"<<endl;
		}
	}
	return 0;
}
/*
5
4
2 2 3
2 1 2
2 3 4
1 3
2
0
0
3
3 1 2 3
3 1 2 3
3 1 2 3
1
1 1
4
1 1
1 2
1 3
1 4
*/