#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double final_value=0, sip_amount=0, years=0, monthly_rate=0, annual_return_rate=0;

    cout << "Enter the monthly SIP amount: ";
    cin >> sip_amount;

    cout << "Enter the Expected Annual Rate: ";
    cin >> annual_return_rate;

    cout << "Enter the number of years: ";
    cin >> years;

    monthly_rate=annual_return_rate/12/100;

    final_value=sip_amount*(pow(1+monthly_rate,years*12)-1)/monthly_rate;

    std::cout << std::showpoint << std::fixed;
    cout << "Invested Amount: " << sip_amount*years*12 << endl;
    cout << "Projected Value: " << final_value << endl;
    return 0;
}
