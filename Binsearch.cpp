#include<iostream>
#include<conio.h>
#include<stdlib.h>
int main()
{
	using namespace std;
	int n, i, arr[50], cari, awal, akhir, tengah;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Masukkan jumlah data :";
	cin>>n;
	for (int i=0; i<n; i++)
		{
		cout<<"Data ke-"<<i+1<<" : ";
		cin>>arr[i];
		}
	cout<<"Masukkan data yang dicari : ";
	cin>>cari;
	awal = 0;
	akhir = n-1;
	tengah = (awal+akhir)/2;
	while (awal <= akhir)
	{
		if(arr[tengah] < cari)
		{
			awal = tengah + 1;

		}
		else if(arr[tengah] == cari)
		{
			cout<<cari<<" Ditemukan pada urutan ke : "<<tengah+1<<"\n";
			break;
		}
		else
		{
			 akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}
	if(awal > akhir)
	{
		cout<<"-------------------------------------------------"<<endl;
		cout<<"Data tidak dapat ditemukan! "<<cari<<"Tidak ada di urutan data.";
	}
	return 0;
	getch();
}
