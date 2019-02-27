#include <iostream>

using namespace std;

int main()
{
    int x,n[20],y;
    n[0]=0;
    n[1]=1;
    cout<<"Deret Fibonacci\n";
    cout<<"Masukkan nilai : ";
    cin>>y;
    cout<<endl;


    for(x=2; x<y; x++)
    {
        n[x]=n[x-2]+n[x-1];
    }

    cout<<"Bilangannya adalah: ";
    for (x=0; x<y; x++)
    {
        cout << n[x] << " ";
    }
    cout <<endl;
    return 0;
}
