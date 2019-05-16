#include<iostream>
using namespace std;
int a[10];
static int top;
void push(int data)
{
  a[top]=data;
  top=top+1;
}
int pop()
{
  if(top==0)
  {
    cout<<"list is empty"<<endl;

  }
  else{
    top=top-1;
  return a[top];
}}
int isempty()
{
  if(top==0)
  return 1;
  else
  return 0;
}


int main()
{
  top=0;
  pop();
  push(10);
  push(20);
  cout<<pop();
  cout<<pop();



}
