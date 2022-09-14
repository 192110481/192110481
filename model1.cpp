#include<iostream>
using namespace std;
int rev(int a)
{
	int rem,rev=0;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	return rev;
}
int main()
{
	char n;
	cout<<"Enter the number: ";
	cin>>n;
	if ((n<0) )
	{
		cout<<"Invalid input";
	}
	else{
	
	cout<<"\nSum of first and last digit : "<<rev(n)%10 + n%10;
}
	return 0;
}

