#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char a[9][9];
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(i>j && i+j+1>9)
            {
                a[i][j]='<';
            }
            else
            {
                a[i][j]='>';
            }
        }
    }
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
