
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int len = n + n - 1;

    for (int i = 0; i < len; i++)
    {
        int k = n + 1;
        for (int j = 0; j < len; j++)
        {

            if (j <= i && len - i > j)
            {
                k--;
            }
            else if (len - i <= j && j > i)
            {
                k++;
            }
            cout << k << " ";
        }
        cout << endl;
    }
}