#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"unijeti mjesec 1-12"<<endl;
	cin>>a;
	if (a == 1)
			cout<<"mjesec-januar   godisnje doba-zima";
	else if(a == 2)
	{
		cout<<"mjesec-februar  godisnje doba-zima";
	}
	else if(a == 3)
	{
		cout<<"mjesec-mart   godisnje doba-zima  AKO je datum 20 ili ranije";
	}
	else if(a == 4)
	{
		cout<<"mjesec-april  godisnje doba-proljece";
	}
	else if(a == 5)
	{
		cout<<"mjesec-maj   godisnje doba-proljece";

	}
	else if(a == 6)
	{
		cout<<"mjesec-juni   godisnje doba-proljece  AKO je datum 20 ili ranije";

	}
	else if(a == 7)
	{
		cout<<"mjesec-juli  godisnje doba-ljeto";
	}
	else if(a == 8)
	{
		cout<<"mjesec-agust  godisnje doba-ljeto";
		
	}
	else if(a == 9)
	{
		cout<<"mjesec-septembar   godisnje doba-ljeto  AKO je datum 20 ili ranije";
	}
	else if(a == 10)
	{
		cout<<"mjesec-oktombar  godisnje doba-jesen";
	}
	else if(a == 11)
	{
		cout<<"mjesec-novembar  godisnje doba-jesen";
	}
	else if(a == 12)
	{
		cout<<"mjesec-decembar   godisnje doba-jesen  AKO je datum 20 ili ranije";
	}
	return 0;
	
}

