#include<iostream>
#include<ionanip>
using namespace std;
int main()
{
	//��ʾ�����ȣ���ྫȷ��6-7λ���ڴ�ռ4���ֽڿռ䣨4*8��2��������
	float a=12.123456789012345;
    //��ʾ˫���ȣ���ྫȷ��15-16λ�����ڴ�ȵ����ȶ�һ��
	double b=12.123456789012345;
    //��ȷ��6-7
	cout<<setprecision(15)<<a;
	//��ȷ��15-16
	cout<<setprecision(15)<<b
	return 0;
}