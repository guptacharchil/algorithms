#include<iostream>
using namespace std;
int gcd(int a,int b)
{
if(a==b)
return a;
if(a%b==0)
return b;
if(b%a==0)
return a;
if(a>b)
return gcd(a%b,b);
else
return gcd(a,b%a);

}
int main()
{
cout<<gcd(91,105);
}
