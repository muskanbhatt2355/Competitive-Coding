#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n,k;
		cin>>n>>k;
		ll x = n/k;
		ll y = 2*x;
		ll changes = 0;
		char arr[n];
		for(ll j=0;j<n;j++){
			cin>>arr[j];
		}
		for(ll m=0;m<(k/2);m++){
			ll char_count[26];
			for(ll j=0;j<26;j++){
			    char_count[j]=0;
			}
			for(ll s = 0;s<x;s++){
				
				ll alp_index1 = arr[m+s*k] - 'a';
				char_count[alp_index1]++;
				
				ll alp_index2 = arr[k-m-1+s*k] - 'a';
				char_count[alp_index2]++;
				
				//cout<<char_count[alp_index1]<<" "<<char_count[alp_index2]<<endl;
			}
			int temp = 0;//temp is the index of max count char
			int index = 0;
			//cout<<"Index Count"<<endl;
			while(index<26){
				if(char_count[temp]<char_count[index]){
					temp = index;
				}
				index++;
			    //cout<<index<<" "<<char_count[index]<<endl;
			}
			changes = changes + y - char_count[temp];
		}
		if(k%2!=0){
		    ll f = k/2;
		    ll char_count[26];
			for(ll j=0;j<26;j++){
			    char_count[j]=0;
			}
		    for(ll s = 0;s<x;s++){
				ll alp_index = arr[f+s*k] - 'a';
				char_count[alp_index]++;
			}
			int temp=0;
			int index=0;
			while(index<26){
				if(char_count[temp]<char_count[index]){
					temp = index;
				}
				index++;
			    //cout<<index<<" "<<char_count[index]<<endl;
			}
			changes = changes + x - char_count[temp];
		}
		cout<<changes<<endl;
	}
	return 0;
}
/*
4
6 2
abaaba
6 3
abaaba
36 9
hippopotomonstrosesquippedaliophobia
21 7
wudixiaoxingxingheclp

2
0
23
16
*/