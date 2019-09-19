#include<iostream>
#include<string>
using namespace std;
void (*p[2])(float &x,float &y);
float(*pt[2])(float &x,float &y);

void print(float &x,float &y)
{
	cout<<"长："<<x<<"宽："<<y<<endl;
}
 void swap(float &x,float &y)
 {
	 float z;
	 z=x;
	 x=y;
	 y=z;
 }
 float triangle(float &x,float &y)
 {
	 return x*y*0.5;
 }
 float rectangle(float &x,float &y)
 {
	 return x*y;
 }
 bool check(string str)
 {
	 for(int i=0;i<str.length();i++)
	 {
		 if((str[i]>'9'||str[i]<'0')&&(str[i]!='.'))
		 {return true;}
	 }
	 return false;
 }
 void get(float &x,float &y)
 {
	 cout<<"请输入长的值:";
	 string str1;
	 cin>>str1;
	 while(check(str1))
	 {
		 cout<<"输入的不是数字和点,请重新输入"<<endl;
		 cin>>str1;
	 }
	 x=atof(str1.c_str());
	  cout<<"请输入宽的值:";
	 string str2;
	 cin>>str2;
	 while(check(str2))
	 {
		 cout<<"输入的不是数字和点,请重新输入"<<endl;
		 cin>>str2;
	 }
	 y=atof(str2.c_str());
 }
 int main()
 {  
      bool quit=false;
	  float a=2,b=3;
	  int choick=0;
	  while(quit==false)
	  {
		  cout<<"0退出，1设定长和宽，2长方形，3正方形，4交换长和宽，5刷屏\n";
			  cin>>choick;
		  switch(choick)
		  {
		  case 0:quit=true;break;
		  case 1:/*print(a,b);
			     get(a,b);
				 cout<<"设定后的";
				 print(a,b);*/
				 p[choick]=get;
				 break;
		  case 2:/*cout<<"正方形面积："<<rectangle(a,b)<<endl;*/pt[choick]=rectangle;break;
		  case 3:/*cout<<"三角形面积："<<triangle(a,b)<<endl;*/pt[choick]=triangle;break;
		  case 4:/*print(a,b);
			     swap(a,b);
				 cout<<"交换后：";
				 print(a,b);*/
				 p[choick]=swap;break;
		  case 5:system("cls");break;
		  default:cout<<"输入无效，请重新输入"<<endl;break;
		  }
		  if(choick==1||choick==4)
		  {
			  print(a,b);
			  p[choick](a,b);
			  if(choick==1){cout<<"设定后的";}else{cout<<"交换后：";}
			  print(a,b);
		  }
		  if(choick==2||choick==3)
		  {
			  if(choick==2){cout<<"正方形面积：";}else{cout<<"三角形面积：";}
			  cout<<pt[choick](a,b)<<endl;

		  }
	  }
	 return 0;
 }