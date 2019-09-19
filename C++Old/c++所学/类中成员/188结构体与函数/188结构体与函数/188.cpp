#include<iostream>
using namespace std;
struct time
{
	int hour;
	int minumt;
};
time *set(time t1,time t2);
void show(time on){cout<<on.hour<<":"<<on.minumt<<endl;}
void main()
{
	time one={5,15};
	time two={20,55};
	time *day=set(one,two);
	show(*day);
	time day2={22,50};
	time*p=set(*day,day2);
	show(*p);
	delete day;
	delete p;
}
time *set(time t1,time t2)
{
	time *total=new time;
	total->minumt=(t1.minumt+t2.minumt)%60;
	total->hour=t1.hour+t2.hour+(t1.minumt+t2.minumt)/60;
	return total;

}