#include"Iostream.h"
class book
{
public:
	//构造类型
	book();//初始化图书
	book(char*,char*,char*,float);//构造书
	~book(){cout<<"book析构完！！"<<endl;}
	//获取类型
	const String& GetTitle()const{return title;}//返回 书名
	      String& GetAuthor(){ return author;}//返回 作者
	const String& GetNumber()const{ return number;}//返回 编号
	float GetPrice()const{return price;}//返回 价格
    //设置类型(单一)
	void SetTitle(const String&Title){title=Title;}//设置书名
	void SetAuthor(const String&Author){author=Author;}//设置 作者
	void SetNumber(const String&Number){number=Number;}//设置 编号
	void SetPrice(float Price){price=Price;}//设置 价格
    //设置类型(全部)
	void total(String&T,String&A,String&N,float P)//设置全部
	{
          title=T;
		  author=A;
		  number=N;
		  price=P;
	}
private:
   String title;//书名
   String author;//作者
   String number;//编号
   float price;//价格
};
//初始化图书
book::book():title(""),author(""),number(""),price(0)
{
        cout<<"book类不带参数构造。。。"<<endl;
}
//构造书
book::book(char*Title,char*Author,char*Number,float Price):title(Title),author(Author),number(Number),price(Price)
{
      cout<<"book类带参数构造。。。"<<endl;
}
/*int main()
{
	book love("第一本","人","1",25.41f);
	cout<<love.GetAuthor()<<love.GetTitle();
	book gan;
	gan=love;
	cout<<gan.GetAuthor()<<gan.GetTitle()<<endl;
	String loveandhate=love.GetAuthor()+gan.GetAuthor();
	book lovehate;
	lovehate.SetAuthor(loveandhate);
	lovehate.SetTitle("新书");
	cout<<lovehate.GetTitle()<<"作者："<<lovehate.GetAuthor()<<endl;
	return 0;
}*/
