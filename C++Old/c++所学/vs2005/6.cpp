#include<iostream>
//void表示没有返回值
void show()
{int x;
	std::cin>>x;
	std::cout<<x;
  
}
int main()
//show表示跳转子显示程序
{
	show();
	std::cout<<"结束\n";
	return 0;
}

