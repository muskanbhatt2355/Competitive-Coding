#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int k=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //check if all elements are same
        bool all_same = true;
        for(int i=0;i<=n-2;i++){
            if(arr[i]!=arr[i+1]){
                all_same=false;
                break;
            }
        }

        //check if any element is repeated
        bool one_repeated = false;
        int rep_index = 0;
        for(int i=0;i<n-1;i++){
            if(arr[0]==arr[n-1]){
                one_repeated=true;
                rep_index = n-1;
                break;
            }
            else if(arr[i]==arr[i+1]){
                one_repeated=true;
                rep_index = i;
                break;
            }
        }
    //cout<<"one repeated"<<one_repeated<<endl;
    // cout<<"all same"<<all_same<<endl;
        if(all_same==true){
            k = 1;
            cout<<k<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
        }

        else{
            if(n%2==0){//n is even
                k = 2;
                cout<<k<<endl;
                int temp =0;
                for(int i=0;i<n;i++){
                    int rem = temp%2;
                    if(rem==0){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<2<<" ";
                    }
                    temp++;
                }
            }
            
            else{//n is odd
                if(one_repeated==false){//no repeated element
                    k = 3;
                    cout<<k<<endl;
                    int temp =0;
                    for(int i=0;i<n-1;i++){
                        int rem = temp%2;
                        if(rem==0){
                            cout<<1<<" ";
                        }
                        else{
                            cout<<2<<" ";
                        }
                        temp++;
                    }
                    cout<<3;
                }
                else if(one_repeated==true){//AL1 element is repeated
                    //cout<<"yes"<<endl;
                    k = 2;
                    cout<<k<<endl;
                    if(rep_index!=n-1){
                        int temp =0;
                        for(int i=0;i<n;i++){
                            int rem = temp%2;
                            if(rem==0){
                                cout<<1<<" ";
                            }
                            else{
                                cout<<2<<" ";
                            }
                            if(i!=rep_index){
                                temp++;
                            }
                           
                        }
                    }
                    else if(rep_index==n-1){
                        int temp =0;
                        for(int i=0;i<n;i++){
                            int rem = temp%2;
                            if(rem==0){
                                cout<<1<<" ";
                            }
                            else{
                                cout<<2<<" ";
                            }
                            temp++;
                        }
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}