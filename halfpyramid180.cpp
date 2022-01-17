#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    getch();
    return 0;
}