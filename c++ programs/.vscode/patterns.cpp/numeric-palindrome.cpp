#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int start = 0;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }

        for (int col = 1; col < row + 2; col++)
        {
            start = start + 1;
            cout <<" "<< start;
        }
        for (int col = 1; col < row + 1; col++)
        {
           start = start + 1;
            cout << " " <<start ;
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}