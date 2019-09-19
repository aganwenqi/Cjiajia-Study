#include<iostream>
using namespace std;
class String
{
public:
	~String(){delete []str;len=0;cout<<"����!!"<<endl;}
	String();//��ʼ��0���ַ�
	String(const char*const ch);//��ʼ����char�������ַ�
	int lenght()const{return len;}//�����ַ�������
	const char*getstr()const{return str;}//�����ַ���
	char&operator[](unsigned short int lenght);//�����±����
	String&operator=(const String&s);//=�ŵĸ�ֵ
		char operator[](unsigned short int lenght)const;//�����ɲ����������±����
	String(const String&s);//���ƹ��캯��
       String operator+(const String&s);//��������
	   void operator+=(const String&s);//�ӵ�
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
	friend ostream&operator<<(ostream&s,const String&c)//�����������
	{
		s<<c.str;
		return s;
	}
		friend istream&operator>>(istream&s,const String&c)//������������
	{
		s>>c.str;
		return s;
	}
private:
		String(unsigned short int ch);//��ʼ����int�޷��Ų������ַ�
	unsigned short int len;
	char*str;
};
//��ʼ��0���ַ�
String::String()
{
	len=0;
	str=new char[1];
	str="\0";
}
//��ʼ�����������ַ�
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
char &String::operator[](unsigned short int lenght)//�����±����
{
		if(lenght==1)
	{cout<<"const�±����ء�����"<<endl;}
	if(len<lenght)
	{
		return str[len-1];
	}
	else
	{
		return str[lenght];
	}
}
//�����ɲ����������±����
char String::operator[](unsigned short int lenght)const
{

	if(lenght==1)
	{cout<<"const�±����ء�����"<<endl;}
	if(len<lenght)
	{
		return str[len-1];
	}
		return str[lenght];
}
String::String(const String&s)
	{
			cout<<"Ĭ�ϸ��ƹ��캯�����С�����"<<endl;
		len=s.lenght();
		str=new char[len+1];
		for(int i=0;i<len;i++)
		{
			str[i]=s[i];
		}
		str[len]='\0';
		cout<<"�±�������:"<<lenght()<<endl;

	}
//=�ŵĸ�ֵ
String&String::operator=(const String&s)
	{
		cout<<"=�ŵ����ء�����\n";
		if(this==&s)
		{
			return *this;
		}
		else if(str[0]=='\0'){}
		else{cout<<"ɾ����..."<<endl;delete []str;}
			len=s.lenght();
			str=new char[len+1];
			for(int i=0;i<len;i++)
			{
				str[i]=s[i];
			}
			str[len]='\0';
			return *this;
		
	}
//��������
String String ::operator+(const String&s)
	{
		cout<<"��ӡ�����"<<endl;
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
//�ӵ�
void String ::operator+=(const String&s)
	{
		cout<<"�ӵȡ�����"<<endl;
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
	//��ʼ����int�޷��Ų������ַ�
String::String(unsigned short int ch)
		{
			cout<<"��һ�����Ͳ����������С�����"<<endl;
			len=ch;
			str=new char[len+1];
			for(int i=0;i<=len;i++)
			{
				str[i]='\0';
			}
		}