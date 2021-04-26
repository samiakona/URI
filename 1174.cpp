#include<iostream>
using namespace std;
int main()
{
    double k[100];
    int i;
    for(i=0; i<100; i++)
    {
        scanf("%lf", &k[i]);
    }

    for(i=0; i<100; i++)
    {
        if(k[i]<=10.0)
            printf("A[%d] = %.1lf\n",i, k[i]);
    }

    return 0;
}
