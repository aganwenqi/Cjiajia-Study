#include<iostream>
using namespace std;
int set(bool s);
int set(bool s){if(s){cout<<"ÄÐ"<<endl;}else{cout<<"Å®"<<endl;}return 0;}
struct people
{
	int age;
	int weight;
	float tall;
	char *native;
	char *name;
	bool sex;
};
int main()
{
	people jack=
	{
		20,
		100,
		175.21,
		"jack",
		"ÖíÂï",
		1
	};
	cout<<jack.age<<endl;
	cout<<jack.weight<<endl;
	cout<<jack.tall<<endl;
	cout<<jack.native<<endl;
	cout<<jack.name<<endl;
    set(jack.sex);
}