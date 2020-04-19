#include<iostream>
#include<string>
using namespace std;

int arrayJourney(int path[], int k){
	int N = sizeof(path)/sizeof(path[0]);
	int score = path[0];
	int i =0;
	while(i<N){
		int step =1;
		while((step<=k)&&(i+step<N)){
			if(path[i+step]>0){
				i = i+step;
				break;
			}
			step++;
		}
		if(step==k+1){
			int index = i+1;
			for(int m = i+1;m<=i+k;m++){
				if(path[m]>path[index]){
					index=m;
				}
			}
			i = index;
		}

		score = score + path[i];
		cout<<i<<" "<<score<<endl;
	}

	return score;

}


int main(){
	int path[] = {10,2,3};
	int k;
	cin>>k;
	cout<<arrayJourney(path,k);
	return 0;
}