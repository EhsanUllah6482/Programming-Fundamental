#include <iostream>
using namespace std;
void vote(int age)
{
    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;   
    }
    if(age<18)
    {

    cout << "You are not eligible to vote.";
    }
}
int main()
{
    int age;
    cout << "Entet your age: ";
    cin >> age;
    vote(age);
    return 0;
}