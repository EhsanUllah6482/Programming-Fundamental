#include <iostream>
using namespace std;
void tpChecker(int people,int tp)
{
    int sheetNeeded=people*14*57;
    int totalSheets=500*tp;
    if (totalSheets<sheetNeeded)
    {
        int dayOutTP=totalSheets/(people*57);
        cout << "Your TP will only last " << dayOutTP << " days, buy more!\n";
    }
    if (totalSheets>sheetNeeded)
    {
        int dayOutTP=totalSheets/(people*57);
        cout << "Your TP will last " << dayOutTP << " days, no need to panic!\n";
    }


}
int main()
{
    int people;
    int tp;
    cout<<"Enter people: ";
    cin>>people;
    cout<<"Enter number of rolls: ";
    cin>>tp;
    tpChecker(people,tp);
    return 0;
}