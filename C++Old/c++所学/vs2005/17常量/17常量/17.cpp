#include<iostream>
using namespace std;
int main()
{
	//��ָ�������ֻ������ĸ
	enum num{one=100,two,three=200,four,first};
	//pi������(���ɸı�ı���)
	const double pi=3.1234567;	
   //pi=0;�����ɸı䣩
    cout<<pi<<endl;
	cout<<one<<"\t"<<two<<"\t"<<three<<"\t"<<four<<"\t"<<first<<endl;
		return 0;
}
