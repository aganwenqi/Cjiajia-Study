#include<iostream>
using namespace std;
class A
{
public:
	int get(){return i;}
	void set(int x){this->i=x;}
private:
	int i;
};
int main()
{   

	A *p=new A;
	p=0;
	cout<<"p��ַ��"<<p<<endl;
	p=p+1;
    cout<<"p��ַ��"<<p<<endl;
	A *const p1=new A;
	//constA *P1=new A;��const�ŵ�ǰ��ָ����޸ģ���ָ��Ķ��󲻿��޸�
    cout<<"p1��ַ��"<<p<<endl;
	//p1++;����ָ�벻�ɱ�
      p1->set(80);
   cout<<"p1:"<<p1->get()<<endl;
   delete p1;
  p=0;
	return 0;
}
