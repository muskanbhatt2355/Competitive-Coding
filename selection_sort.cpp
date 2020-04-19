#include<iostream>
using namespace std;

void swap_els(int *a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort_array(int arr[], int N){
	//int si = 0;//si = sorted index

	for(int i=0;i<N;i++){
		int min_index = i;
		for(int j= i;j<N;j++){
			if(arr[j]<arr[min_index]){
				min_index = j;
			}
		}
		swap_els(&arr[i], &arr[min_index]);
	}



	/*for(int i=0;i<N;i++){
		int Min = arr[i];
		for(int j=i;j<N;j++){
			Min = min(Min,arr[j]);
		}
		int min_index = i;
		for(int k=i;k<N;k++){
			if(arr[k]==Min){
				min_index=k;
				break;
			}
		}*/
		//swap el at i and el at k
		/*int temp = arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=temp;*/
		swap_els(&arr[i], &arr[min_index]);
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