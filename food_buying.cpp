#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int cash;
		cin>>cash;
		int n = cash;
		int cb = 0;
		int mb = n/10;
		if(mb==0){
		    cout<<n<<endl;
		}
		else{
    		while(mb>0){
    			
    			n = n - mb*10 + mb;
    			cb = cb + mb;
    			mb = n/10;
    		}
    		int money = cash + cb;
    		cout<<money<<endl;
		}
	}
	return 0;
}