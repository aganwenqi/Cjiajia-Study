#include<iostream>
using namespace std;
class gan
{
public:
	int get()const{return i;}
	//��Ȼthisָ��ʽ����д����ΪϵͳĬ�����Ĵ���
	void set(int x){this->i=x;cout<<"thisָ��ĵ�ַ�� "<<this<<endl;}
private:
	int i;
};
int main()
{   gan a;
    a.set(9);
	cout<<"����a�ĵ�ַ��"<<&a<<"\n"<<a.get()<<endl;
	gan b;
    b.set(999);
	cout<<"����b�ĵ�ַ��"<<&b<<"\n"<<b.get()<<endl;
	return 0;
}