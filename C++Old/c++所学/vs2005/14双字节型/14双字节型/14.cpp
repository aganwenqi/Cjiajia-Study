#include<iostream>
#include<locale>
using namespace std;
int main()
{
	        //LC_ALL表示所有的选项chs表示简体中文
	setlocale(LC_ALL,"chs");
		wchar_t wt[]=L"中";//大写字母L代表分配两个字节空间
   wcout<<wt;//输出宽字符
	return 0;
}
