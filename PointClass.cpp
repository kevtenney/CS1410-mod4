
#include <iostream>
using namespace std;

// Constants
class Point
{
private:
    float x;    //x coordinate
    float y;    //y coordinate
public:
    Point(): x(0.0), y(0.0) {}
    void showPoint()
    {
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
};


// Prototypes



// Main Program Program

int main(void)
{
    Point p1;
    p1.showPoint(); //display values
    p1.updatePoint(2.5, 3.9);   //update values
    p1.showPoint();
    return 0;

}

// Function Definitions
