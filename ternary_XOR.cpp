#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		char arr[n];
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			a[i]=0;
			b[i]=0;
			arr[i]=0;
		}
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		//a is max of both
		bool a_max=false;
		for(int i=0;i<n;i++){	
			if((arr[i]=='2')&&(a_max==false)){
				a[i]=1;
				b[i]=1;
			}
			else if((arr[i]=='2')&&(a_max==true)){
				a[i]=0;
				b[i]=2;
			}
			
			else if(arr[i]=='0'){
				a[i]=0;
				b[i]=0;
			}
			else if((arr[i]=='1')&&(a_max==false)){
					a[i]=1;
					b[i]=0;
					a_max=true;				
			}
			else if((arr[i]=='1')&&(a_max==true)){
					a[i]=0;
					b[i]=1;				
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			cout<<b[i];
		}
		cout<<endl;
	}
	return 0;
}