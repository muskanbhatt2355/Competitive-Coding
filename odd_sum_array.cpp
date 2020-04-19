#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum = 0;
		for(int i=0;i<n;i++){
			sum = sum + arr[i];
		}
		if((sum%2)!=0){
			cout<<"YES";
		}
		else{
			bool even = false;
			bool odd = false;
			for(int i=0;i<n;i++){
				if((arr[i]%2)==0){
					even = true;
				}
				else{odd = true;}
			}
			if(odd&&even){
				cout<<"YES";
			}
			else{cout<<"NO";}
		}
		cout<<endl;
	}
	return 0;
}