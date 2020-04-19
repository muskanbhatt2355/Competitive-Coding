#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		char arr[9][9];
		for(ll j=0;j<9;j++){
			for(ll k=0;k<9;k++){
				cin>>arr[j][k];
			}
		}
		if(arr[0][0]!='9'){
			arr[0][0]='9';
		}
		else{
			arr[0][0]='1';
		}
		if(arr[1][4]!='9'){
			arr[1][4]='9';
		}
		else{
			arr[1][4]='1';
		}
		if(arr[2][8]!='9'){
			arr[2][8]='9';
		}
		else{
			arr[2][8]='1';
		}
		if(arr[3][1]!='9'){
			arr[3][1]='9';
		}
		else{
			arr[3][1]='1';
		}
		if(arr[4][3]!='9'){
			arr[4][3]='9';
		}
		else{
			arr[4][3]='1';
		}
		if(arr[5][6]!='9'){
			arr[5][6]='9';
		}
		else{
			arr[5][6]='1';
		}
		if(arr[6][2]!='9'){
			arr[6][2]='9';
		}
		else{
			arr[6][2]='1';
		}
		if(arr[7][5]!='9'){
			arr[7][5]='9';
		}
		else{
			arr[7][5]='1';
		}
		if(arr[8][7]!='9'){
			arr[8][7]='9';
		}
		else{
			arr[8][7]='1';
		}
		//arr[1][4]='9';
		//arr[2][8]='9';
		//arr[3][1]='9';
		//arr[4][3]='9';
		//arr[5][6]='9';
		//arr[6][2]='9';
		//arr[7][5]='9';
		//arr[8][7]='9';
		for(ll j=0;j<9;j++){
			for(ll k=0;k<9;k++){
				cout<<arr[j][k];
			}
			cout<<endl;
		}

	}
	return 0;
}