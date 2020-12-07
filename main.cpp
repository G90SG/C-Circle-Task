#include <iostream>
using namespace std;

int main()
{

 const float PI = 3.14;
 cout<<"The circumference of a circle with a diameter of 6cm is: " <<endl;
 cout<< PI * 6 << "cm."<<endl;
 cout<< "------------------------------------------"<<endl;
 cout<<"Please enter a diameter of a circle you would like to find out the circumference of: "<<endl;
 int circleD;
 cin>> circleD;
 cout<<"Your circle has a circumference of: "<<endl;
 cout<< PI * circleD << "cm."<<endl;
 
return 0;
}