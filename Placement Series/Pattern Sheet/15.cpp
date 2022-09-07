
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int startWith = 1;
    for (int i = n; i > 0; i--)
    {

        for (int l = 0; l < i; l++)
        {
            char ch = l + 65;
            cout << ch << " ";
        }
        cout << endl;
    }
}