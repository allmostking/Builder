#include<iostream>
#include<string.h>

using namespace std ;

class High_school{
	public:
	int id;
	int stu_roll_no;
	int stu_standard; 
	int stu_age; 
	int stu_contact[100];
	char stu_name[100];
	static char stu_edu_institute_name[100] ;
	char stu_address[100];

	void Setdata()
	{
		cout<<"Enter id :";
		cin>>id;
		cout<<"Enter Student roll no :";
		cin>>stu_roll_no;
		cout<<"Enter Standard :";
		cin>>stu_standard;
		cout<<"Enter Age :";
		cin>>stu_age;
		cout<<"Enter Contact :";
		cin>>stu_contact;
		cout<<"Enter Name :";
		cin>>stu_name;
		cout<<"Enter Address :";
		cin>>stu_address;
	}

	void Getdata()
	{
		cout<<"id = "<<id<<endl;
		cout<<"roll no = "<<stu_roll_no<<endl;
		cout<<"Standard = "<<stu_standard<<endl;
		cout<<"Age = "<<stu_age<<endl;
		cout<<"Contact = "<<stu_contact	<<endl;
		cout<<"Name = "<<stu_name<<endl;
		cout<<"Address = "<<stu_address<<endl;

	}

};

class clg{
	public:
	int id;
	int stu_roll_no;
	int stu_standard; 
	int stu_age; 
	int stu_contact[100];
	char stu_name[100];
	static char stu_edu_institute_name[100] ;
	char stu_address[100];

	void Setdata()
	{
		cout<<"Enter id :";
		cin>>id;
		cout<<"Enter Student roll no :";
		cin>>stu_roll_no;
		cout<<"Enter Standard :";
		cin>>stu_standard;
		cout<<"Enter Age :";
		cin>>stu_age;
		cout<<"Enter Contact :";
		cin>>stu_contact;
		cout<<"Enter Name :";
		cin>>stu_name;
		cout<<"Enter Address :";
		cin>>stu_address;
	}

	void Getdata()
	{
		cout<<"id = "<<id<<endl;
		cout<<"roll no = "<<stu_roll_no<<endl;
		cout<<"Standard = "<<stu_standard<<endl;
		cout<<"Age = "<<stu_age<<endl;
		cout<<"Contact = "<<stu_contact	<<endl;
		cout<<"Name = "<<stu_name<<endl;
		cout<<"Address = "<<stu_address<<endl;

	}


};
char High_school::stu_edu_institute_name[]= "PP SAVANI";
char clg::stu_edu_institute_name[]="IIT KAMRAJ";


int main()
{
	High_school h;
	clg c;
	h.Setdata();
	c.Setdata();
	h.Getdata();
	c.Getdata();
	cout<<"institute name ="<<High_school::stu_edu_institute_name<<endl;
	cout<<" name ="<<clg::stu_edu_institute_name<<endl;

	
}
