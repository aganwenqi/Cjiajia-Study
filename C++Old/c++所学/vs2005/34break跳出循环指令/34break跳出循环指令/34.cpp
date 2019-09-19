#include <iostream>
using namespace std;
int main()
{
int a,b;
for (a=1;a<=10;a++)
{
       for (b=2;b<=10;b++)
       {
              if (b==15)
              {
                     b=17;break;
              }
              cout<<b;
	   }
	   cout<<a<<endl;
}
	   

return 0;
}