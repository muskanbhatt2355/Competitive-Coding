//Uber Interview question to find the maximum possible profit from 1 purchase and 1 sell
#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int arr[N];
	//i represents no. of minutes from initial time
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int min = 0;
	int Max = 1;
	int profit = arr[Max]-arr[min];
	while(Max!=N){
		if(arr[Max]>arr[min]){
			int diff=arr[Max]-arr[min];
			profit = max(profit,diff);
			Max += 1;
		}
		else{
			min = Max;
			Max += 1;
			int diff=arr[Max]-arr[min];
			profit = max(profit,diff);
			
		}
		cout<<"min = "<<min;
		cout<<"max = "<<Max<<endl;
	}
	cout<<profit;
	return 0;
} 