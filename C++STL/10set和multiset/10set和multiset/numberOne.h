#ifndef NUMBERONE_H_
#define NUMBERONE_H_
//#include <iostream>
template<class Contarner>
class numberOne
{
public:
	numberOne(){cout<<"OK!"<<endl;}
	void demo1();
	void demo2();
	void demo3();
protected:
	void PrintMap(const Contarner& c);
};
#endif