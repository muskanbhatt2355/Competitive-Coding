#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		if(n==1){
			cout<<-1<<endl;
		}
		else{
			for(int i=1;i<n;i++){
				cout<<5;
			}
			cout<<4<<endl;
		}
	}
	return 0;
}