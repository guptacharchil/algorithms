#include<iostream>
#include<stack>
using namespace std;
int main()
{
  string a;
  cout<<"enter the string "<<endl;
  cin>>a;
  int k=a.length();
  stack <char> q;
  for(int i=0;i<k;i++)
  {
    if(a[i]=='{'||a[i]=='['||a[i]=='(')
    {
      q.push(a[i]);
    }
    else
    {
      if(a[i]=='}'||a[i]==']'||a[i]==')')
      {
        if(q.empty()==1)
        {
          cout<<"unbalanced  1";
          exit(0);
        }
        char b=q.top();
        q.pop();
        if(a[i]=='}' && b=='{' || a[i]==']' && b=='[' || a[i]==')' && b=='(')
        {

        }
        else
        {
          cout<<"unbalanced  2";
          exit(0);
        }

      }
    }
  }
  cout<<"balanced";

}
