#include <bits/stdc++.h> 
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
			//cout<<"rem is:"<<rem<<endl;
			if((0<rem)&&(rem<=a)){
				skips_req[j]=0;
			}
			else if((a<rem)&&(rem<(a+b))){
				ll skips;
				if((rem-a)%a==0){
				    skips_req[j]=(rem-a)/a;
				}
				else{
    				skips = (rem-a)/a + 1;
    				//skips = skips + 1;
    				skips_req[j] = skips;
				}
			}
			else if(rem==0){
				ll skips;
				if((b)%a==0){
				    skips_req[j]=b/a;
				}
				else{
				    skips = (b/a) + 1;
				    skips_req[j] = skips;
			    }
			}
			//cout<<skips_req[j]<<" ";

        }
		sort(skips_req,skips_req + n);
		ll d;
		d=0;
		while((skips_left>0)&&(d<n)){
			skips_left = skips_left - skips_req[d];
			if(skips_left>=0){
				win++;
			}
			d++;
		}
		cout<<win<<endl;
	return 0;
}
/*
6 2 3 3
7 10 50 12 1 8

5

1 1 100 99
100

1

7 4 2 1
1 3 5 4 2 7 6

6
*/