//4. Buatlah program sederhana dalam bahasa c++ penerapan algoritma rekursif pada kasus faktorial

#include <iostream>
using namespace std;

int faktorial (int n);
int main(){
	int n;
	cout<<"Input angka yang akan difaktorialkan = ";
	cin>>n;
	cout<<"Jumlah faktorialnya = "<<faktorial(n);
}
 
int faktorial (int n){
	if ( n == 0 )
	return 1;
	return n * faktorial(n-1);
}
