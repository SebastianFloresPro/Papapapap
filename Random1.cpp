#include <iostream>
using namespace std;


void merge(int*p , int*q)
{
    int* R= q+5;
    int* qinit = q;

    while(p<q)
    {
        int* tempq=qinit;

        while(tempq<R)
        {
            if(*p>*tempq)
            {
                int temp = *tempq;
                *tempq=*p;
                *p=temp;
                
                int* mover = tempq;
                while (mover+1 < R && *mover > *(mover+1))
                {
                    int t = *mover;
                    *mover = *(mover+1);
                    *(mover+1) = t;
                    mover++;
                }
           
            }
            tempq++;
        }
        p++;

    }
}
void print(int*p , int*q)
{
    
    while(p<q)
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<"\n";
}
int main()
{
    int A[10]{2,8,26,30,42,3,7,21,35,70};
    merge(A , A+5);
    print(A , A+10);
}
