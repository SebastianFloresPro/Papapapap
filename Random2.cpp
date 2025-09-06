#include <iostream>
using namespace std;

void cocktail_sort(int* p, int* q)
{
    while (p < q)
    {
        for (int* i = p; i < q; i++)
            if (*i > *(i+1)) {
                int t = *i;
                *i = *(i+1);
                *(i+1) = t;
            }
        q--;
        for (int* i = q; i > p; i--)
            if (*(i-1) > *i) {
                int t = *(i-1);
                *(i-1) = *i;
                *i = t;
            }
        p++;
    }
}
void print(int* p, int* q)
{
    while (p <= q) {
        cout << *p << " ";
        p++;
    }
    cout << "\n";
}

int main()
{
    int A[12]{3,25,16,24,26,18,19,3,4,5,8,27};
    cocktail_sort(A , A+11);
    print(A, A+11);
}
