
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int k = 1;
    for (int i = n; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            cout << "  ";
        }

        for (int l = 0; l < k; l++)
        {
            cout << '*' << " ";
        }
        k += 2;
        cout << endl;
    }
}