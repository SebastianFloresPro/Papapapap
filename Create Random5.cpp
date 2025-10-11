#include <iostream>
#include <vector>
using namespace std;

void multi(int(*A)[3][3])
{
  int *a = &A[0][0][0]; 
  int *b = &A[1][0][0]; 
  int *c = &A[2][0][0]; 
  int *pa = a;
  int *pb = b;
  int *pc = c;

   for (int *rowA = a; rowA < a + 9; rowA += 3) {
        for (int col = 0; col < 3; ++col){
            for (int k = 0; k < 3; ++k) {
                *pc += *(rowA + k) * *(b + k * 3 + col);
            }
            ++pc;
        }
    }
 
}
int main()
{
  int array[3][3][3] = {
    { {1,4,5}, {4,5,6}, {1,7,8} },
    { {8,9,19}, {13,12,14}, {8,4,5} },
    { {0,0,0}, {0,0,0}, {0,0,0} } 
    };
  int(*e)[3][3]=array;
  multi(e);
  int *p = &array[2][0][0];
    for (int *q = p; q < p + 9; ++q)
  {
    cout << *q << (( (q - p + 1) % 3 == 0) ? "\n" : " ");
  }
}
