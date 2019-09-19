#include <iostream>
using namespace std;
int main()
{
int a;
int b=11;
for (a=1;a<=10;a++)
{
        for (int b=11;b<=20;b++)
       {
              if (b==15)
              {
                     b=16;
              }
              cout<<b;
       }
       cout<<a;
}
return 0;
}