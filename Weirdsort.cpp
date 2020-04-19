#include<iostream>
using namespace std;

bool sort_possible(int n, int m, int a[], int p[]){
    if(n==0){
        return true;
    }
	int k=n-1;
	for(int i=n-1;i>=0;i--){
		if(a[k]<a[i]){
			k = i;
		}
	}
	bool index_present = true;
	for(int j=k+1;j<n;j++){
		for(int i=0;i<m;i++){
			if(p[i]==j){index_present=true;
						break;}
			else if(i==m-1&&p[i]!=j){
				index_present=false;
				return index_present;
			}
		}
	}
	if(index_present==true){
		int temp = a[k];
		for(int i=k;i<n-1;i++){
			a[i]=a[i+1];
		}
		a[n-1]=temp;
		index_present = sort_possible(n-1,m,a,p);
	}
	return index_present;
}



int main(){
	int t;
	cin>>t;
	for(int i = 0;i<t;i++){
		int n,m;
		cin>>n>>m;
		int a[n];
		int p[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>p[i];
		}
		bool can = sort_possible(n,m,a,p);
		if(can==true){
			cout<<"Yes"<<endl;
		}
		else{cout<<"No"<<endl;}
	}
	return 0;
}