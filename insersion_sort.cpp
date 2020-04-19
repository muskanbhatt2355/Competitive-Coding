#include<iostream>
using namespace std;

void sort_array(int arr[], int N){
	for(int i=1;i<N;i++){
		int k=i;
		while((arr[k-1]>=arr[i])&&(k>=1)){
			k = k-1;
		}
		int j = i;
		int temp = arr[i];
		while(j>k){
			arr[j]=arr[j-1];
			j = j-1;
		}
		arr[k]=temp;
	}	
}

void show_sorted_array(int arr[], int N){
	for(int j=0;j<N;j++){
			cout<<arr[j]<<" ";
		}
}

int main(){
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort_array(arr, N);
	show_sorted_array(arr,N);
	return 0;
}