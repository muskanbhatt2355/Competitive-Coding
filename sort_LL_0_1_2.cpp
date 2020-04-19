/*sort a LL consisting only of 0s, 1s and 2s*/

/*LL consists of only 0s,1s and 2s*/

#include<iostream>
using namespace std;

struct Node{
	 int data;
	 Node* next;
};

Node* new_node(int data){
	Node* New_Node = new Node();
	New_Node->data = data;
	New_Node->next = NULL;
	return New_Node;
}

void push(Node** head_ref, int data){
	Node*temp = new_node(data);
	temp->next = *head_ref;
	*head_ref = temp;
}

void sort_list(Node* head){
	int Count[3];
	Node* ptr = head;
	for(int i=0;i<3;i++){
		Count[i]=0;
	}
	while(ptr!=NULL){
		Count[ptr->data] += 1;
		ptr = ptr->next;
	}
	Node* temp = head;
	while(temp!=NULL){
		for(int i=0;i<3;i++){
			int k = Count[i];
			for(int j=1;j<=k;j++){
			temp->data = i;
			}
		}
	}
}


void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main(){
	/* head->1->0->2->0->1->2->NULL*/
	/*N = no. of nodes*/
	Node* head = new Node();
	head = NULL;

	int N;
	cout<<"Enter the no. of nodes";
	cin >> N;
	for(int i=0;i<N;i++){
		int in_data;
		cin>>in_data;
		push(&head,in_data);
	}
	print(head);
	sort_list(head);
	print(head);
	return 0;
}