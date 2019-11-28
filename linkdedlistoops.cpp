#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;

};
void insert(int d,node** head)
{
  node a=new node;
  a->data=d;
  a->next=(*head);
  *head=a;
}
void print(node** head)
{
  node *a=*head;
  while(a!=NULL)
  {
    cout<<a->data<<"-->";
    a=a->next;
  }
}
int main()
{
node* head=NULL;
insert(5,&head);
insert(5,&head);
insert(15,&head);
insert(52,&head);
insert(53,&head);
print(&head);

}
