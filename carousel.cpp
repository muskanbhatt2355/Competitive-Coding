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
    		int Count =1;
    		for(int i=1;i<n;i++){
    			if(arr[i]!=arr[i-1]){
    				Count++;
    			}
    		}
    		if(Count%2==0){
    			cout<<2;
    			cout<<endl;
    			int temp=1;
    			cout<<1<<" ";
    			for(int i=1;i<n;i++){
    				if(arr[i]!=arr[i-1]){
    					temp=temp+1;
    				}
    				int rem = temp%2;
    				if(rem==0){
    					cout<<2<<" ";
    				}
    				else if(rem==1){
    					cout<<1<<" ";
    				}
    			}
    		}
    		else if(Count==1){
    			cout<<1;
    			cout<<endl;
    			for(int i=0;i<n;i++){
    				cout<<1<<" ";
    			}
     
    		}
    		else if(Count!=1){
    			if(arr[n-1]==arr[0]){
    				cout<<2;
    				cout<<endl;
    				int temp =1;
    				cout<<1<<" ";
    				for(int i=1;i<n;i++){
    					if(arr[i]!=arr[i-1]){
    						temp=temp+1;
    					}
    					int rem = temp%2;
    					if(rem==0){
    						cout<<2<<" ";
    					}
    					else if(rem==1){
    						cout<<1<<" ";
    					}
    				}
    			}
    			else{
    				cout<<3;
    				cout<<endl;
    				int temp =1;
    				cout<<1<<" ";
    				for(int i=1;i<n-1;i++){
    					if(arr[i]!=arr[i-1]){
    						temp=temp+1;
    					}
    					int rem = temp%2;
    					if(rem==0){
    						cout<<2<<" ";
    					}
    					else if(rem==1){
    						cout<<1<<" ";
    					}
    				}
    				cout<<3;
    			}
    			
    			
    		}
    		cout<<endl;
    	}
     
    }
    /*
    4
    5
    1 2 1 2 2
    6
    1 2 2 1 2 2
    5
    1 2 1 2 3
    3
    10 10 10
     
    2
    1 2 1 2 2
    2
    2 1 2 1 2 1
    3
    2 3 2 3 1
    1
    1 1 1 
    */