#include<iostream>
using namespace std;

struct TreeNode{
	 int data;
	 TreeNode* left;
     TreeNode* right;
};

TreeNode* new_node(int data){
	TreeNode* New_Node = new TreeNode();
	New_Node->data = data;
	New_Node->left = NULL;
	New_Node->right = NULL;
	return New_Node;
}



void make_LL(TreeNode* root, TreeNode** leaf_ptr, int Count){
	if((root->left==NULL)&&(root->right==NULL)){
		if(Count==0){
			Count += 1;
			*leaf_ptr=root;
		}
		else{
			TreeNode* temp = *leaf_ptr;
			while(temp->right!=NULL){
				temp = temp->right;
			}
			temp->right = root;
		}
	}
	make_LL(root->left, leaf_ptr, Count);
	make_LL(root->right, leaf_ptr, Count);
}


int main(){
	//make a BST first
	TreeNode* root = new_node(10);
	root->left = new_node(20);
	root->right = new_node(100);
	root->left->left = new_node(30);
	root->left->right = new_node(40);
	root->right->left = new_node(9);
	root->right->right = new_node(66);	
	TreeNode* ptr = root;
	make_LL(root, &ptr, 0);

	TreeNode* temp = ptr;
	while(temp->right!=NULL){
		cout<<temp->data<<" -> ";
		temp=temp->right;
	}
	cout<<"Muskan";
	return 0;
}	