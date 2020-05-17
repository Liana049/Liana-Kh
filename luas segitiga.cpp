#include <iostream>
using namespace std;

int main()
{
	float alas, tinggi;
	float luas;
	
	cout<<"masukkan alas = ";
	cin>>alas;
	cout<<"masukkan tinggi = ";
	cin>>tinggi;
	
	luas = (alas*tinggi) / 2;
	
	cout<<"luas segitiga = "<<luas;
	
	return 0;
	
}

