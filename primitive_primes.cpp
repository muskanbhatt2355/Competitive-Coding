#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n,m,p;
	cin>>n>>m>>p;
	/*
	ll arr_N[n]={0};
	for(ll i = 0;i<n;i++){
		cin>>arr_N[i];
	}
	ll arr_M[m]={0};
	for(ll i = 0;i<n;i++){
		cin>>arr_M[i];
	}*/

	ll x_power_in_N = 0;
	for(ll i = 0;i<n;i++){
		ll temp;
		cin>>temp;
		if(temp%p!=0){
			x_power_in_N = i;
			break;
		}
	}
	ll x_power_in_M = 0;
	for(ll i = 0;i<n;i++){
		ll temp2;
		cin>>temp2;
		if(temp2%p!=0){
			x_power_in_M = i;
			break;
		}
	}
	ll x_power_in_C = 0;
	x_power_in_C = x_power_in_M + x_power_in_N;
	cout<<x_power_in_C;
	return 0;
}
   /* #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int m,n,p,l,ll;
        cin>>m>>n>>p;
        int a;
        for(int i=0;i<m;i++) {scanf("%d",&a); if(a%p) l=i;}
        for(int i=0;i<n;i++) {scanf("%d",&a); if(a%p) ll=i;}
        printf("%d\n",l+ll);
    }*/

