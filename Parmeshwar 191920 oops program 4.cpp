#include<iostream>
using namespace std;
inline int power(int x,int y);
int main()
{
    cout<<"this program work on the concept of inline function"<<endl;
cout<<"the value of power is\n"<<power(2,2)<<endl;
cout<<"the value of power is\n"<<power(2,3)<<endl;
cout<<"the value of power is\n"<<power(2,9)<<endl;
return 0;
}
int power(int m,int n)
{
int result=1,i;
for(i=1;i<=n;i++)
{
result=result*m;
}
return result;
}
