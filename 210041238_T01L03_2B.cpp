#include <iostream>
#include <conio.h>
using namespace std;

class Counter
{
    private:
        int count;
        int incrementStep;

    public:
        void setIncrementStep(int step_val)
        {
            incrementStep = step_val;
        }

        int getCount()
        {
            return count;
        }

        void increment()
        {
            count += incrementStep;
        }

        void resetCount()
        {
            count = 0;
        }

        bool isEven(int count)
        {
            if (count%2)
                return true;
            else
                return false;
        }
};



int main()
{
    Counter counter1;

    int n;
    cout << "Enter the count: ";
    cin >> n;

    counter1.resetCount();
    counter1.setIncrementStep(n);

    counter1.increment();
    counter1.increment();
    counter1.increment();

    cout << "Current Count: " << counter1.getCount() << endl;

    if(counter1.isEven(counter1.getCount())==false) cout << "Count is even." << endl;
    else cout << "Count is not even." << endl;

    counter1.resetCount();

    cout << "After Resetting Count: " << counter1.getCount() << endl;

    if(counter1.isEven(counter1.getCount())==false) cout << "Count is even." << endl;
    else cout << "Count is not even." << endl;

    getch();
}
