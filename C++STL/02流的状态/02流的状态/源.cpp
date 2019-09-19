#include<iostream>
using namespace std;
void dema(istream& e)
{
		cout<<"检查cin的状态"<<endl;

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
	cout<<"请输入一个整数:"<<endl;
	cin>>n;
	dema(cin);
	cout<<endl<<endl;
	}

}