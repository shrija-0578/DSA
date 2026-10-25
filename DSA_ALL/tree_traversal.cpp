#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* L;
    node* R;
    node(int val)
    {
        data=val;
        L=NULL;
        R=NULL;
    }
};
void preorder(node* root)
{
 if(root==NULL)
    return;
 cout<<root->data<<" ";
 preorder(root->L);
 preorder(root->R);
}

void inorder(node* root)
{
 if(root==NULL)
    return;
 
 inorder(root->L);
 cout<<root->data<<" ";
 inorder(root->R);
}

void postorder(node* root)
{
 if(root==NULL)
    return;
 
 postorder(root->L);
 postorder(root->R);
 cout<<root->data<<" ";
}


//        1
//      /   \
//     2     3
//    / \   / \
//   4   5 6   7

int main()
{
    node* root=new node(1);
    root->L=new node(2);
    root->R=new node(3);
    root->L->L=new node(4);
    root->L->R=new node(5);
    root->R->L=new node(6);
    root->R->R=new node(7);
    // taking simple
    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder traversal: ";
    postorder(root);
}