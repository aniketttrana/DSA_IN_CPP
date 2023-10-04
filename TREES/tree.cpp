// Tree : It is a non-linear heirarical data structure to store the data.

// inverted v like structure
// node : Structure contains data , and pointers

// root : top most node
// parent : 1st upper level of that node
// ancesters: all uper level form that node
// descendants : all below level from that node
// child :1st below level of that node
// siblings: 1st below level all nodes
// leaf : which donot have any child


//  Types of traversal in Trees
// 1. Level order (GO level wise)
// 2. Inorder/preorder/postorder traversal
// 3. Morris Traversal
#include <iostream>
#include<queue>
using namespace std;

// FOR MAKING THE TREE
// create root node
// root->left= recursion()
// root-right=recursion()
// -1 = null node , !-1= valid data
class Node{
    public:
    int data;
    Node* left;
    Node * right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node *buildTree(){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    // base condition
    if(data==-1){
        return NULL;
    }
    // step A|B|C
    Node *root=new Node(data);
cout<<"Enter data for Left part"<<data<<"node"<<endl;
    root->left=buildTree();
    cout<<"Enter data for Right part"<<data<<"node"<<endl;
    root->right=buildTree();
    return root;
}

void lvlorderTraversal(Node * root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // A
        Node * temp=q.front();
        // B
        q.pop();
        // c
        cout<<temp->data<<" ";
        // d
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}
int main()
{
    Node *root=NULL;
    root=buildTree();

    lvlorderTraversal(root);
}
