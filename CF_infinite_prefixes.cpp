#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n,x;
		string s;
		cin>>n>>x>>s;
		int ones = 0;
		int zeros = 0;
		int balance[n];
		for(int i=0;i<n;i++){
			if(s[i]=='0'){zeros++;}
			else{ones++;}
			//cout<<"zeros :"<<zeros<<" ";
			//cout<<"ones :"<<ones<<" ";
			balance[i]=zeros-ones;
			//cout<<"balance :"<<balance[i]<<"  ";
		}
		cout<<endl;
		int k = balance[n-1];
		int count = 0;
		//cout<<"k is:"<<k<<" ";
		if(k==0){
			bool found = false;
			for(int i=0;i<n;i++){
				if(x==balance[i]){
					found = true;
					cout<<-1;
					break;
				}
			}
				if(found==false){
				if(x==0){
				    cout<<1;
				}
				else{
				    cout<<0;
				}
			}
		}
		else{
			for(int i=0;i<n;i++){
			    //cout<<"x is:"<<x<<" ";
			    //cout<<"balance[i] is :"<<balance[i]<<" ";
			    //cout<<"k is: "<<k<<" ";
			    int u = (x-balance[i]);
			    //cout<<"u is :"<<u<<endl;
				if((u%k==0)&&((u/k)>=0)){
					count++;
				}
			}
			if(x==0){
			    cout<<count+1;
		    }
		    else{
		        cout<<count;
		    }
		}
	
	}
	return 0;
}