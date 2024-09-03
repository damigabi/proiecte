#include <iostream>
using namespace std;
int main()
{
    int i, j, a[5][5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
           if(i<j)
           {
               a[i][j]=i*2;
           }
           else
           {
               a[i][j]=j*2;
           }
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
