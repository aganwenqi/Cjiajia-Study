#include<iostream>
#include<vector>
#include<bitset>
#include<deque>
using namespace std;
//����
void vectorFor(){
	vector<int> sh;
	sh.push_back(2);
	sh.push_back(4);
	sh.push_back(5);
	for(vector<int>::size_type i=0;i!=sh.size();++i)
		cout<<sh[i]<<endl;
}
//������
void Iterator(){
	vector<int> v(10,8);

	//begin����һ����������������ʵ�ʾ���һ��ָ�룬
	//��ָ���һ��Ԫ��
	vector<int>::iterator iter=v.begin();

	for(vector<int>::iterator i=v.begin();i!=v.end();++i)
		cout<<*i<<endl;


}
void BitSet(){
	bitset<32> a;//��ʾ���Է�32��������
	bitset<32> f(string("0100000110101"),5,4);//��ʾ�ӵ���λ�������λ�Ž�ȥ
	cout<<a<<endl;
	cout<<f<<endl;//���������

	cout<<"�Ƿ���1:"<<a.any()<<endl;//����Ƿ���һ��1���з�����

	size_t bits_set=a.count();//����һ���м���1

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
	throw 1;//�׳��쳣��������Ҫдtry catch

//int main()
//{
//	deque<std::string> love;
//	love.push_back("You");
//	love.push_back("are");
//	love.push_back("going");
//	love.push_back("to");
//	love.push_back("lose");
//	love.push_back("me");
//	love.push_front("[��Ц]");
//	for(deque<std::string>::const_iterator p;
//		p!=love.end();
//		++p
//		)
//		cout<<*p<<"\t";
//	return true;
//}
}
