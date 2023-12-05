#include <iostream>
using namespace std;

class A
{
    public:
    void fun() noexcept
    {
        cout << "ankit";
    }
};
class B : public A
{
    public:
    void fun()
    {
        cout << "ankush";
    }
};

int main()
{
    B obj;
    obj.fun();
    return 0;
}