#include <iostream>

using namespace std;

class counter
{
private:
    int count;
    int value;

public:
    void setIncrementStep(int x)
    {
        value = x;
    }
    int getCount()
    {
        return count;
    }
    void resetCount()
    {
        count = 0;
    }
    void increment()
    {
        count = count + value;
    }
};

int main()
{

    counter c1;
    c1.resetCount();
    c1.setIncrementStep(4);
    c1.increment();

    cout << "Count: " << c1.getCount() << endl;

    c1.setIncrementStep(2);
    c1.increment();

    cout << "Count: " << c1.getCount() << endl;

    c1.setIncrementStep(3);
    c1.increment();

    cout << "Count: " << c1.getCount() << endl;
    c1.resetCount();
    cout << "Count: " << c1.getCount() << endl;

    return 0;
}