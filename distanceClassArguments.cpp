#include <iostream>
using namespace std;

//getting two constructors

class Distance
{
private:
    int feet;
    float inches;   //you can not put anything as private if you want
    //but it is very bad style...it would kill encapsultation
    //to not have private...need to seperate data.
public:
    //Constructor #1
    Distance(): feet(0), inches(0) // constructor with no arguments .
    {/*empty body*/}

    //Constructor #2
    //constructor with two arguments
    Distance(int ft, float in): feet(ft), inches(in)
    {/*empty body*/}

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
    void add_dist(Distance d1, Distance d2);
    Distance add_dist_to_me(Distance d1);
};


int main(void)
{
    //Create an instance "instantiate" - technical term
    // I make d1 and d2 members of the the Distance class below by declarations
    Distance d1, d4;
    cout<<"\nd1 = ";
    d1.showDist();

    Distance d2(8, 2);
    Distance d3(2, 4);
    cout<<"\nd2 = ";
    d2.showDist();
    cout<<"\nd3 = ";
    d3.showDist();

    d4.add_dist(d2, d3);
    cout<<"\nd4 = ";
    d4.showDist();

    d4 = d4.add_dist_to_me(d2);
    cout<<"\nd4 new = ";
    d4.showDist();


    return 0;

}

// Function Definitions
/*Belongs to the class. A method for members only of that class
 * Distance:: is a safeguard so it knows that only class members can get it*
 * Template: type CLASSNAME::/
 * 1) Declare prototype inside class
 * 2) Definition is outside class
 * 3) Use the scope resolution operator:: */
void Distance::add_dist(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches; //add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d1.feet + d2.feet;  // add feet
}
//returning class and taking distance d1
Distance Distance::add_dist_to_me(Distance d1)
{
    Distance temp;
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12)
    {
        temp.inches -= 12.0;
        //temp.feet = 1;
        temp.feet += 1;
    }
    temp.feet += feet + d1.feet;

    return temp;
}