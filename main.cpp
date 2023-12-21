#include <iostream>
#include <iomanip>

using namespace std;

int Add2Values(int, int);

int main()
{
    int x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    cout << "\nEnter y Value: ";
    cin >> y;

    cout << "\n__________________\n";

    cout 
        << setprecision(1)
        << "= " << Add2Values(x, y);

    return 0;
}

int Add2Values(int x, int y)
{
    Add2Values = x+y;
}
