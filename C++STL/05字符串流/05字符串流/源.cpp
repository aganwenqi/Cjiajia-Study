#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
void stringStreamOne()
{
	//cout��������ostream
	cout<<"hello!"<<endl;

	//ofs���ļ����������
	ofstream ofs("test.txt");
	ofs<<"hello!"<<endl;
	ofs.close();

	//�ַ��������,�������Ļ
	ostringstream oss;
	oss<<"hello!"<<endl;

	cout<<"��ʾ�ַ�����������ַ���:"<<oss.str()<<endl;
	
}
/*�ַ������������*/
void stringStreamTwo()
{
	ostringstream osstring;
	osstring<<"����"<<"����"<<endl;
	osstring<<"��ss��"<<"��ss��"<<endl;
	cout<<osstring.str()<<endl<<endl;

	istringstream isstring(osstring.str());
	cout<<isstring.str()<<endl;
	
}
int main()
{
	stringStreamTwo();
	return 0;
}