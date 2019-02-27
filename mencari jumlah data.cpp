#include <iostream>

using namespace std;

int main ()
{
    int data[10] = {21,22,13,22,26,21,22,15,18,13};
    int mencari,jumlah=0;
    int x,y ;
    int dex[10];

    cout << "Masukan Data yang  dicari : ";
    cin >> mencari;

    for (int x=0; x<10; x++)
    {
        if (data[x] == mencari)
        {
            dex[jumlah]=x;
            jumlah=jumlah+1;

        }
    }
    cout << "Jumlah data : "<<jumlah<<endl;
    cout << "Indeks ke - ";

    for (int y=0; y<jumlah ; y++)
    {
            cout << dex[y]<<" ";
    }
    return 0;
}
