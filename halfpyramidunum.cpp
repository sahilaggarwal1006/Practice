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
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        
        cout << endl;
    }
    getch();
    return 0;
}