#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	string star;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		
	}
	
	
	for(int i=0; i<n; i++)
	{
	
		for(int j=0; j<arr[i]; j++){
		cout<<i<<": "<<star<<endl;
			star= "*";
		}
		
		
	}
	
}
