#include<iostream>
using namespace std;

int B_search(int arr[], int low, int high, int  numb){
	
	//Iterative Binary Search
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>numb){
			high = high-1;
		}
		else
			low = low + 1;
		}
	}
	if(low==high){
		return low;
	}
	else if(low>high){
		return -1;
	}
}

	//Recursive Binary Search
	/*if(low==high){
	    if(arr[low]==numb){
		    return low;
	    }
	    else{
	        return -1;
	        
	    }
	}
	else{
		int mid = (low+high)/2;

		if(arr[mid]>numb){
			high=high - 1;
		}
		else{
			low=low+1;
		}
		return B_search(arr, low, high, numb);
	}*/


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
	int numb;
	cin>>numb;
	int index;
	index = B_search(arr, 0, N, numb);
	cout<<index;
	return 0;
}