#include <iostream>
using namespace std;
/* Task: Define a class named Distance
 * that stores int feet and float inches
 * Two methods: setDist -> set input from user
 *              getDist -> set info with the customer input
 *              showDist -> Display values
 */
class Distance
{
private:
    int feet;
    float inches;   //you can not put anything as private if you want
                    //but it is very bad style...it would kill encapsultation
                    //to not have private...need to seperate data.
public:
    void setDist(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDist()  //get user input
    {
        cout<<"\nEnter feet: ";
        cin>> feet;
        cout<<"\nEnter inches: ";
        cin >> inches;
    }
    void showDist()     // display information
    {
        cout << "Feet "<<feet<<" and inches "<<inches<<endl;
    }
};
// Constants



// Prototypes



// Main Program Program

int main(void)
{
    //Create an instance "instantiate" - technical term
    Distance d1,d2;
    //use methods to set/access data
    d1.setDist(6, 6.5);
    cout<<"\nDist 1 "<< endl;
    d1.showDist();

    d2.getDist();
    cout<<"\nDist2"<<endl;
    d2.showDist();

    cout<<"\nDist 2"<<endl;
    d2.setDist(3, 1.5);
    d2.showDist();
    //update info
    d2.getDist();
    cout<<"\nDist 2"<<endl;
    d2.showDist();


    return 0;

}

// Function Definitions
