#include<iostream>
using namespace std;

//In merge sort , while merging we create 2 arrays and copy the 2 subarrays to be merged and
// then overwrite the elements from these 2 arrays into the original array in a sorted manner

void merge(int arr[], int l, int m, int h){
	int a_num = m-l+1;
	int b_num = h - m;
	int A[a_num], B[b_num];

	for(int i = 0;i<a_num;i++){
		A[i]=arr[l+i];
	}
	for(int i=0;i<b_num;i++){
		B[i]=arr[m+1+i];
	}

	int i = l;
	int a = 0;
	int b = 0;

	while((a<a_num)&&(b<b_num)){
		if(A[a]<B[b]){
			arr[i]=A[a];
			a++;
			i++;
		}
		else if(A[a]>=B[b]){
			arr[i]=B[b];
			b++;
			i++;
		}
	}

	while(a<a_num){
		arr[i]=A[a];
		a++;
		i++;
	}
	while(b<b_num){
		arr[i]=B[b];
		b++;
		i++;
	}
}



	/*for(int i=l;i<=h;i++){
		int a = 0;
		int b = 0;
		if(A[a]<B[b]){
			arr[i]=A[a];
			a++;
		}
		else if(A[a]>=B[b]){
			arr[i]=B[b];
			b++;
		}
	}*/



void merge_sort(int arr[], int l ,int h){
	if(h>l){
		int m = (h+l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,h);
		merge(arr,l,m,h);
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
	merge_sort(arr,0,N-1 );
	show_sorted_array(arr,N);
	return 0;
}