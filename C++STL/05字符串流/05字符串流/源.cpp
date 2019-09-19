#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
void stringStreamOne()
{
	//cout是流对象，ostream
	cout<<"hello!"<<endl;

	//ofs是文件输出流对象
	ofstream ofs("test.txt");
	ofs<<"hello!"<<endl;
	ofs.close();

	//字符串输出流,输出到屏幕
	ostringstream oss;
	oss<<"hello!"<<endl;

	cout<<"显示字符串流里面的字符串:"<<oss.str()<<endl;
	
}
/*字符串输入输出流*/
void stringStreamTwo()
{
	ostringstream osstring;
	osstring<<"姓名"<<"德玛"<<endl;
	osstring<<"姓ss名"<<"德ss玛"<<endl;
	cout<<osstring.str()<<endl<<endl;

	istringstream isstring(osstring.str());
	cout<<isstring.str()<<endl;
	
}
int main()
{
	stringStreamTwo();
	return 0;
}