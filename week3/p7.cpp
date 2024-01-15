#include <iostream>
using namespace std;
int main()
{
    string movieName;
    int adultPrice,childPrice,adultSold,childSold,DonationPercentage,adultCollection,childCollection,afterDonation,totalEarning;
    cout << "Enter the name of the Movie: ";
    cin>>movieName;
    cout<<"Enter the price for an Adult ticket: ";
    cin >> adultPrice;
    cout<<"Enter Child ticket price: ";
    cin>>childPrice;
    cout<<"Enter adult ticket sold: ";
    cin>>adultSold;
    cout<<"Enter child ticket sold: ";
    cin>>childSold;
    cout<<"Enter percentage to be donated: ";
    cin>>DonationPercentage;
    adultCollection=adultPrice*adultSold;
    childCollection=childPrice*childSold;
    totalEarning=adultCollection+childCollection;
    cout<<"The total earning is: "<<totalEarning;
    afterDonation = totalEarning - ((DonationPercentage / 100.0) * totalEarning);
    cout<<"\nAfter Donation, The Total Earnings are : "<<afterDonation;
    return 0;
}