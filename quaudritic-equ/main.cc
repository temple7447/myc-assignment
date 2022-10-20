#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "enter the value of a,b,c in this order ";
    double a;
    double b;
    double c;
    cin >> a >> b >> c;
   cout << b;
    double value = pow(b,2) - 4*a*c;

    if (value < 0) {
     double x1 = (-b+sqrt(-1 * value))/(2*a);
     double x2 = (-b-sqrt(-1 * value))/(2*a);
     
     cout << "the first value of x is " << x1 << endl;
     cout << "the seconf value of x is " << x2 << endl;
    }
    else
    {
    double x1 = (-b+sqrt(value))/(2*a);
     double x2 = (-b-sqrt(value))/(2*a);
     
     cout << "the first value of x is " << x1 << endl;
     cout << "the seconf value of x is " << x2 << endl;
        
    }



    return 0;
}