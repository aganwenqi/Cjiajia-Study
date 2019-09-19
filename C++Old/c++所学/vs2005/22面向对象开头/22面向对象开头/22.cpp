#include<iostream>
using namespace std;
//类定义
class Human//人类
{
	//成员定义
public:
	//加了下划线首字母就不需要大写
	void  get_statrue(){cout<<"身高"<<statrue<<"该成员做什么必须定义\n";}    //人类身高,Get的意思是获得
    void  GetWeight();     //人类体重
	//单体其他对象不可改变另一个对象
	void SetStatrue(int x){statrue=x;}//因为不能直接访问私有的，所以要在成员里面侧面定义
	void SetWeight(int x);
private:
	int  statrue;    //身高
    int  weight;    //重量
};
void Human::SetWeight(int x)
{
	weight=x;
}
void Human::GetWeight()
{
	cout<<"重量"<<weight<<endl;
}
void main()
{
	Human Mike;//定义一个对象
	Mike.SetStatrue ();
	Mike.get_statrue ();
	Mike.SetWeight(100);
	Mike.GetWeight();
	//Mike.statrue-2;不能直接访问私有成员

}
