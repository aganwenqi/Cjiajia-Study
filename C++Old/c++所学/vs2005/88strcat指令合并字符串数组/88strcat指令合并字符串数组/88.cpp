#include<iostream>
using namespace std;
int main()
{   

	int ch;
	char a[50]={"My name is:"};
	char b[]={"ganwenqi"};
	while(1){
	cout<<"����1��2��3,(4)���ַ�����ɴ�д��(5)���ַ�����Сд,(6)�ϲ����ַ������ȣ���������"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"strcat��ʾ�������ַ�������ϲ����Һϲ���ǰ��������У�ǰ�������������㹻λ"<<endl;
	cout<<strcat(a,b)<<endl;
	cout<<b<<endl;break;
	case 2:cout<<"��ʾ��b�����鿽����a�����Ҹ���"<<endl;
	cout<<strcpy(a,b)<<endl;
	cout<<b<<endl;break;
	case 3:cout<<"��������Ҳ���������µ��ַ���"<<endl;
		cout<<a<<endl;
   cout<<strcpy(a,"qiujinfeng")<<endl;
   cout<<b<<endl;
	break;
	case 4:cout<<strupr(a)<<strupr(b)<<endl;break;
		case 5:cout<<strlwr(a)<<strlwr(b)<<endl;break;
			case 6:cout<<strlen(strcat(a,b))<<endl;break;
	default:goto loop;
	}
	if(strcmp(a,b)==0){cout<<"�������"<<endl;}
	else if(strcmp(a,b)<0){cout<<"b��a���ַ���"<<endl;}
	else if(strcmp(a,b)>0){cout<<"b��a���ַ���"<<endl;}
}
loop:return 0;

}