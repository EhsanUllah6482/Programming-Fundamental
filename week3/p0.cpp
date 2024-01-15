#include <iostream>
using namespace std;
int main()
{
    float workingday,usdtopkr,dailyEarning,averageEarning;
    cout<<"Enter working days per month: ";
    cin>>workingday;
    cout<<"Enter daily earning: ";
    cin>>dailyEarning;
    cout<<"Enter usd to pkr exchange rate: ";
    cin>>usdtopkr;
    float onemonthsalary,annualincome,afterTax,netAnnualIncome;
    onemonthsalary=workingday*dailyEarning;
    annualincome=(onemonthsalary*12.00)+(onemonthsalary*2.5);
    afterTax=25.00/100.00*annualincome;    netAnnualIncome=annualincome-afterTax;
    averageEarning=(netAnnualIncome*usdtopkr)/365;
    cout<<"The average earning in pkr is: "<<averageEarning<<"pkr";

    return 0;
}