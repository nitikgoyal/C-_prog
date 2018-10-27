#include <iostream>
//this is call by reference
using namespace std;

class swapvar
{
    int a;
public:
    void getdata()
    {
        cin>>a;
    }
    void swap1(swapvar &o)
    {
        int t;
        t=o.a;
        o.a=a;
        a=t;
        cout<<a<<" "<<o.a<<endl;
    }
    void display()
    {
        cout<<a<<" ";
    }
};

int main()
{
    swapvar ob,ob1;
    ob.getdata();
    ob1.getdata();
    ob.swap1(ob1);
    ob.display();
    ob1.display();
    return 0;
}
//code end here
