#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
/*文件流的简单输入输出*/
void FileOne()
{
	/*创建一个文件*/
	ofstream outf("dd.txt");
	/*像文件输入内容*/
	outf<<"德玛西亚"<<endl;
	/*关闭文件流*/
	outf.close();

	/*读*/
	ifstream inf;
	/*绑定文件，返回boolean类型判断打开是否成功*/
	inf.open("dd.txt");

	char s[30];
	/*只读取一行的数据*/
	inf >> s;
	inf.close();

	cout<<"读取的内容是"<<s<<endl;
}
inline void process(string s)
{
	cout<<s<<endl;
}
/*读取多个文件*/
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