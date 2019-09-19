#include<iostream>
using namespace std;
int main()
{
	short a;//短整型，占据2个字节空间，long a占据4个空间，int a也是占用4个空间
	/*有符号整数型2进制可以表示范围-32768~32767，因为2个字符的二进制1111111111111111中的
	最高位为1表示有符号整数型，0表示无符号整数型，所有最高数值为15个二进制数变为10进制为
	32767，最低数值则在后面加1为十进制32767,32个二进制以此类推*/
	cout<<"int占用字节"<<sizeof(int)<<endl;
	cout<<"short占用字节"<<sizeof(short)<<endl;
	cout<<"long占用字节"<<sizeof(long)<<endl;//这里可以有4*8的32位2进制数，有符号最小可有31个0
	unsigned short A;//无符号符号短整型变量定义，无符号则有32个2进制，最大为0~32个2进制的十进制
	return 0;
}
