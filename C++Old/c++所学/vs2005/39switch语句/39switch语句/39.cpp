#include<iostream>
using namespace std;
int main()

{   bool gan=false;
	char a;
	while(1)
	{
	cout<<"������һ�����֣� ";
	cin>>a;
	switch(a)
	{
		//����û������breakָ���ô������ת����������������п�ʼִ�е�����
	case '0':cout<<"�����Ϊ0\n";break;
	case '1':cout<<"�����Ϊ1\n";break;
	case '2':cout<<"�����Ϊ2\n";break;
	case '3':cout<<"�����Ϊ3\n";break;
	case '4':cout<<"�����Ϊ4\n";break;
    case 'q':gan=true;
	default:cout<<"����������ֲ���0��4֮��";
	}
	if(gan==true)
	{
		cout<<"����";
		break;
	}
	}
	return 0;

}
