#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    int r = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            cout << "*";
        }
        r--;
        cout << endl;
    }
    getch();
    return 0;
}