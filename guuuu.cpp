/*Реализуйте вычисление значения полинома в точке посредством схемы Горнера
*/

#include <iostream>
using namespace std;
int main()
{
    unsigned long long int P, x;
    cin >> P >> x;
    long long int* a = new long long int[P + 1];
    for (unsigned long long int i = 0; i < P + 1; i++)
    {
        cin >> a[i];
    };

    long long int b = a[P];
    for (unsigned long long int i = P - 1; i >= 1; i--)
        b = a[i] + b * x;
    cout << a[0] + b * x;
    return 0;
}
