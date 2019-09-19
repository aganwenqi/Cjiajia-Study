#include<iostream>
using namespace std;
int main()
{   

	int ch;
	char a[50]={"My name is:"};
	char b[]={"ganwenqi"};
	while(1){
	cout<<"输入1或2或3,(4)把字符串变成大写，(5)把字符串变小写,(6)合并的字符串长度，其他结束"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:cout<<"strcat表示把两个字符串数组合并，且合并到前面该数组中，前面该数组必须有足够位"<<endl;
	cout<<strcat(a,b)<<endl;
	cout<<b<<endl;break;
	case 2:cout<<"表示把b的数组拷贝给a，并且覆盖"<<endl;
	cout<<strcpy(a,b)<<endl;
	cout<<b<<endl;break;
	case 3:cout<<"被拷贝的也可以是如下的字符串"<<endl;
		cout<<a<<endl;
   cout<<strcpy(a,"qiujinfeng")<<endl;
   cout<<b<<endl;
	break;
	case 4:cout<<strupr(a)<<strupr(b)<<endl;break;
		case 5:cout<<strlwr(a)<<strlwr(b)<<endl;break;
			case 6:cout<<strlen(strcat(a,b))<<endl;break;
	default:goto loop;
	}
	if(strcmp(a,b)==0){cout<<"他们相等"<<endl;}
	else if(strcmp(a,b)<0){cout<<"b比a少字符串"<<endl;}
	else if(strcmp(a,b)>0){cout<<"b比a多字符串"<<endl;}
}
loop:return 0;

}