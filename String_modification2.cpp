#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		string min_str=s;
		ll K_req = 1;
		
		for(ll k=1;k<=n;k++){
			string new_str = s;
			ll i = k-1;
			string same,changes;
			same = new_str.substr(i,n-i);
			changes = new_str.substr(0,i);
			if((n-k)%2==0){
				reverse(changes.begin(),changes.end());
			}
			string final_str = same + changes;			
			
			if(min_str>final_str){
				min_str = final_str;
				K_req = k;
			}
		}
		cout<<min_str<<endl;
		cout<<K_req<<endl;
	}
	return 0;
}
/*
6
4
abab
6
qwerty
5
aaaaa
6
alaska
9
lfpbavjsm
1
p


abab
1
ertyqw
3
aaaaa
1
aksala
6
avjsmbpfl
5
p
1
*/