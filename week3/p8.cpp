#include <iostream>
using namespace std;
int main()
{
    float vegetablePrice,fruitPrice,TotalEarning;
    int TotalVege,TotalFruits;
    cout<<"Vegetable price per kilogram: ";
    cin>>vegetablePrice;
    cout<<"Fruit price per kilogram: ";
    cin>>fruitPrice;
    cout<<"Total Kgs of vegetables: ";
    cin>>TotalVege;
    cout<<"Total Kgs of fruits: ";
    cin>>TotalFruits;
    TotalEarning=((vegetablePrice*TotalVege)+(fruitPrice*TotalFruits))/1.94;
    cout<<"\nThe total earning is Rs."<<TotalEarning<<endl;
    return 0;
}