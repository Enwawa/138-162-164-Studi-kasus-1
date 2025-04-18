#include <iostream>
using namespace std;

float promo(int diskon){
	return diskon * 0.1;
}

int main(){
	
	int pesan,inputGoreng=0,inputBakar=0,jumlahGoreng=0,jumlahBakar=0,totalHargaGoreng=0,totalHargaBakar=0;
	float totalSemua=0;
	char tambah;
	ulang:
	cout <<"KEDAI AYAM KOTA X" << endl;
	cout <<"1. Ayam Goreng | Rp17.000" << endl;
	cout <<"2. Ayam Bakar  | Rp21.000" << endl;
	cout <<"SPECIAL PROMO: diskon 10% untuk pembelian dengan total diatas Rp45.000" << endl << endl;
	do{
	cout <<"Pesan menu(1/2): " ; 
	cin >> pesan;
	
	switch(pesan){
		case 1:
			cout <<"Masukkan banyak Ayam Goreng yang ingin dipesan: ";
			cin >> inputGoreng;
			jumlahGoreng+=inputGoreng;
			totalHargaGoreng+=inputGoreng * 17000;
			break;
		case 2:
			cout <<"Masukkan banyak Ayam Bakar yang ingin dipesan: ";
			cin >> inputBakar;
			jumlahBakar+=inputBakar;
			totalHargaBakar+=inputBakar * 21000;
			break;
		default:
			cout <<"ERROR : Input yang anda masukkan invalid!" << endl << endl ;
			goto ulang;
			break;
	}
		cout <<"Apakah ingin menambah pesanan?(y/n): ";
		cin >> tambah;
		
	}
	while(tambah=='Y' || tambah=='y');
	
	totalSemua = totalHargaGoreng + totalHargaBakar;
	system("cls");
	cout <<"----------KEDAI AYAM KOTA X----------" << endl;
	cout <<"| Ayam Goreng \t\t: " << jumlahGoreng << " x Rp17.000 = "  << "Rp" << totalHargaGoreng << endl;
	cout <<"| Ayam Bakar \t\t: " << jumlahBakar << " x Rp21.000 = "  << "Rp" << totalHargaBakar << endl;
	if(totalSemua>=45000){
		cout <<"| Diskon Promo 10% \t: " << totalSemua << " x 10%  = " << "Rp" << promo(totalSemua) << endl;
		cout <<"| Total Harga \t\t: " << totalSemua << " - " << promo(totalSemua) << " = " << totalSemua - promo(totalSemua) << endl;
	}
	else{
		cout <<"| Total Harga \t\t: " << "Rp" << totalSemua << endl;
	}
	cout << "\nTerima kasih sudah memesan, mohon menunggu pesanan anda :)" << endl;
}
