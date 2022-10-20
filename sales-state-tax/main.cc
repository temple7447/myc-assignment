#include <iostream>
/*
In a store your sales is $95,000 and the state-tax and country tax is 4% and 2%,
we want to know the percentage of the state tax and country tax and also the remaining sale in the store
*/
using namespace std; // decrearation of the header

int main(){
    double sales = 95000;
    double statetax = .04;
    double countrytax = .02;
    double statePrice = sales * statetax; // this calculate the percentage of the state price from the sales prices
    double countryPrice = sales * countrytax;// this calculate the percentage of the country price from the sales prices
    double salesPrice = sales - (countryPrice + statePrice);// this calculate the remaining of the  store price from the sales prices

    cout << "The state tax is "<< statePrice << endl;
    cout << "The country tax is "<< countryPrice << endl;
    cout << "The remaining sales in the store is "<< salesPrice << endl;

    return 0;
}