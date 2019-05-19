#include<iostream>
using namespace std;
struct node
{
  int data;
  node* left;
  node* right;
};
void min(node *root)
{
  while(root->left!=NULL)
  {
    root=root->left;
  }
  cout<<"MIN element in the list"<<endl;
  cout<<root->data<<endl;
}
void max(node *root)
{

  while(root->right!=NULL)
  {
    root=root->right;
  }
  cout<<"MAx element in the list"<<endl;
  cout<<root->data<<endl;

}
void search(node* root,int data)
{
  if(root==NULL)
  {
    cout<<"not found"<<endl;
    exit(0);
  }
  else if(root->data==data)
  {
  cout<<"found"<<endl;
  exit(0);
  }
  else if(data<=root->data)
  {
    search(root->left,data);
  }
  else
  {
    search(root->right,data);
  }

}
node* getnode(int data)
{
  node* tem=new node();
  tem->data=data;
  tem->left=NULL;
  tem->right=NULL;
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
int main()
{
  node* root=NULL;
  root=insert(root,10);
  root=insert(root,1);
  root=insert(root,30);
  root=insert(root,0);
  root=insert(root,80);
  root=insert(root,150);

min(root);
max(root);
cout<<"element 80 is in list"<<endl;
  search(root,80);
}
