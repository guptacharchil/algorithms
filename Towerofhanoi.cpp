#include<iostream>
using namespace std;
void toh(int n,char beg,char aux,char end)
{
if(n>=1)
{
toh(n-1,beg,end,aux);
cout<<beg<<"-"<<end<<'-'<<n<<endl;
toh(n-1,aux,beg,end);
}

}
int main()
{
toh(3,'A','B','C');
}
