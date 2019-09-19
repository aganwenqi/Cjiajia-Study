#include "String.h"
int main()
{
	String s;
	cout<<s<<endl;
	cout<<s.lenght()<<endl;
	s="hello word";
	cout<<"×Ö·û´®³¤¶È:"<<s.lenght()<<"×Ö·û´®£º"<<s<<endl;
	String s1("good bye");
	cout<<"×Ö·û´®³¤¶È:"<<s1.lenght()<<"×Ö·û´®£º"<<s1<<endl;
	s1=s;
	cout<<"×Ö·û´®³¤¶È:"<<s1.lenght()<<"×Ö·û´®£º"<<s1.getstr()<<endl;
	cin>>s1[999];
    cout<<"×Ö·û´®³¤¶È:"<<s1.lenght()<<"×Ö·û´®£º"<<s1.getstr()<<endl;
	cout<<"s1[999]:"<<s1[999]<<endl;
    String s2=s1;
	cout<<"×Ö·û´®³¤¶È:"<<s2.lenght()<<"×Ö·û´®£º"<<s2.getstr()<<endl;
	cin>>s2;
	cout<<"×Ö·û´®³¤¶È:"<<s2.lenght()<<"×Ö·û´®£º"<<s2<<endl;
	int ch=s1<s2;
	cout<<"s1:s2="<<ch<<endl;
	cout<<"·Ç³£³¤...."<<endl;
	s=s1+s2;
	cout<<s<<endl;
	cout<<"¼ÓµÈ"<<endl;
	s+=s1;
	cout<<s<<endl;
}