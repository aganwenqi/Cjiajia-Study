#include"gan.h"
class book
{
public:
	//��������
	book();//��ʼ��ͼ��
	book(char*,char*,char*,float);//������
	//��ȡ����
	const String& GetTitle()const{return title;}//���� ����
	const String& GetAuthor()const{ return author;}//���� ����
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

}
//������
book::book(char*Title,char*Author,char*Number,float Price):title(Title),author(Author),number(Number),price(Price)
{

}
int main()
{
	book love("��һ��","��","1",25.41f);
	cout<<love.GetAuthor()<<love.GetTitle();
	return 0;
}
