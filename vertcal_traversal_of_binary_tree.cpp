/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// root: root node of the tree
int Count = 0;
int arr[500][2];
stack <int> s;
void verticalOrder(Node *root)
{
    //Your code here
    if(root!=NULL){
       s.push(root); 
       arr[Count][0]=root->data;
    }
    Node*temp = root->left;
    while(!(temp==NULL&&s.empty())){
        while(temp!=NULL){
            s.push(temp);
            Count--;
            if(Count<0){
                arr[-Count][1]=temp->data;
            }
            else if(Count>0){
                arr[Count][0]=temp->data;
            }
            temp=temp->left;
        }
        Node* prev_top = s.pop();
        temp=prev_top->right;
        s.push(temp);
        Count++;
        if(Count<0){
            arr[-Count][1]=temp->data;
        }
        else if(Count>0){
            arr[Count][0]=temp->data;
        }
        temp=temp->left;
    }
    
    
    
    
}

