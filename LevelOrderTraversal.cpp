#include<iostream>
#include<queue>
using namespace std;
struct node
{
int data;
node* left;
node* right;
};
void LevelOrder(node* root)
{
  if(root==NULL)
  return;
  queue<node*> q;
  q.push(root);
  while(!q.empty())
  {
    node* t=q.front();
    cout<<t->data<<endl;
    if(t->left!=NULL)
    q.push(t->left);
    if(t->right!=NULL)
    q.push(t->right);

    q.pop();
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
  }
  else if(data<=root->data)
  {
    root->left=insert(root->left,data);
  }
  else
  {
    root->right =insert(root->right,data);
  }
  return root;
}
int main()
{
node* root =NULL;
root=insert(root,10);
root=insert(root,20);
root=insert(root,130);
root=insert(root,80);
root=insert(root,150);
root=insert(root,40);
LevelOrder(root);
}
