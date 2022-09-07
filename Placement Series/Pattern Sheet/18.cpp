
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int startWith = 1;
    for (int i = n - 1; i >= 0; i--)
    {

        for (int l = i; l < n; l++)
        {
            char ch = l + 65;
            cout << ch << " ";
        }
        cout << endl;
    }
}