#include<iostream>
using namespace std;

int main()
{
    int guests, chairs, arrangements;
    arrangements = 1;

    cout << "Please enter number of chairs: ";
    cin >> chairs;

    cout << "Please enter number of guests: ";
    cin >> guests;

    for (int j = 0; j < chairs; j++)
        {
        arrangements *= guests - j;
        }

    cout <<"\nPossible Arangements : "<< arrangements << "\n";
    return 0;
}
