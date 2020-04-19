#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll a,m;
	cin>>a>>m;
	ll temp = m+1;
	bool will_stop = false;
	while(temp--){
		ll rem = a%m;
		a = a + rem;
		if(rem == 0){
			will_stop = true;
			break;
		}
	}
	if(will_stop==true){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}