/*Finding the unknown celebrity in N people using stacks*/

# include<bits/stdc++.h>
using namespace std;
const int N = 4;


bool MATRIX[N][N] = {{0,0,1,0},
					 {0,0,1,0},
				     {0,0,0,0},
				 	 {0,0,1,0}};

bool knows(int a, int b){
	return MATRIX[a][b];
}


int find_celeb(int n){
	stack <int> s ;
	for(int i=0;i<n;i++){
		s.push(i);
	}
	while(s.size()>1){
		int A = s.top();
		s.pop();
		int B = s.top();
		s.pop();
		if(knows(A,B)){
			//A cannot be the celeb
			s.push(B);
		}
		else{
			//B cannot be the celeb
			s.push(A);
		}
	}
	int test_celeb = s.top();
	//testing if the last candidate is the celeb
	bool is_celeb = true;
	for(int i=0;i<n;i++){
		if(i!=test_celeb){
		is_celeb = knows(i,test_celeb);
		}
	}
	if(is_celeb==true){
		for(int i=0;i<n;i++){
			is_celeb = !knows(test_celeb,i);
		}
	}
	if(is_celeb==true){
		return test_celeb;
	}
	else{
		return -1;
	}

}


int main(){
	int n = 4;
	int celeb;
	celeb = find_celeb(n);
	if(celeb==-1){
		cout<<"No celebrity";
	}
	else{
		cout<<"Celebrity ID: "<<celeb;
	}
	return 0;

}