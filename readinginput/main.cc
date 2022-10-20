#include <iostream>

using namespace std;

int main(){
    int x;
    double y;
    cout << "enter the value of x ";
    cin >> x;
    cout << "enter the value of y ";
    cin >> y;
    double z = (x + 10)/(3 * y);//using some of the assignmet operator

    cout <<"the calculation for the own value is  " << z;

    return 0;
}