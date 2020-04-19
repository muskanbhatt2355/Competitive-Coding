#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    int F[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>F[i][j];
        }
    }
    for(int i=0;i<N;i++){
        int A[5][5];
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cin>>A[i][j];
            }
        }
        int B[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int sum = 0;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        sum = sum + (A[i+k][j+l])*F[k][l];
                    }
                }
                B[i][j] = sum;
            }
        }
        cout<<"[["<<B[0][0]<<", "<<B[0][1]<<", "<<B[0][2]<<"], ["<<B[1][0]<<", "<<B[1][1]<<", "<<B[1][2]<<"], ["<<B[2]        [0]<<", "<<B[2][1]<<", "<<B[2][2]<<"]]"<<endl;
        
        
    }
    return 0;
}
/*
1
[[1, 0, 1], [0, 1, 0], [1, 0, 1]]
[[0, 1, 1, 1, 0], [0, 0, 1, 1, 1], [0, 0, 0, 1, 1], [0, 0, 0, 1, 1], [0, 0, 1, 1, 0]]

*/
