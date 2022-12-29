#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);

}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int sumOfPositive(int* a, const int size)
{
    int i, z = 0;
    for (i = 0; i < size; i++) {
        if (a[i] > 0) {
            z += a[i];
        }
    }
    return z;
}
template <typename F> 
F sumOfPositiveTemplete(F* a, const int size)
{
    F z = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0) {
            z += a[i];
        }
    }
    return z;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int Low = -10;
    int High = 10;
    Create(a, n, Low, High);
    Print(a, n);
    cout << "  " << "Sum = " << sumOfPositive(a, n) << endl;
    cout << "  " << "Sum Template = " << sumOfPositiveTemplete(a, n) << endl;
    return 0;
}
