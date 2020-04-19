#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
		cin>>n;
		int s;
		cin>>s;
		int num = s;
		while(num>0){
			if(num%2==0){
				num = num/10;
			}
			else{break;}
		}
		if(num==0){cout<<-1;}
		else{
    		int temp = num;
    		int sum =0;
    		int arr[n];
    		for(int i=0;i<n;i++){
    			arr[i]=0;
    		}
    		int count=0;
    		while(temp>0){
    			int digit = temp%10;
    			arr[count]=digit;
    			sum = sum + digit;
    			temp = temp/10;
    			count++;
    			//cout<<"digit:"<<digit<<" "<<"sum:"<<sum<<" "<<"temp:"<<temp<<endl;
    		}
    		//cout<<"sum is:"<<sum<<" ";
    		int rem = sum%2;
    		if(rem==0){
    			cout<<num;
    		}
    		else{
    			for(int i=0;i<n;i++){
    				if(arr[i]==rem){
    					arr[i]=0;
    					break;
    				}
    			//	cout<<arr[i];
    			}
    			for(int i=0;i<n;i++){
    				if(arr[n-i-1]!=0){
    					cout<<arr[n-1-i];
    				}
    			}
    		}
		}
        cout<<endl;
    }
	return 0;
}