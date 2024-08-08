#include <iostream>
using namespace std;

class A
{
protected:
    int adata;

public:
    A(int a)
    {
        adata = a;
    }
};

class B : public A
{
private:
    int bdata;

public:
    B(int a, int b) : A(a)
    {
        bdata = b;
    }

    void showData()
    {
        cout << "value of a: " << adata << endl;
        cout << "value of b: " << bdata << endl;
    }
};

int main()
{
    B b(5, 3);
    b.showData();
    return 0;
}
