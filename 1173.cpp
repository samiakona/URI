#include<iostream>
using namespace std;
int main()
{
    int N[10], i, k;
    cin >> k;
    for (i=0; i<10; i++)
    {
        N[i]=k;
        printf("N[%d] = %d\n",i,k);
        k=k+k;
    }
    return 0;
}
