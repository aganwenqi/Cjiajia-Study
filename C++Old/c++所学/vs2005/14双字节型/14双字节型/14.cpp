#include<iostream>
#include<locale>
using namespace std;
int main()
{
	        //LC_ALL��ʾ���е�ѡ��chs��ʾ��������
	setlocale(LC_ALL,"chs");
		wchar_t wt[]=L"��";//��д��ĸL������������ֽڿռ�
   wcout<<wt;//������ַ�
	return 0;
}
