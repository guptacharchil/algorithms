#include<iostream>
using namespace std;
class Node
{
public:
  int data;
  Node* next;
};
void display(Node** head)
{
  Node *p=(*head);
  while(p!=NULL)
  {
    cout<<p->data<<"   ";
    p=p->next;
  }
  //cout<<"gatam";
}
Node* New(int data)
{
  Node* p=new Node();
  p->data=data;
  p->next=NULL;
  return p;
}
void insert_back(int data,Node** head)
{
Node* p=(*head);
while(p->next!=NULL)
{
  p=p->next;
}
p->next=New(data);
}
void insert_first(int data,Node** head)
{
  Node* new_node=New(data);
  //new_node->data=data;
  new_node->next=(*head);
  *head=new_node;

}
void delete_last(Node** head)
{
  Node* p=(*head);
  while(p->next->next!=NULL)
  {
    p=p->next;
  }
  p->next=NULL;
//  delete(p->next->next);
}
void delete_first(Node** head)
{
  Node* p=(*head);
  (*head)=(*head)->next;

  delete(p);
}


void position_insert(int postion,int data,Node** head)
{
  Node *n=New(data);
  //Node *p;
  Node *c=(*head);
  int  counter=0;
  while(c!=NULL)
  {
    counter++;
    if(postion==counter)
    {
      n->next=c->next;
      c->next=n;
      return ;
    }
    c=c->next;

  }
  cout<<"postion is to greater than number exit";
}

void reverseprint(Node** head)
{
  Node* p=(*head);
  if(p->next!=NULL)
  {
    reverseprint(&p->next);
  }
  cout<<p->data<<"  - - > ";
}
void reverse(Node** head)
{
  Node* pre=NULL;
Node* curr=(*head);
  Node* n;
  while(curr!=NULL)
  {
    n=curr->next;
    curr->next=pre;
    pre=curr;
    curr=n;

  }
  (*head)=pre;
}

int main()
{
  Node* head=NULL;
  insert_first(1,&head);
  insert_first(5,&head);
  insert_first(2,&head);
  insert_first(1,&head);
  insert_first(3,&head);
  insert_back(11,&head);
  insert_back(78,&head);

  display(&head);
  cout<<endl;
reverse(&head);
display(&head);
}
