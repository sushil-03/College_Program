
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int startWith;
    for (int i = 1; i <= n; i++)
    {

        for (int l = 1; l <= i; l++)
        {
            cout << l << " ";
        }
        int gap = ((n * 2) - (2 * i));
        for (int l = 0; l < gap; l++)
        {
            cout << "  ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}