#include<iostream>
using namespace std;
void dema(istream& e)
{
		cout<<"���cin��״̬"<<endl;

	if(e.bad())
		cout<<"cin bad()"<<endl;
	else
		cout<<"cin not bad()"<<endl;

	if(e.fail())
		cout<<"cin fail()"<<endl;
	else
		cout<<"cin not fail()"<<endl;

	if(e.eof())
		cout<<"cin eof()"<<endl;
	else
		cout<<"cin not eof()"<<endl;

	if(e.good())
		cout<<"cin good()"<<endl;
	else
		cout<<"cin nt good()"<<endl;
}
int main(){
		int n;
	for(;;){
	cout<<"������һ������:"<<endl;
	cin>>n;
	dema(cin);
	cout<<endl<<endl;
	}

}