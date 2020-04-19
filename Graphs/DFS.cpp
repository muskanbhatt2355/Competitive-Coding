#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	vector<int>*arr;
public:
	Graph(int V);
	void addedge(int u,int v);
	void DFS(int b);
};

Graph::Graph(int V){
	this->V = V;
	arr = new vector<int>[V];
}
void Graph::addedge(int u,int v){
	arr[u].push_back(v);
}
void Graph::DFS(int b){
	bool visited[V] = {false};
	stack<int> S;
	S.push(b);
	visited[b] = true;
	cout<<b<<" ";
	while(!S.empty()){
		int Top = S.top();
		vector<int>::iterator ptr;
		ptr = arr[Top].begin();
		while(ptr!=arr[Top].end()){
			if(!visited[*ptr]){
				S.push(*ptr);
				visited[*ptr] = true;
				cout<<*ptr<<" ";
				break;
			}
			ptr++;
		}
		if(ptr==arr[Top].end()){
			//implies all attached nodes have been visited
			S.pop();
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

	g.DFS(2);
	return 0;


}