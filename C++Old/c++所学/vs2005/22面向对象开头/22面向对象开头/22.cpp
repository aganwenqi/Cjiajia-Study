#include<iostream>
using namespace std;
//�ඨ��
class Human//����
{
	//��Ա����
public:
	//�����»�������ĸ�Ͳ���Ҫ��д
	void  get_statrue(){cout<<"���"<<statrue<<"�ó�Ա��ʲô���붨��\n";}    //�������,Get����˼�ǻ��
    void  GetWeight();     //��������
	//�����������󲻿ɸı���һ������
	void SetStatrue(int x){statrue=x;}//��Ϊ����ֱ�ӷ���˽�еģ�����Ҫ�ڳ�Ա������涨��
	void SetWeight(int x);
private:
	int  statrue;    //���
    int  weight;    //����
};
void Human::SetWeight(int x)
{
	weight=x;
}
void Human::GetWeight()
{
	cout<<"����"<<weight<<endl;
}
void main()
{
	Human Mike;//����һ������
	Mike.SetStatrue ();
	Mike.get_statrue ();
	Mike.SetWeight(100);
	Mike.GetWeight();
	//Mike.statrue-2;����ֱ�ӷ���˽�г�Ա

}
