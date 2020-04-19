//1. We need to make a representation of the graph using adjacency list
//2. We need to make a bool visited array with n entries from 0 to n-1
//3. n is the no. of nodes
//4. We may also define a class Graph
//   So, that whenever we call Graph(int V) it automatically creates a graph 
//   representation and also defines other functions like show, addedge, BFS, etc.

#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	vector<int> *arr;
public:
	Graph(int V);
	void addedge(int u,int v);
	void BFS(int i);
};

//Defining the class constructor outside class 
//No need to mention any return type as is generally done for other functions
Graph::Graph(int V){
	this->V = V;
	arr = new vector<int>[V];
}
void Graph::addedge(int u,int v){
	arr[u].push_back(v);
}
void Graph::BFS(int i){
	bool visited[V] = {false};
	queue<int> Q;
	int j = i;
	Q.push(i);
	while(!Q.empty()){
		int top;
		top = Q.front();
		Q.pop();
		visited[top] = true;
		cout<<top<<" ";
		vector<int>::iterator ptr;
		ptr = arr[top].begin();
		while(ptr!=arr[top].end()){
			if(!visited[*ptr]){
				Q.push(*ptr);
			}
			ptr++;
		}
	}
}

int main(){
	int V;
	
	V = 4;
	Graph g(4);

	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(2,0);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,3);

	g.BFS(2);
	return 0;
}