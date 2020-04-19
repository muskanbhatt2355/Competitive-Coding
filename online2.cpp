#include<iostream>
using namespace std;

int find_max_diff(int arr[], int n){
	int max_diff = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int diff = arr[j] - arr[i];
			max_diff = max(max_diff, diff);
		}
	}
	return max_diff;
}




int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max_diff = find_max_diff(arr, n);
	if(max_diff==0){
	    cout<<-1;}
	else{
	cout<< max_diff;
	}
	return 0;
}