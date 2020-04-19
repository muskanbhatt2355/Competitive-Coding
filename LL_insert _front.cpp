//Insert a new node at the end of the LL
// head->10->9->8->7->6->5<-*end_ref
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* new_node(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	return temp;
}

Node** insert_front(Node** head_ref, int data){
	Node* temp = new_node(data);
	temp->next = *head_ref;
	*head_ref = temp;
	return head_ref;
}

void print(Node** head_ref){
	Node* temp = *head_ref;
	while((temp->next)!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data;

}

int main(){
	Node* head = new Node();
	int N;//no. of nodes
	cin>>N;
	int head_key;
	cin>>head_key;
	head = new_node(head_key);
	Node** head_ref = &head;
	*head_ref = head;
	for(int i = 1;i<N;i++){
		int key;
		cin>>key;
		head_ref = insert_front(head_ref,key);
	}
	print(&head);
	return 0;
}



