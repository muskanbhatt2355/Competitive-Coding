#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n_sum_left(ll n, ll i){
	ll sum = (i+1)*(i+2);
	sum = sum/2;
	return sum;
}

ll n_sum_right(ll n, ll i){
	ll sum = (n-i-1)*(n-i);
	sum = sum/2;
	return sum;
}

bool all_elements_present(ll low,ll high, ll arr[]){
	ll num_els = high - low + 1;
	ll el[num_els+1];
	for(ll y=0;y<num_els+1;y++){
		el[y]=0;
	}
	for(ll g=low;g<=high;g++){
		el[arr[g]] = 1;
	}
	ll u = 1;
	ll prod = 1;
	while(u<=num_els){
		prod = prod*el[u];
		if(prod == 0){
			break;
		}
		u++;
	}
	if(prod==0){
		return false;
	}
	else{
		return true;
	}


}

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ll sum_L = arr[0];
		ll sum_R = 0;
		for(ll j=1;j<n;j++){
			sum_R = sum_R + arr[j];
		}
		ll counts = 0;
		for(ll j=0;j<n-1;j++){
			if((sum_L==n_sum_left(n,j))&&(sum_R==n_sum_right(n,j))){
				//First check if it has all the elements
				if((all_elements_present(0,j,arr))&&(all_elements_present(j+1,n-1,arr))){
					counts++;
				}
			}
			sum_L = sum_L + arr[j+1];
			sum_R = sum_R - arr[j+1]; 
		}
		cout<<counts<<endl;

		ll sum_L2 = arr[0];
		ll sum_R2 = 0;
		for(ll j=1;j<n;j++){
			sum_R2 = sum_R2 + arr[j];
		}
		for(ll j=0;j<n-1;j++){
			if((sum_L2==n_sum_left(n,j))&&(sum_R2==n_sum_right(n,j))){
				if((all_elements_present(0,j,arr))&&(all_elements_present(j+1,n-1,arr))){
					cout<<j+1<<" "<<n-j-1<<endl;
				}
			}
			sum_L2 = sum_L2 + arr[j+1];
			sum_R2 = sum_R2 - arr[j+1]; 
		}
	}
	return 0;
}