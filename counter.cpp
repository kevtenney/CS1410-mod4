
#include <iostream>

using namespace std;

// Constants

class Counter
{
private:
    unsigned int count;
public:

    // Constructor
    Counter(): count(0)
    {}  //want an empty body after the making of a constructor

    void incCount()     //doing increment count
    {
        count++;
    }
    int getCount()     // return the count
    {
        return count;
    }
};

// Prototypes
// Main Program Program

int main(void)
{
    Counter c1;
    cout<<"\nc1 = "<<c1.getCount(); //displays
    c1.incCount();  //increments c1
    cout<<"\nc1 = "<<c1.getCount(); //displays

    return 0;

}

// Function Definitions
