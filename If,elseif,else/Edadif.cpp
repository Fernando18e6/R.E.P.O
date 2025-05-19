#include <iostream>
using namespace std;

int main()
{
    // The variables are declared.
    int age;

    // Age is requested.
    cout << "Put your age. ";
    cin >> age;

    // It is checked whether they are underage or of legal age.
    if (age < 18)
    {
        cout << "You are a minor.";
    }
    else
        cout << "You are of legal age. ";

    return 0;
}