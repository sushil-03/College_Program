
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int l = n; l > i; l--)
        {
            cout << "  ";
        }
        int mid = k / 2;
        for (int l = 0; l < k; l++)
        {
            if (l <= mid)
            {
                char ch = l + 65;
                cout << ch << " ";
            }
            else
            {
                char ch = (k - l - 1) + 65;
                cout << ch << " ";
            }
        }
        k += 2;
        cout << endl;
    }
}