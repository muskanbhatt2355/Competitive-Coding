#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int index = n-1;
        while(index>=0){
            if((arr[index])%2==0){
                arr[index]=0;
                index--;
            }
            else{break;}
        }
        if(index==-1){cout<<-1;}
        else{
            int sum =0;
            for(int i=0;i<n;i++){
                sum = sum + arr[i];
            }
            
            int rem = sum%2;
            if(rem==0){
                for(int i=0;i<n;i++){
                    if(arr[i]!=0){
                        cout<<arr[i];
                    }
                }
            }
            else{
                for(int i=0;i<n;i++){
                    if(arr[i]==rem){
                        arr[i]=0;
                        break;
                    }
                
                }
                for(int i=0;i<n;i++){
                    if(arr[i]!=0){
                        cout<<arr[i];
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}