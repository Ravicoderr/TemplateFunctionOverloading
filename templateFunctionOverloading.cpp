#include <iostream>
using namespace std;
template <class t1>
class ravi
{
public:
    t1 data;
    ravi(t1 a)
    {
        data = a;
        cout << data << endl;
    }
    void display();
};
template <class t1>
void ravi<t1>::display()
{
    cout << data;
}

template <class t1>
void func(t1 a)
{
    cout << "i am first function " << a << endl;
}

void func(int a) // function overloading
{
    cout << "I am second function " << a << endl;
}
int main()
{
    ravi<float> h(3.5);
    h.display();
    cout << endl;

    func(9); // yha pr int vala function call hua naki [t] vala , kyuki
             // exact match ko priority di jati h hmehsa.

    return 0;
}