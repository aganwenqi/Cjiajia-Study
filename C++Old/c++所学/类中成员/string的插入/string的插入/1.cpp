#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="12789";
	string str2="3456";
	char ch1[10]="12";
		char str3='a';
		char ch2[]="56789";
	//2��ʾ��str1�ĵڶ����ַ���ʼ���룬str2��ʾҪ�����string�ַ�����0��ʾ�ӵ�0��Ԫ�ؿ�ʼ���룬4��ʾ�ӵ�4��Ԫ�ؽ���
	//string���е�inserf������ʾ�������˼
	str1.insert(2,str2,0,4);
	cout<<str1<<endl;
		 //��str2�ĵ�2���±��2���ַ���ֵ��str1,������������ʾ����Ϊ����\0������־
	 str1.append(str2,2,3);
		 cout<<str1<<endl;
		 //��ʾ��һ��0�͵ڶ���2��Ҫ�滻�ĸ����������������2��ʾ��str2���±�2��ʼ��2��Ԫ���滻��str1��0��2��
		 //��֧��char�ַ������滻
      str1.replace(0,2,str2,2,2);
    //��ʾ��str2�������ַ��滻��str1�е��ַ�
	   str1.replace(0,2,2,str3);
		  cout<<str1<<endl;

	//char���͵��ַ�����strncat������ch2��ǰ�������ַ���������ch1�ĺ������

   strncat(ch1,ch2,3);
     cout<<ch1<<endl;
	  strncpy(ch1,ch2,3);
		 //��ʾ�ѵڶ����ַ�����ǰ�����ַ��滻����һ���ַ���ǰ�����ĵ��ַ�
		 cout<<ch1<<endl;

	return 0;
}