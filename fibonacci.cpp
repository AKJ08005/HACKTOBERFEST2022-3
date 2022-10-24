//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int t1 = 0, t2 = 1, nextTerm = 0, n;
//
//     cout << "Enter a positive number: ";
//     cin >> n;
//
//     // displays the first two terms which is always 0 and 1
//     cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
//
//     nextTerm = t1 + t2;
//
//     while(nextTerm <= n) {
//         cout << nextTerm << ", ";
//         t1 = t2;
//         t2 = nextTerm;
//         nextTerm = t1 + t2;
//     }
//     return 0;
// }

/* Floyd triangle and pyramid*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, a = 1;

    cout << "Enter the rows of Floyd triangle: "; cin >> n;

    for (i = 1; i <= n; i++) // Outer for loop is always used to change the lines
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}
