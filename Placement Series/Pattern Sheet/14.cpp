
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {

        for (int l = 0; l < i; l++)
        {
            char ch = l + 65;
            cout << ch << " ";
        }
        cout << endl;
    }
}