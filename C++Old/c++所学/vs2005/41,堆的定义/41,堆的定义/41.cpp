#include<iostream>
using namespace std;
int main()
{
	double *p;
	//����double���Ͷѣ���ʹָ��p���ʸö�
	p=new double;
	*p=1.623;
	cout<<*p<<endl;
	delete p;//ɾ��ָ�������
  cout<<"�������"<<*p<<endl;
    *p=0;
	p=new double;
	*p=2.123;
	cout<<*p<<endl;
	delete p;
	
	return 0;
}

	