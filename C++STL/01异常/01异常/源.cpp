#include "Stack.h"
void main(){
	std::cout<<"ÎÒµÄ´óµ¶"<<std::endl;
	Stack<int> a;
	a.push(2);
	a.push(4);
	a.push(2);
	try{
	std::cout<<a.top()<<"\t";
	std::cout<<a.top()<<"\t";
	std::cout<<a.top()<<"\t"<<std::endl;

	std::cout<<a.pop()<<"\t";
	std::cout<<a.pop()<<"\t";
	std::cout<<a.pop()<<"\t";
	std::cout<<a.pop()<<"\t";
	}catch(const std::exception& e)
	{
		std::cout<<e.what()<<std::endl;
	}
}