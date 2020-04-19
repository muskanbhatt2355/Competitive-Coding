#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int k = n/2;
		if(n%2==1){
			cout<<7;
			for(int j=1;j<=k-1;j++){
			cout<<1;
			}
		}
		else{
		    for(int j=1;j<=k;j++){
			cout<<1;
			}
		}
		cout<<endl;
	}
	
	return 0;
}