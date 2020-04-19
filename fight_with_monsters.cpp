#include<iostream>
#define ll long long int
using namespace std;

int main(){
		ll n,a,b,k;
		cin>>n>>a>>b>>k;
		ll skips_left = k;
		ll win = 0;
		ll h[n];
		ll skips_req[n];
		for(ll m=0;m<n;m++){
			skips_req[m]=0;
		}
		for(ll j=0;j<n;j++){
			cin>>h[j];
			ll rem = (h[j]%(a+b));
			if((0<rem)&&(rem<=a)){
				h[j]=0;
			}
			else if((a<rem)&&(rem<(a+b))){
				ll skips;
				skips = (rem-a)/a;
				skips = skips + 1;
				skips_req[j] = skips;
			}
			else if(rem==0){
				ll skips;
				skips = (b/a) + 1;
				skips_req[j] = skips;
			}
			cout<<skips_req[j]<<" ";
		}
		ll x = (b/a) + 1;
		ll exx_skips[n];
		for(ll m=0;m<n;m++){
			exx_skips[m]=0;
		}
		ll y =0;
		cout<<endl;
		/*while(skips_left>0){
			ll k;
			k = 0;
			ll u;
			u = 0;
			while(u<n){
			    if(skips_req[u]!=0){
    				if(skips_req[u]<skips_req[k]){
    					k = u;
    				}
			    }
			}
			skips_left = skips_left - skips_req[k];
			skips_req[k]=0;
		}
		for(ll t=0;t<n;t++){
		    if(skips_req[t]==0){
		        win++;
		    }
		}*/
		/*for(ll g = 0;g<n;g++){
			if(skips_req[g]==0){
				win++;
			}
			else if((skips_req[g]==x)&&(skips_left>=x)){
				skips_left = skips_left - x;
				win++;
			}
			else if((skips_req[g]>x)){
				exx_skips[y]=skips_req[g];
				y++;
			}
			cout<<skips_left<<" ";
		}
		cout<<endl;
		while(skips_left>0){
			ll k;
			k = 0;
			ll u;
			u = 0;
			while(exx_skips[u]!=0){
				if(exx_skips[u]<exx_skips[k]){
					k = u;
				}
			}
			skips_left = skips_left - exx_skips[k];
			win++;
			exx_skips[k]=0;
		}*/
		for(ll g = 0;g<n;g++){
		    cout<<skips_req[g]
			if(skips_req[g]==0){
				win++;
			}
			else{
				exx_skips[y]=skips_req[g];
				y++;
				cout<<exx_skips[y]<<" ";
			}
		}
		cout<<endl;
		for(ll y=0;y<n;y++){
		    cout<<exx_skips[y]<<" ";
		}
		ll min_skips =0;
		while(skips_left>0){
			ll k;
			k = 0;
			ll u;
			u = 0;
			while(exx_skips[u]!=0){
				if(exx_skips[u]<exx_skips[k]){
					k = u;
				}
			}
			skips_left = skips_left - exx_skips[k];
			win++;
			exx_skips[k]=0;
		}

		cout<<win<<endl;
	return 0;
}
/*
6 2 3 3
7 10 50 12 1 8

5
*/