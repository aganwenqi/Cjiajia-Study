#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

template <class T>
int compare(const T &v1 , const T &v2)
{
	if(v1 < v2) return -1;
	if(v1 > v2) return 1;
	return 0;
}
template<class T1,class T2>
T1 & print(T1 &c,T2 val)
{
	c << val ;
	return c;
}
void main()
{
	string oristr="this is a test";
	string desstr;
	ostringstream oss(desstr);
	ofstream outFile("result.dat");

	print(outFile,oristr)<<endl;
    
	print(oss,oristr)<<endl;
	cout<<oss.str()<<endl;

	outFile.close();
}