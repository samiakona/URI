#include<iostream>
using namespace std;
int main ()
{
    int i, k, T;
    long long int N[60];
    N[0]=0;
    N[1]=1;
    for (i=2; i<61; i++)
    {
        N[i]=N[i-1]+N[i-2];
    }
    cin>> T;
    for(i=0; i<T; i++)
    {
        cin>> k;
        printf("Fib(%d) = %lld\n",k, N[k]);
    }
    return 0;
}
