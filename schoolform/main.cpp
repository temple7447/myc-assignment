#include <iostream>

using namespace std;


int main(){
    char firstname[40];
   int year;
    char department[40];
    double grade;
    cout << "enter your full name" << endl;
    cin >> firstname;
    cout << "enter your department" << endl;
    cin >> department;
    cout << "Enter your grade";
    cin >> grade;
      cout << "Enter your the present year";
    cin >> year;
    if (year > 2018)
    {
      if(grade > 3.0){
        cout << "Dear Mr/Mrs "<< firstname<<"." << "You have being offer admission to " << department << " in auchipolytechnic for a four(4) and  to graduate in the year " << year + 4 << endl;
    }
  else if (grade > 2.5 && grade < 2.99)
  {
 cout << "Dear Mr/Mrs "<< firstname<<"." << "You have being offer admission to " << department << " in auchipolytechnic for five(5) and to graduate in the year " << year + 5 << endl;
  }
    else
    {     cout << "Dear Mr/Mrs "<< firstname<<"." << "You have being offer admission to " << department << " in auchipolytechnic for a six(6) and to graduate in the year " << year + 6 << endl;
    }
  
    }
    else
    {
        cout << "Enter a valid year" ;
    }
  
    return 0;
}