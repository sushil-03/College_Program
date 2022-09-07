
#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int gap = n * 2 - 2;

    for (int i = n - 1; i >= 0; i--)
    {

        for (int l = 0; l < n - i; l++)
        {
            cout << '*' << " ";
        }
        for (int l = 0; l < gap; l++)
        {
            cout << "  ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << '*' << " ";
        }
        gap -= 2;
        cout << endl;
    }
    gap += 4;
    for (int i = 1; i < n; i++)
    {

        for (int l = 0; l < n - i; l++)
        {
            cout << '*' << " ";
        }
        for (int l = 0; l < gap; l++)
        {
            cout << "  ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << '*' << " ";
        }
        gap += 2;
        cout << endl;
    }
}