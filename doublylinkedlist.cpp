#include<iostream>
using namespace std;
void insertfirst(int data);
struct node
{
  node *pre;
  node *next;
  int data;
}*head=NULL;
node* getnode(int data)
{
node *a=new node();
a->data=data;
a->pre=NULL;
a->next=NULL;
return a;
}
void positiondelete(int pos)
{
  int k=0;
  node *tem=head;
  node *p;
  while(tem!=NULL)
  {
    k++;
    p=tem;
    tem=tem->next;
    if(k==pos)
    break;
  }
  p->next=tem->next;
  tem=tem->next;
  tem->pre=p;
}
void positioninsert(int data,int num)
{
  int k=0;
  node *a=getnode(data);
  node *tem=head;
  node *p;
  if(num==0)
  {
    insertfirst(data);
    return;
  }
  while(tem!=NULL)
  {
    k++;
    p=tem;
    tem=tem->next;
    if(k==num)
    {
      break;
    }

 }

 a->pre=tem->pre;
 a->next=tem;
p->next=a;
  }



void deletefirst()
{
if(head==NULL)
{
  cout<<"list is empty"<<endl;
}
else
{

}head=head->next;
}
void insertfirst(int data)
{

  node *t=getnode(data);
  if(head==NULL)
  {
    head=t;
  }
  else
  {
    t->next=head;
    t->pre=NULL;
    head->pre=t;
    head=t;
  }
}
void insertlast(int data)
{
  node *t=getnode(data);
  node *tem=head;
  while(tem->next!=NULL)
  {
    tem=tem->next;
  }
  tem->next=t;
  t->pre=tem;

}
void display()
{
  node *t=head;
  while(t!=NULL)
  {
    cout<<t->data<<" - ";
    t=t->next;
  }

}
int main()
{
insertfirst(10);
insertfirst(20);
insertfirst(30);
insertfirst(40);
insertfirst(50);
insertlast(20);
insertlast(30);
insertlast(40);
insertlast(50);
deletefirst();
deletefirst();
display();
cout<<endl;
positioninsert(70,0);
display();
cout<<endl;
positiondelete(5);
display();
}
