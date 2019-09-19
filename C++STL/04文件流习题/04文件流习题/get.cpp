#include "get.h"
using namespace std;
istream& get(istream& in)
{
	int ival;
	while(in>>ival,!in.eof())
	{
		if(in.bad())
		throw runtime_error("IO streaam corrupted");
		if(in.fail())
		{
			std::cerr<<"bad data,try again."<<endl;
			in.clear();
			in.ignore(200,'\n');
			continue;
		}
		std::cout<<"输入的数据："<<ival<<endl;
	}
	in.clear();
	return in;
}