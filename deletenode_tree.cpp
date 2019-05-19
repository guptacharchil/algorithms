#include<iostream>
using namespace std;
struct node
{
  int data;
  node* left;
  node* right;
};
node* findmax(node* root)
{
  while(root->right!=NULL)
  {
    root=root->right;
  }
  return root;
}
node* Delete(node* root,int data)
{

  if(root==NULL)
  return root;
  else if(data<root->data)
  root->left=Delete(root->left,data);
  else if(data>root->data)
  root->right=Delete(root->right,data);


  else
  {
  //  cout<<"root"<<root->data;
  //case 1 node has no child
    if((root->left==NULL&&root->right==NULL))
    {
  delete root;
  root=NULL;
    }
    // caw 2 node has 1 child
    else if(root->left == NULL) {
			struct node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct node *temp = root;
			root = root->left;
			delete temp;
		}
    else
    {

      node* tem=root;
      tem=findmax(tem->left);
      root->data=tem->data;
      root->left= Delete(root->left,tem->data);
    }

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
  root->left=insert(root->left,data);
  else
  root->right=insert(root->right,data);
}
void inorder(node* root)
{
  if(root==NULL)
  return;
  inorder(root->left);
  cout<<root->data<<"--";
  inorder(root->right);
}
int main()
{
  node* root=NULL;
  root=insert(root,10);
    root=insert(root,40);
      root=insert(root,70);
        root=insert(root,20);
          root=insert(root,50);
            root=insert(root,80);
              root=insert(root,30);
              inorder(root);
              cout<<endl;
              root=Delete(root,70);
inorder(root);

}
