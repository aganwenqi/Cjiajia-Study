#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
/*�ļ����ļ��������*/
void FileOne()
{
	/*����һ���ļ�*/
	ofstream outf("dd.txt");
	/*���ļ���������*/
	outf<<"��������"<<endl;
	/*�ر��ļ���*/
	outf.close();

	/*��*/
	ifstream inf;
	/*���ļ�������boolean�����жϴ��Ƿ�ɹ�*/
	inf.open("dd.txt");

	char s[30];
	/*ֻ��ȡһ�е�����*/
	inf >> s;
	inf.close();

	cout<<"��ȡ��������"<<s<<endl;
}
inline void process(string s)
{
	cout<<s<<endl;
}
/*��ȡ����ļ�*/
void FileTwo()
{
	vector<string> files;
	files.push_back("one.txt");
	files.push_back("two.txt");
	files.push_back("twdo.txt");
	files.push_back("three.txt");

	string s;
	vector<string>::const_iterator it=files.begin();
	while(it!=files.end())
	{
		ifstream input(it->c_str());
		if(!input)
		{
			cerr<<"error:can not open file:"
				<<*it<<endl;
	
		}
		else
		{
		while(input>>s)
			process(s);
		}
		input.close();
		input.clear();
		++it;
	}
}
void main()
{
	FileTwo();
}