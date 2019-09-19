#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
void print(int n)
{
	cout<<n<<" ";
}
//函数对象
class PrintInt
{
public:
	void operator()(int elem)const
	{
		cout<<elem<<" ";
	}
};

//模板函数对象
template<class T>
class func_obj
{
private:
	T value;
public:
	func_obj(const T& t):value(t){}
	void operator()(T& elem)
	{
		elem+=value;
	}
};

class MeanValue
{
private:
	long num;
	long sum;
public:
	MeanValue():num(0),sum(0){}
	void operator()(int elem)
	{
		num++;
		sum+=elem;
	}
	double value()
	{
		return static_cast<double>(sum)/static_cast<double>(num);
	}
	operator double()
	{
		return static_cast<double>(sum)/static_cast<double>(num);
	}
};
void main()
{

	vector<int> a;
	a.push_back(2);
	a.push_back(3);
	a.push_back(24);
	a.push_back(5);
	for_each(a.begin(),a.end(),print);//遍历
	cout<<endl<<endl;
	vector<int>::iterator pos;
	for_each(a.begin(),a.end(),func_obj<int>(10));//都加;
	for_each(a.begin(),a.end(),PrintInt());//遍历

	MeanValue &as=for_each(a.begin(),a.end(),MeanValue());
	cout<<endl<<as.value()<<endl;

	double db=for_each(a.begin(),a.end(),MeanValue());//operator用double接受
	cout<<endl<<db<<endl;

}