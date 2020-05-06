//1. Buatlah program sederhana dalam bahasa c++ untuk menghitung deret S = 2+4+6+8+10 menggunakan function rekursi

#include <iostream>
using namespace std;

int s (int genap);
int main(){
	int genap;
	cout<<"Input deret S urutan ke-n = ";
	cin>>genap;
	
	cout<<"Deret S = 2 4 6 8 10"<<endl;
	cout<<"Jumlah total deret S = "<<s(genap);
}

int s (int genap){
	if (genap == 1){
		return (2);
	}
	else{
		return (2 * genap + s (genap - 1));
	}
}
