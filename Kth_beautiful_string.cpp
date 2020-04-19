#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n,k;
		cin>>n>>k;
		ll Count = 1;
		
		vector<char> vec;
		for(ll i=1;i<=n-2;i++){
			vec.push_back('a');
		}
		vec.push_back('b');
		vec.push_back('b');
		
		ll index1 = n-2;
		ll index2 = n-1;
		while(Count!=k){
			if(index1+1==index2){
				//both b's are consequtive
				if(index1!=0){
					//swap ab1
					//we increase no. by swapping ab1 but decrease 
					//the resulting no. by swapping b2a
					vec[index1]='a';
					vec[index1 - 1]='b';
					index1 = index1 -1;
					//swap b2a
					vec[index2]='a';
					vec[n-1]='b';
					index2 = n-1;

					Count++;

				}
				else{
					break;
				}
			}
			else{
				//swap ab2
				vec[index2]='a';
				vec[index2 - 1]='b';
				Count++;
				index2 = index2 -1;
			}
		}
		for(ll i=0;i<vec.size();i++){
		    cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}