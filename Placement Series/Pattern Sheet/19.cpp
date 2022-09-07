
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int gap = 0;
    for (int i = 0; i < n; i++)
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
    gap -= 2;
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
}