#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    getch();
    return 0;
}