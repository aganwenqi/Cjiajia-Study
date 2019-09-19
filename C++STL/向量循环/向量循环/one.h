#include<iostream>
#include<vector>
#include<bitset>
#include<deque>
using namespace std;
//向量
void vectorFor(){
	vector<int> sh;
	sh.push_back(2);
	sh.push_back(4);
	sh.push_back(5);
	for(vector<int>::size_type i=0;i!=sh.size();++i)
		cout<<sh[i]<<endl;
}
//迭代器
void Iterator(){
	vector<int> v(10,8);

	//begin返回一个迭代器，迭代器实际就是一个指针，
	//它指向第一个元素
	vector<int>::iterator iter=v.begin();

	for(vector<int>::iterator i=v.begin();i!=v.end();++i)
		cout<<*i<<endl;


}
void BitSet(){
	bitset<32> a;//表示可以放32个二进制
	bitset<32> f(string("0100000110101"),5,4);//表示从第五位后面的四位放进去
	cout<<a<<endl;
	cout<<f<<endl;//输出二进制

	cout<<"是否有1:"<<a.any()<<endl;//检查是否有一个1，有返回真

	size_t bits_set=a.count();//返回一共有几个1

}
void Const_cast(){
	const int a=4;
	int *b=const_cast<int*>(&a);
	*b=5;
	cout<<*b<<endl;
	cout<<a<<endl;

	int &c=const_cast<int&>(a);
	c=5;
	cout<<c<<endl;
	cout<<a<<endl;
	throw 1;//抛出异常，外面需要写try catch

//int main()
//{
//	deque<std::string> love;
//	love.push_back("You");
//	love.push_back("are");
//	love.push_back("going");
//	love.push_back("to");
//	love.push_back("lose");
//	love.push_back("me");
//	love.push_front("[奸笑]");
//	for(deque<std::string>::const_iterator p;
//		p!=love.end();
//		++p
//		)
//		cout<<*p<<"\t";
//	return true;
//}
}
