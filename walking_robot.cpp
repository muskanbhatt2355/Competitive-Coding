#include<iostream>
using namespace std;

int path_sum(int i, int j, string s){
	int sum = 0;
	for(int k=i;k<=j;k++){
		if(s[k]=='L'){
			sum = sum + (-1);
		}
		else if(s[k]=='R'){
			sum = sum + (+1);
		}
		else if(s[k]=='D'){
			sum = sum + (-300000);
		}
		else if(s[k]=='U'){
			sum = sum + (+300000);
		}
	}
	return sum;
}


 int main(){
 	int t;
 	cin>>t;
 	for(int i=0;i<t;i++){
 		int n;
 		cin>>n;
 		string s;
 		cin>>s;
 		bool zero_found = false;
 		//Using sliding window technique
 		int window = 2;
 		while(window-1<n){
 		    int a = 0;
     		while((a+window-1)<n){
     		    int sum = path_sum(a,a+window-1,s);
     		    //cout<<"a :"<<a<<" "<<"window :"<<window<<" "<<"sum  :"<<sum<<endl;
     		    if(sum==0){
     				cout<<a+1<<" "<<a+window<<endl;
     				zero_found = true;
     				break;
     		    }
     		    a=a+1;
     		}
     		if(zero_found==true){
     		    break;
     		}
     		window = window + 2;
 	    }
 	    if(zero_found==false){
 			cout<<-1<<endl;
 		}
 	}
 	return 0;
 }