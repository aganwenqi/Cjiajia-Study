#include<iostream>
#include<ionanip>
using namespace std;
int main()
{
	//表示单精度，最多精确到6-7位，内存占4个字节空间（4*8个2进制数）
	float a=12.123456789012345;
    //表示双精度，最多精确到15-16位，单内存比单精度多一倍
	double b=12.123456789012345;
    //精确到6-7
	cout<<setprecision(15)<<a;
	//精确到15-16
	cout<<setprecision(15)<<b
	return 0;
}