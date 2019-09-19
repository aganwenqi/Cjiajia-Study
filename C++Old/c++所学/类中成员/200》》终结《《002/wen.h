#include<iostream>
using namespace std;
class String
{
public:
	~String(){delete []str;len=0;cout<<"析完!!"<<endl;}
	String();//初始化0个字符
	String(const char*const ch);//初始化带char参数的字符
	int lenght()const{return len;}//返回字符串长度
	const char*getstr()const{return str;}//返回字符串
	char&operator[](unsigned short int lenght);//限制下标过界
	String&operator=(const String&s);//=号的赋值
		char operator[](unsigned short int lenght)const;//常量可操作的限制下标过界
	String(const String&s);//复制构造函数
       String operator+(const String&s);//对象的相加
	   void operator+=(const String&s);//加等
     friend bool operator<(const String&str1,const String&str2)
	 {
		 if(strcmp(str1.str,str2.str)<0)
		 { return 1;}
		 return 0;
	 }
    friend bool operator>(const String&str1,const String&str2)
	 {
		 if(strcmp(str1.str,str2.str)>0)
		 { return 1;}
		 return 0;
	 }
	    friend bool operator==(const String&str1,const String&str2)
	 {
		 if(strcmp(str1.str,str2.str)==0)
		 { return 1;}
		 return 0;
	 }
	friend ostream&operator<<(ostream&s,const String&c)//重载输出运算
	{
		s<<c.str;
		return s;
	}
		friend istream&operator>>(istream&s,const String&c)//重载输入运算
	{
		s>>c.str;
		return s;
	}
private:
		String(unsigned short int ch);//初始化带int无符号参数的字符
	unsigned short int len;
	char*str;
};
//初始化0个字符
String::String()
{
	len=0;
	str=new char[1];
	str="\0";
}
//初始化带参数的字符
String::String(const char*const ch)
{
	len=strlen(ch);
	str=new char[len+1];
	for(int i=0;i<len;i++)
	{
		str[i]=ch[i];
	}
	str[len]='\0';
}
char &String::operator[](unsigned short int lenght)//限制下标过界
{
		if(lenght==1)
	{cout<<"const下标重载。。。"<<endl;}
	if(len<lenght)
	{
		return str[len-1];
	}
	else
	{
		return str[lenght];
	}
}
//常量可操作的限制下标过界
char String::operator[](unsigned short int lenght)const
{

	if(lenght==1)
	{cout<<"const下标重载。。。"<<endl;}
	if(len<lenght)
	{
		return str[len-1];
	}
		return str[lenght];
}
String::String(const String&s)
	{
			cout<<"默认复制构造函数运行。。。"<<endl;
		len=s.lenght();
		str=new char[len+1];
		for(int i=0;i<len;i++)
		{
			str[i]=s[i];
		}
		str[len]='\0';
		cout<<"下标重载了:"<<lenght()<<endl;

	}
//=号的赋值
String&String::operator=(const String&s)
	{
		cout<<"=号的重载。。。\n";
		if(this==&s)
		{
			return *this;
		}
		else if(str[0]=='\0'){}
		else{cout<<"删除中..."<<endl;delete []str;}
			len=s.lenght();
			str=new char[len+1];
			for(int i=0;i<len;i++)
			{
				str[i]=s[i];
			}
			str[len]='\0';
			return *this;
		
	}
//对象的相加
String String ::operator+(const String&s)
	{
		cout<<"相加。。。"<<endl;
		int total=len+s.lenght();
		String temp(total);
		int i,j;
		for(i=0;i<len;i++)
		{
			temp[i]=str[i];

		}
		for(j=0;j<s.lenght();j++,i++)
		{
			temp[i]=s[j];
		}
		return temp;

	}
//加等
void String ::operator+=(const String&s)
	{
		cout<<"加等。。。"<<endl;
		int total=len+s.lenght();
		String temp(total);
		int i,j;
		for(i=0;i<len;i++)
		{
			temp[i]=str[i];

		}
		for(j=0;j<s.lenght();j++,i++)
		{
			temp[i]=s[j];
		}
	*this=temp;

	}
	//初始化带int无符号参数的字符
String::String(unsigned short int ch)
		{
			cout<<"带一个整型参数构造运行。。。"<<endl;
			len=ch;
			str=new char[len+1];
			for(int i=0;i<=len;i++)
			{
				str[i]='\0';
			}
		}