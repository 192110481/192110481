#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a,b;
	cout<<"enter the user name=>";
	cin>>a;
	cout<<"\nREENTER THE USER NAME=>";
	cin>>b;
	if(a==b)
	cout<<"valid username";
	else
	cout<<"invalid user name";
}
