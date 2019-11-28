#include<iostream>
#include<string>
using namespace std;
string countstring(string x)
{
	int count =0;
	string res="";
	//cout<<x<<" -- ";
	int n=x.length();
	//cout<<"n"<<n;
	for(int i=0;i<n;i++)
	{
		count++;
		if(x[i]!=x[i+1])
		{
			//cout<<"Asdfasd";
			res+=to_string(count)+x[i];
			count=0;
		}

	}
//	cout<<res<<endl;
	return res;
}
int main()
{
	int n;
	cin>>n;
	if(n==1){
		cout<<"1";
	return 1;
	}
	n=n-1;
	string x="1";
	while(n--)
	{

	x=countstring(x);

	}
	cout<<x<<endl;
}