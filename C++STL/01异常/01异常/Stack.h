#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include <deque>
#include <exception>

template <class T>
class Stack{
protected:
	std::deque<T> c;
public:
	
	class ReadStackEmpty:public std::exception{
	public:
		virtual const char * what()const throw(){
			return "Õ»ÒÑ¾­Îª¿Õ£¡£¡";
		}
	};
	bool empty(){
		return c.empty();
	}
	void push(const T& data){
		c.push_back(data);
	}
	const T& top(){
		if(empty())
			throw ReadStackEmpty();
		return c.back();
	}
	const T& pop(){
		if(empty())
			throw ReadStackEmpty();
		T e(c.back());
		c.pop_back();
		return e;
	}
};
#endif