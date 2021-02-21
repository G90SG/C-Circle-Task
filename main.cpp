// Calling pre defined functions
#include <iostream>
using namespace std;

int main()
{
// Delaring the Variable PI as a constant value of 3.14. This has to be input as a float, to carry the decimal places required for the mathematical operator PI.
 const float PI = 3.14;
// Advising the user of the calculatiom
 cout<<"The circumference of a circle with a diameter of 6cm is: " <<endl;
// The Variable PI is Multiplied by 6 to give the cicrumference of a 6cm circle
 cout<< PI * 6 << "cm."<<endl;
// Separator line
 cout<< "------------------------------------------"<<endl;
// Asking the user to provide diameter value
 cout<<"Please enter a diameter of a circle you would like to find out the circumference of: "<<endl;
// Declaring the Valiable circleD as an integer
 int circleD;
// Accepting input from the keyboard to be held by circleD
 cin>> circleD;
// Advising the user of the calculation using the keyboard input
 cout<<"Your circle has a circumference of: "<<endl;
 cout<< PI * circleD << "cm."<<endl;
 
return 0;
}
