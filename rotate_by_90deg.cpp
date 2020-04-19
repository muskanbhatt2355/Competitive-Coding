#include <iostream>
using namespace std;

const int N = 4;
const int R = 4;
const int C = 4;

void transpose(int arr[R][C]){
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void reverse(int arr[R][C]){
    for(int j=0;j<N;j++){
        for(int i=0;i<(N/2);i++){
            int temp = arr[i][j];
            arr[i][j] = arr[N-i-1][j];
            arr[N-i-1][j] = temp;
        }
    }    
}

void print(int arr[R][C]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
}


int main(){
    /*int R = N;
    int C = N;*/
    int arr[R][C] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    transpose(arr);
    reverse(arr);
    print(arr);
	return 0;
}