/*2 elements of a BST have been swapped by mistake, restore it without changing the structure*/

/*We are using a vector that stores the inorder traversal of the original BT.
 We then sort it and then we overwrite the nodes of BT with this sorted vector so that the structure remains the same*/

#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

struct Node{
	int key;
	Node*left;
	Node*right;
};

Node* new_node(int key){
	Node* New_Node = new Node();
	New_Node->key = key;
	New_Node->left = NULL;
	New_Node->right = NULL;
	return New_Node;
}

void inorder_trav(Node* root, vector<int> &arr){
	if(root==NULL){
		return;
	}
	else{
	inorder_trav(root->left, arr);
	arr.push_back(root->key);
	inorder_trav(root->right, arr);
	}
}

void overwrite_BST(Node* root, vector<int> &arr){
	if(root==NULL){
		return;
	}
	overwrite_BST(root->right, arr);
	root->key = arr[arr.size()-1];
	arr.pop_back();
	overwrite_BST(root->left, arr);	
}

void Print(Node* root){
	if(root==NULL){
		return;
	}
	Print(root->left);
	cout<<root->key<<" ";
	Print(root->right);
}


int main(){
	Node*root = new_node(6);
	root->left = new_node(10);
	root->right = new_node(2);
	root->left->left = new_node(1);
	root->left->right = new_node(3);
	root->right->right = new_node(12);
	root->right->left = new_node(7);
	
	vector<int> arr;
	inorder_trav(root,arr);
	sort(arr.begin(),arr.end());
	overwrite_BST(root,arr);
	Print(root);

	return 0;
}


