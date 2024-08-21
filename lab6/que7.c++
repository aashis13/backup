#include <iostream>
using namespace std;

class sample
{
private:
    int a, b;

public:
    void setvalue()
    {
        a = 25;
        b = 40;
    }

    friend float mean(sample);
};

float mean(sample s)
{
    return float(s.a + s.b) / 2;
}

int main()
{
    sample sa;
    sa.setvalue();
    cout << "Mean value: " << mean(sa) << endl;
    return 0;
}