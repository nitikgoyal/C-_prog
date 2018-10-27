//call by pointer
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    void swap1(int *,int *);
    a=10;
    b=25;
    cout<<"Before calling a = "<<a<<" b = "<<b<<endl;
    swap1(&a,&b);
    cout<<"After calling a = "<<a<<" b = "<<b<<endl;
    return 0;
}
void swap1(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    cout<<"Value of a & b in function : "<<*x<<" "<<*y<<endl;
}
//code ends here
