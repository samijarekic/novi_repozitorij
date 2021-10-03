#include<iostream>
using namespace std;
int main()
{
	int mjesec,godina;
	cout<<"unesi mjesec i godinu rodjenja"<<endl;
	cin>>godina;
	cin>>mjesec;
	int a=2022-godina;
	int b=9 - mjesec;
	if(b== -1)
	{
		cout<<"imate"<<a-1<<"godina i 11 mjeseci";
		
	}
	 else if(b== -3)
	{
		cout<<"imate"<<a-3<<"godina i 9 mjeseci";
		
    }
    else  if(b== -4)
    {
    	cout<<"imate"<<a-4<<"godina i 8 mjeseci";
    
	}
	else if(b== -2)
	{
		cout<<"imate"<<a-2<<"godina i 10 mjeseci";
		
	}
	else if(b== -5)
	{
		cout<<"imate"<<a-5<<"godina i 7 mjeseci";
	}
	else if(b== -6)
	{
		cout<<"imate"<<a-6<<"godina i 6 mjeseci";
	}
	else if(b== -7)
	{
		cout<<"imate"<<a-7<<"godina i 5 mjeseci";
	}
	else if(b== -8)
	{
		cout<<"imate"<<a-8<<"godina i 4 mjeseci";
	}
	else if(b== -9)
	{
		cout<<"imate"<<a-9<<"godina i 3 mjeseca";
	}
	else if(b== -10)
	{
		cout<<"imate"<<a-10<<"godina i 2 mjeseca";
	}
	else if(b== -11)
	{
		cout<<"imate"<<a-11<<"godina ii 1 mjesec";
	}
    else if(b>=0)
    {
    	cout<<"imate"<<a<<"godina i "<<b<<"mjeseci";
    	
	}
	else
	{
		cout<<"POGRIJESILI STE";
	}
    
    return 0;
}
