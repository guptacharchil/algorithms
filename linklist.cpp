#include<iostream>
using namespace std;
struct node
{
  int data;
  node *next;
}*head=NULL;
void recursionreverse(node *t)
{
if(t->next==NULL)
{
  head =t;
  return;
}
recursionreverse(t->next);
node *q=t->next;
q->next=t;
t->next=NULL;
}
void reverseprint(node *t)
{
  if(t->next!=NULL)
  {
    reverseprint(t->next);
  }
  cout<<t->data<<"...";
}
void recursionprint(node *t)
{
  if(t!=NULL)
  {
    cout<<t->data<<"  -  ";
    recursionprint(t->next);
  }
  else
  return;
}
void reverse()
{
  node *curr,*pre,*nxt;
  pre=NULL;
  curr=head;
  while(curr!=NULL)
  {
    nxt=curr->next;
    curr->next=pre;
    pre=curr;
    curr=nxt;
  }
  head=pre;

}
void positiondelete(int pos)
{
  node *t=head;
  for(int i=0;i<pos-1;i++)
  {
    if(t==NULL)
    {
      cout<<"less number of element is list"<<endl;
      break;
    }
    else
    t=t->next;
t->next=t->next;
  }
}
void positioninsert(int data,int num)
{
  node *t=new node();
  t->data=data;
  node *tt=head;
  for(int i=0;i<num-1;i++)
  {
   if(tt==NULL)
   {
     cout<<"list is less than number"<<endl;
     break;
   }
   else
   {
     tt=tt->next;
   }
  }

  t->next=tt->next;
  tt->next=t;


}
void deletefirst()
{
  if(head==NULL)
  {
    cout<<"list is empty";
  }
  head=head->next;
}
void deletelast()
{
  node *t=head;
  if(head==NULL)
  {
    cout<<"list is empty"<<endl;
  }
  else
  {
    while(t->next->next!=NULL)
    {
      t=t->next;
    }
    t->next=NULL;
  }
}
void finsert(int data)
{
  node *t=new node();
  t->data=data;
  t->next=head;
  head=t;
}
void insert(int data)
{
  node *tt=head;
  node *t=new node();
  t->data=data;
  t->next=NULL;
  if(head==NULL)
  {
    head=t;
  }
  else
  {
  while(tt->next!=NULL)
    tt=tt->next;
    {
  }
  tt->next=t;
  cout<<tt->data;
}
}
void display()
{
  cout<<"display"<<endl;
node *t=head;
//t=(node*)head;
if(t==NULL)
{
  cout<<"list is empty"<<endl;
}
else
{
while(t!=NULL)
{
  cout<<t->data<<"  ";
  t=t->next;
}
}
}
int main()
{
  insert(1);
  insert(3);
  insert(4);
  insert(7);
  insert(10);
  finsert(30);

  display();
recursionreverse(head);
display();

}
