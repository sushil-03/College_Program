
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int startWith = 1;
    for (int i = 0; i < n; i++)
    {

        char ch = i + 65;
        for (int l = 0; l < i + 1; l++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}