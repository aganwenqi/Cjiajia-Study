#include <iostream>
#include <exception>

using namespace std;
#define DefaultSize 10

class Array
{
public:
	Array(int itsSize = DefaultSize);
	~Array(){ delete [] pType; }

	//运算符重载
	int & operator[](int offSet);
	const int & operator[](int offSet) const;

	//访问器，accessors
	int GetitsSize() const { return itsSize; }

	//异常类
	class xBoundary{};
	class zSize{
	public:
		zSize(){}
		zSize(int size):itsSize(size){}
		~zSize(){}
		int getSize(){ return itsSize; }
		virtual void PrintError(){
			cout<<"下标出现异常！！"<<itsSize<<endl;
		}
	private:
		int itsSize;
	};
	class xZero:public zSize{
	public:xZero(int size):zSize(size){}
		   xZero(){};
	virtual void PrintError(){
			cout<<"下标出现异常！！"<<getSize()<<endl;
		}
	};
	class xNegative:public zSize{
		public:xNegative(int size):zSize(size){}
		xNegative(){};
	virtual void PrintError(){
			cout<<"下标出现异常！！"<<getSize()<<endl;
		}
	};
	class xTooBig:public zSize{
		public:xTooBig(int size):zSize(size){}
		xTooBig(){};
	virtual void PrintError(){
			cout<<"下标出现异常！！"<<getSize()<<endl;
		}
	};
	class xTooSmall:public zSize{
		public:xTooSmall(int size):zSize(size){}
		xTooSmall(){};
	virtual void PrintError(){
			cout<<"下标出现异常！！"<<getSize()<<endl;
		}
	};
private:
	int *pType;
	int itsSize;

};
Array::Array(int size) : itsSize(size)
{
	if(size == 0)
		 throw xZero(size);
	else if(size <10)
		throw xTooSmall();
	else if(size > 30000)
		throw xTooBig();
	else if(size <0)
		throw xNegative();

	pType = new int[size];
	for(int i=0; i<size; i++)
		pType[i] = 0;
}
int & Array::operator [](int offSet)
{
	int size = this->GetitsSize();
	if(offSet >=0 && offSet < size)
		return pType[offSet];
	throw xBoundary();
}
const int & Array::operator [](int offSet) const
{
	int size = this->GetitsSize();
	if(offSet >=0 && offSet < size)
		return pType[offSet];
	throw xBoundary();
}
void main()
{


	try{
	Array a(0);

	a[4] = 88;
	cout<<a[4]<<endl;

	a[0] = 21;
	}catch(Array::xBoundary)
	{
		cout<<"下标越界:"<<endl;
	}
	catch(Array::zSize a)
	{
		cout<<"cannot insert data!exception quetion:"<<a.getSize()<<endl;
		a.PrintError();
	}
	//a[22];

}