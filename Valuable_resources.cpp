#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n;
	cin>>n;
	ll arr_x[n];
	ll arr_y[n];
	for(ll i=0;i<n;i++){
		cin>>arr_x[i]>>arr_y[i];
	}
	ll x_max = arr_x[0];
	ll x_min = arr_x[0];
	ll i = 0;
	while(i<n){
		if(x_max<arr_x[i]){
			x_max = arr_x[i];
		}
		if(x_min>arr_x[i]){
			x_min = arr_x[i];
		}
		i++;
	}

	ll y_max = arr_y[0];
	ll y_min = arr_y[0];
	ll j = 0;
	while(j<n){
		if(y_max<arr_y[j]){
			y_max = arr_y[j];
		}
		if(y_min>arr_y[j]){
			y_min = arr_y[j];
		}
		j++;
	}
	ll len = max((x_max-x_min),(y_max-y_min));
	cout<<len*len;
	return 0;
}