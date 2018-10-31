#include<iostream>
using namespace std;
int main(){
int uang=100000;
int baju=25000;
int celana=30000;
int ojek=15000;
int Hasil;
if (uang>baju){
	cout<<"Uang cukup"<<endl;
	Hasil=uang-baju;
	cout<<"Sisa uang "<<Hasil<<endl;
	if (Hasil>celana*2){
		cout<<"celana dapat terbeli"<<endl;
		int sisa=Hasil-celana*2;
		cout<<"Sisa uang "<<sisa<<endl;
		if (sisa>=ojek){
			cout<<"Cukup"<<endl;
			int Jumlah=sisa-ojek;
			cout<<"Jumlah uang tersisa "<<Jumlah<<endl;
		}
	}
	}
}
