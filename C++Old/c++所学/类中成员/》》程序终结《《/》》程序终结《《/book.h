#include"Iostream.h"
class book
{
public:
	//��������
	book();//��ʼ��ͼ��
	book(char*,char*,char*,float);//������
	~book(){cout<<"book�����꣡��"<<endl;}
	//��ȡ����
	const String& GetTitle()const{return title;}//���� ����
	      String& GetAuthor(){ return author;}//���� ����
	const String& GetNumber()const{ return number;}//���� ���
	float GetPrice()const{return price;}//���� �۸�
    //��������(��һ)
	void SetTitle(const String&Title){title=Title;}//��������
	void SetAuthor(const String&Author){author=Author;}//���� ����
	void SetNumber(const String&Number){number=Number;}//���� ���
	void SetPrice(float Price){price=Price;}//���� �۸�
    //��������(ȫ��)
	void total(String&T,String&A,String&N,float P)//����ȫ��
	{
          title=T;
		  author=A;
		  number=N;
		  price=P;
	}
private:
   String title;//����
   String author;//����
   String number;//���
   float price;//�۸�
};
//��ʼ��ͼ��
book::book():title(""),author(""),number(""),price(0)
{
        cout<<"book�಻���������졣����"<<endl;
}
//������
book::book(char*Title,char*Author,char*Number,float Price):title(Title),author(Author),number(Number),price(Price)
{
      cout<<"book����������졣����"<<endl;
}
/*int main()
{
	book love("��һ��","��","1",25.41f);
	cout<<love.GetAuthor()<<love.GetTitle();
	book gan;
	gan=love;
	cout<<gan.GetAuthor()<<gan.GetTitle()<<endl;
	String loveandhate=love.GetAuthor()+gan.GetAuthor();
	book lovehate;
	lovehate.SetAuthor(loveandhate);
	lovehate.SetTitle("����");
	cout<<lovehate.GetTitle()<<"���ߣ�"<<lovehate.GetAuthor()<<endl;
	return 0;
}*/
