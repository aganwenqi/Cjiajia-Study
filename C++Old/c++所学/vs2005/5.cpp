//�������������
#include<iostream>
//ʡȥ������Ҫ����������ռ�
using std::cout;
using std::cin
//����a;
namespace a
{
	//intΪ����ָ����ǰ�2�Ž��ȴ���
	int b=2;
}
namespace c
{int b=3;
}
//��ΪC���Ǻ�����ɵģ���ʹ�����壬��Ҳ��һ�������ĺ���
int main()
{int b=1;
//���
cout<<b<<a::b<<c::b<<std::endl;
int x;
//cin�������Ǵ��水�����������
cin>>x;
cout<<x+1;


//��ֵΪ0
return 0;
}

