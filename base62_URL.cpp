# include<bits/stdc++.h>
#include<string>
using namespace std;

string str = "abcdefghijklmnopqrstuvwxyzABCDEGHIJKLMNOPQRSTUVWXYZ0123456789";

string reverse_str(string id){
	int len = id.length();
	string rev = "";
	for(int i=0;i<len;i++){
	    rev.push_back(id[len-i-1]);
	}
	return rev;
}

string get_ID(int N){
	int n = N;
	string id="";
	while(n>0){
		int mod;
		mod = n%62;
		id.push_back(str[mod]);
		n = n/62;
	}
	string rev = reverse_str(id);
	return rev;
}

int get_revnumb(string ID){
	int sum = 0;
	int len = ID.length();
	for(int i=0;i<len;i++){
		char character = ID[len-1-i];
		int index = 0;
		for(int j=0;j<62;j++){
			if(str[j]==character){
				index = j;
			}
		}
		int multiplier = 1;
		for(int k=0;k<i;k++){
			multiplier = multiplier*62;
		}
		sum = sum + index*multiplier;
	}

	return sum;
}


int main(){	
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		string ID = get_ID(N);
		cout<<ID<<endl;
		int rev_numb = 0;
		rev_numb = get_revnumb(ID);
		cout<<rev_numb;
	}
}
