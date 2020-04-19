#include<iostream>
using namespace std;

void funct(int arr[], int n){
	int i=0;
	while(i<n){
		if(arr[i]==0){
			i = i+1;
		}
		else if(arr[i]==arr[i+1]){
			arr[i] = 2*arr[i];
			arr[i+1] = 0;
			i = i+2;
		}
		else{
			i = i+1;
		}
	}
	int dup[n];
	int index =0;
	int Count_zero = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			Count_zero += 1;
		}
		else{
			dup[index] = arr[i];
			index = index + 1;
		}
	}
	for(int j = index;j<n;j++){
		dup[j]=0;
	}
	for(int i=0;i<n;i++){
		arr[i]=dup[i];
		cout<<arr[i]<<" ";
	}
	return;

}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	funct(arr, n);
	return 0;
}