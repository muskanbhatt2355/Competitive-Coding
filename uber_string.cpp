#include<iostream>
#include<string>
using namespace std;


int main(){
	string str;
	cin>>str;
	int len = str.length();
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string op;
	for(int i = 0;i<len;i++){
		if(str[i]=='z'){
			op.push_back('a');
		}
		else{
			int temp = str[i] - 'a';
			op.push_back(alphabet[temp + 1]);
		}
	}
	cout<<op;
	return 0;
}