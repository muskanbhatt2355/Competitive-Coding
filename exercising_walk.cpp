#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll a,b,c,d,x,y,x1,y1,x2,y2;
		cin>>a>>b>>c>>d;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		bool possible_x=false;
		bool possible_y=false;
		ll x_diff = a-b;
		if(x_diff==0){
			if((x-x1>=1)||(x2-x>=1)){
				possible_x=true;
			}
			else if(a==0&&b==0){
				possible_x=true;
			}
		}
		else if(x_diff>0){
			if(x_diff<=(x-x1)){
				possible_x=true;
			}
		}
		else if(x_diff<0){
			if(-x_diff<=x2-x){
				possible_x=true;
			}
		}

		ll y_diff = c-d;
		//if(possible==true){
			if(y_diff==0){
				if((y-y1>=1)||(y2-y>=1)){
					possible_y=true;
				}
				else if(c==0&&d==0){
					possible_y=true;
				}
			}
			else if(y_diff>0){
				if(y_diff<=(y-y1)){
					possible_y=true;
				}
			}
			else if(y_diff<0){
				if(-y_diff<=y2-y){
					possible_y=true;
				}
			}
			else{
				possible_y=false;
			}
		//}
		if((possible_x==true)&&(possible_y==true)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

	}
	return 0;
}