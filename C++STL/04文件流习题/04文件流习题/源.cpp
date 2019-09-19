#include "get.h"
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int CeshiOne()
{
	cout<<"测试输入流"<<endl;

	double dval;
	get(cin);
	cout<<"继续使用cin"<<endl;
	cin>>dval;
	cout<<dval<<endl;

	cout<<"文件输入流"<<endl;
	ifstream infile;
	string name;
	cout<<"请输入文件名：";
	cin>>name;
	infile.open(name.c_str());
	if(!infile)
	{
		cerr<<"error:can not open input file:"<<name<<endl;
		return -1;
	}
	get(infile);
	return 1;
}
int fileToVector(string fileName,vector<string>& svec)
{
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;
	
	string s;
	while(getline(inFile,s))
		svec.push_back(s);
	inFile.close();
	if(inFile.eof())
		return 4;
	if(inFile.bad())
		return 2;
	if(inFile.fail())
		return 3;
	return 4;
}
int CeshiTwo()
{
	cout<<"测试一下"<<endl;
	
	vector<string> svec;
	string fileName,s;
	cout<<"Enter filename:";
	cin>>fileName;
	
	switch(fileToVector(fileName,svec))
	{
		case 1:
			cout<<"error:can not open file:"<<fileName<<endl;
			return -1;
		case 2:
			cout<<"error: system failure.:"<<fileName<<endl;
			return -1;
			break;
		case 3:
			cout<<"error:read failure.:"<<fileName<<endl;
			return -1;
			break;
		default:
			break;
	}
	cout<<"向量里面的内容"<<endl;
	for(vector<string>::iterator it=svec.begin();
		it!=svec.end();++it)
		cout<<*it<<endl;
	return 1;
}
int main()
{
	CeshiTwo();
}