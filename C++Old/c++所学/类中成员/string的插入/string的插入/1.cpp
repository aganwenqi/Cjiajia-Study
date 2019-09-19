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
	//2表示从str1的第二个字符开始输入，str2表示要插入的string字符串，0表示从第0个元素开始插入，4表示从第4个元素结束
	//string类中的inserf函数表示上面的意思
	str1.insert(2,str2,0,4);
	cout<<str1<<endl;
		 //把str2的第2个下标的2个字符赋值给str1,第三个不会显示，因为他是\0结束标志
	 str1.append(str2,2,3);
		 cout<<str1<<endl;
		 //表示第一个0和第二个2需要替换的个数，最后面面两个2表示把str2的下标2开始的2个元素替换掉str1中0到2的
		 //他支持char字符串的替换
      str1.replace(0,2,str2,2,2);
    //表示把str2的两个字符替换掉str1中的字符
	   str1.replace(0,2,2,str3);
		  cout<<str1<<endl;

	//char类型的字符串用strncat参数把ch2的前面三个字符赋依次在ch1的后面插入

   strncat(ch1,ch2,3);
     cout<<ch1<<endl;
	  strncpy(ch1,ch2,3);
		 //表示把第二个字符串的前三个字符替换掉第一个字符串前三个的的字符
		 cout<<ch1<<endl;

	return 0;
}