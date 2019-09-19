//函数输入输出库
#include<iostream>
//省去下面需要输入的命名空间
using std::cout;
using std::cin
//定义a;
namespace a
{
	//int为储存指令，就是把2放进先存着
	int b=2;
}
namespace c
{int b=3;
}
//因为C都是函数组成的，即使是主体，它也是一个完整的函数
int main()
{int b=1;
//输出
cout<<b<<a::b<<c::b<<std::endl;
int x;
//cin的作用是储存按键输入的内容
cin>>x;
cout<<x+1;


//数值为0
return 0;
}

