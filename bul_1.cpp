#include<iostream>
#include<string.h>
using namespace std;

class employee
{ 	public:
	int id;
	int salary ;
	int expirience;
	int contact;
	char name[100];
	char role[100];
	char address[100];
	char email[100];

	void setdata()
	{
		cout<<"Enter id :";
		cin>>id;

		cout<<"Enter Name :";
		cin>>name;

		cout<<"Enter Email :";
		cin>>email;

		cout<<"Enter Address:";
		cin>>address;

		cout<<"Enter Contact :";
		cin>>contact;

		cout<<"Enter Expirience  :";
		cin>>expirience;

		cout<<"Enter Role :";
		cin>>role;

		cout<<"Enter Salary :";
		cin>>salary;
	}

	void getdata()
	{

		cout<<"id ="<<id<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Email ="<<email<<endl;
		cout<<"Address ="<<address<<endl;
		cout<<"Contact ="<<contact<<endl;
		cout<<"Expirience ="<<expirience<<endl;
		cout<<"Role ="<<role<<endl;
		cout<<"Salary ="<<salary<<endl;

	} 

}; 

int main()
{
	employee e1 ,e2 ,e3 ,e4 ,e5 ;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();

	cout<<endl<<"---------------------------------"<<endl;

	e1.getdata();
	e2.getdata();
	e3.getdata();
	e4.getdata();
	e5.getdata();

	
}
