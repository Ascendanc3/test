#include <iostream>
using namespace std;

int main() 
{
	int bdi, berat, tinggi, hasil;
	
	cout<<"Masukan Tinggi Anda: ";
	cin>>tinggi;
	
	cout<<"Masukan Berat Anda: ";
	cin>>berat;

	bdi = tinggi - 102;
	
	if (berat == bdi)
	{
		cout<<"Berat Badan Anda Ideal "<<endl;
	}
	
	else if ( berat > bdi)
	{
		hasil = berat - bdi;
		cout<<"Berat Badan ideal anda = "<<bdi
		<<endl;
		cout<<"Perlu Mengurangi berat sebesar "<<hasil<<"KG"<<endl;
	}
	
	else if ( berat < bdi)
	{
		hasil = bdi - berat;
		cout<<"Berat Badan ideal anda : "<<bdi<<endl;
		cout<<"Perlu Menambahkan berat sebesar "<<hasil<<"KG"<<endl;
	}

}
		
	