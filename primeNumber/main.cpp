#include <iostream>  
using namespace std; 

void prime_Number_check (int num){
    int j = 0;

   //check for prime number
   for (int i = 1; i <= num; i++)
   {
    int values = (num % i);
      if (values == 0)
      {
         j++;
         cout << j<<endl;
      }
   }

   if (j == 2)
      cout << "\n" << num << " is a prime number.\n";
   else
      cout << num << " is not a prime number.\n";
}

void prime_Number_check_loop(int num){
     int i, chk=0, j;
  
    for(i=1; i<=num; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
}

int main()  
{  int num;
     cout << "Enter number: ";
   cin >> num;
    prime_Number_check(num);
    prime_Number_check_loop(num);
   
  return 0;  
}  