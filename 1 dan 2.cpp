#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
char kodebuku [10],namabuku [20],tahunterbit [10],pengarangbuku [20],hargabuku [10] ;
	
};
Buku buku[5];

int a,b;

void input()
{
	cout<<"masukkan jumlah buku : ";
	cin>>a;
	for (b=0;b<a;b++)
	{
		cout<<"Buku Ke-"<<b+1<<endl<<endl;
		cout<<"Kode Buku\t:";
		cin>>buku[b].kodebuku;
		cout<<"Nama Buku\t:";
		cin>>buku[b].namabuku;
		cout<<"Tahun Terbit\t:";
		cin>>buku[b].tahunterbit;
		cout<<"Pengarang Buku\t:";
		cin>>buku[b].pengarangbuku;
		cout<<"Harga Buku\t:";
		cin>>buku[b].hargabuku;
	}
	system("cls");
}

void Show ()

{
	cout<<"KodeBuku\tNamaBuku\tTahunTerbit\tPengarangBuku\tHargaBuku\t"<<endl<<endl;
	
	for (b=0;b<a;b++)
	{
		cout<<b;
		cout<<buku[b].kodebuku<<"\t"<<buku[b].namabuku<<"\t"<<buku[b].tahunterbit<<"\t"<<buku[b].pengarangbuku<<buku[b].hargabuku<<endl;
	}
}

void Delete ()
{
	int x,y;
	cout<<"Hapus Data Buku ke-";
	cin>>x;
	x=x-1;
	b--;
	for(y=x;y<x;y++)
	{
		buku[b]=buku[b-1];
	}
	a=a-1;
	cout<<"\t\t\tData Buku Berhasil Terhapus"<<endl;
	getch();system("cls");
}
void Edit()
{
	int x;
	cout<<"Edit data Buku ke-";
	cin>>x;
	x=x-1;
	cout<<"Kode Buku\t:";
	cin>>buku[x].kodebuku;
	cout<<"Nama Buku\t:";
	cin>>buku[x].namabuku;
	cout<<"Tahun terbit\t";
	cin>>buku[x].tahunterbit;
	cout<<"Pengarang Buku\t";
	cin>>buku[x].pengarangbuku;
	cout<<"Harga Buku\t";
	cin>>buku[x].hargabuku;
	
	Show();
	
	system("cls");
}

int main()
{
	int pilihan;
	
	while (pilihan!=5)
	{
		cout<<"1. Masukan Data Buku"<<endl;
		cout<<"2. Edit Data Buku"<<endl;
		cout<<"3. Hapus Data Buku"<<endl;
		cout<<"4. Tampilkan Data Buku"<<endl;
		cout<<"5. Keluar"<<endl<<endl;
		cin>>pilihan;
		system("cls");
		
		if (pilihan == 1)
		{
			input();
		}
		
		 else if (pilihan == 2)
		 {
			Edit();
		 }
		 
		 else if (pilihan == 3)
		 {
		 	Delete();
		 }
		 
		 else if (pilihan == 4)
		 {
		 	Show();
		 }
		 else if (pilihan == 5)
		 {
		 	return 0;
		 }
		else
		{
			cout<< "Pilihan 0";
		}
		
	}
}
