#include<iostream>
using namespace std;
void swap(char *a,char *b)
{
  char tem;
  tem=*a;
  *a=*b;
  *b=tem;
}
void permutation(char* s,int i,int n)
{
  char k;
  static int count;
  if(i==n)
  {
count++;

cout<<s<<endl;
  }
  else
  {
  for(int j=i;j<=n;j++)
  {
  swap((s+i),(s+j));
    permutation(s,i+1,n);
    swap((s+i),(s+j));
  }
}}
int main()
{
char s[3]={'a','b','c'};
permutation(s,0,2);
}
