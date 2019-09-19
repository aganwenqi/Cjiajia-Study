#include<iostream>
using namespace std;
int main()
{
	//该指令的命名只能用字母
	enum num{one=100,two,three=200,four,first};
	//pi变量名(不可改变的变量)
	const double pi=3.1234567;	
   //pi=0;（不可改变）
    cout<<pi<<endl;
	cout<<one<<"\t"<<two<<"\t"<<three<<"\t"<<four<<"\t"<<first<<endl;
		return 0;
}
