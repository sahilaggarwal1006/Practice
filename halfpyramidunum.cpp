#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    int count=1;
    cout << "Enter n";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << count;
            count++;
        }
        
        cout << endl;
    }
    getch();
    return 0;
}