#include <iostream>
using namespace std;
class demo
{
    int a;
    float b;
    public:
    void get(int a1, float b1)
    {
        a=a1;
        b=b1;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
}d;
    int main()
    {
        d.get(2,3.4f);
        d.show();
        return 0;
    }