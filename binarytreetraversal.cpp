#include<iostream>
using namespace std;
struct node
{
  int data;
  node* left;
  node* right;
};
node* getnode(int data)
{
  node* tem=new node();
  tem->data=data;
  tem->right=NULL;
  tem->left=NULL;
  return tem;
}
node* insert(node* root,int data)
{
  if(root==NULL)
  {
    root=getnode(data);
      return root;
  }
  else if(data<=root->data)
  {
    root->left=insert(root->left,data);
  }
  else
  {
    root->right=insert(root->right,data);
  }

}
void preorder(node* root)
{
if(root==NULL)
return;
cout<<root->data<<endl;
preorder(root->left);
preorder(root->right);
}
void inorder(node* root)
{
  if(root==NULL)
  return;
  inorder(root->left);
  cout<<root->data<<endl;
  inorder(root->right);
}
void posorder(node *root)
{
  if(root==NULL)
  return;
  posorder(root->left);
posorder(root->right);
  cout<<root->data<<endl;
}
int main()
{
  node* root=NULL;
  root=insert(root,10);
  root=insert(root,20);
  root=insert(root,100);
  root=insert(root,60);
  root=insert(root,50);
  root=insert(root,NULL);
  root=insert(root,30);
preorder(root);
}
