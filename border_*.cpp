#include<iostream>
#include<string>
using namespace std;


int main(){
	int N;
	cin>>N;
	string arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	for(int i = 0;i<N;i++){
		cout<<'"'<<arr[i]<<'"'<<","<<endl;
	}
	int length_str = arr[0].length();
	int op_len = N+2;
	string op[op_len];
	for(int j = 0;j<op_len;j++){
		if(j==0||j==op_len-1){
			string ast;
			for(int i = 0;i<length_str+2;i++){
				ast.push_back('*');
			}
			op[j]=ast;
		}
		else{
			string border = "*";
			string el = arr[j-1];
			for(int i =0;i<length_str;i++){
				border.push_back(el[i]);
			}
			border.push_back('*');
			op[j]=border;
		}
	}
	cout<<"[";
	for(int i = 0;i<N+2;i++){
		cout<<'"'<<op[i]<<'"'<<",";
		if(i!=N+1){
		    cout<<endl;
		}
	}
	return 0;
}