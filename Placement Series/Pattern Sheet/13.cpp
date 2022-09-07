
#include <iostream>
using namespace std;
int change(int x)
{
    return x == 1 ? 0 : 1;
}
int main()
{
    int n = 5;
    int startWith = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int l = 0; l < i; l++)
        {
            cout << startWith << " ";
            startWith++;
        }
        cout << endl;
    }
}