#include <iostream>
using namespace std;

class smallobj      //define class
{
private:
    int somedata;   //class data
public:
    void setdata(int d) //Member function to set the data
    {
        somedata = d;
    }
    void showdata()     // Memeber function to display/get data
    {
        cout<<"Data is "<< somedata << endl;
    }
};
int main()
{
    // Create an instance or member of the class
    smallobj s1; //instance of class but calling it s1
    smallobj s2;

    // Error is created on the line below...
    //  cannot access the data directly
    //cout << "Some data is "<< s1.somedata << endl;

    //set the data
    //dot operator = class member access operator
    s1.setdata(123);
    s2.setdata(456);

    //Show your data
    s1.showdata();
    s2.showdata();

    return 0;
}