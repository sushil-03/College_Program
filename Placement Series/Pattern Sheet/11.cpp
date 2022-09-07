
#include <iostream>
using namespace std;
int change(int x)
{
    return x == 1 ? 0 : 1;
}
int main()
{
    int n = 5;
    int startWith;
    for (int i = 1; i <= n; i++)
    {

        if (i & 1)
        {
            startWith = 1;
        }
        else
        {
            startWith = 0;
        }
        for (int l = 0; l < i; l++)
        {
            cout << startWith << " ";
            startWith = change(startWith);
        }
        cout << endl;
    }
}