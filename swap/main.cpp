#include <iostream>

using namespace std;

   int swap_variable_three(int a, int b, int* temp, int* temps )
   {
    *temp = b;
    *temps = a;
   
}

int main(){
    
    int a,b,c,d;
    int typeofswap;
    cout << "enter 3 to start swapping" << endl;
    cin >> typeofswap;
    cout << "We have two values you want to swap" << endl;
    
  if (typeofswap == 3)
  {
     cout << "enter the first value" <<endl;
    cin >> a;
     cout << "enter the second value" <<endl;
    cin >> b;
   swap_variable_three(a,b, &c,&d);
   cout << "your first values before swap is " << a << endl;
   cout << "your second values before swap is " << b << endl;
   cout << "your first  values after swap is " << c << endl;
   cout << "your second values after swap is " << d << endl;
  }else
  {
    cout << "we can only calculate swapping using two and three variable only but you enter '" <<  typeofswap <<"', but you are welcome" << endl;
  }
    return 0;
   
}