#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
}*head=NULL;
void insert(int data)
{
  node *tem=new node();
  node *t =head;

  tem->data=data;
 tem->next=head;
  if(head==NULL)
  {
    tem->next=tem;
  head=tem;

  }
  else
  {
  while(t->next!=head)
  t=t->next;
  t->next=tem;
  head=tem;
}
}
void display()
{
  node *t=head;
do{
  cout<<t->data<<"  ";
  t=t->next;
}
while(head!=t);
}
int main()
{
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  display();
}
