/*
This code is Written by Shankhadeep Dey
(15th Aug 2018)
*/
#include<iostream>
using namespace std;
int main()
{
	int a[30],n,j,key;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 1; i < n; ++i)
	{
		key=a[i];
		j=i-1;
		//To make this sort in increasing order Just make (a[j]<key) to (a[j]>key)
		while ((j>=0)and(a[j]<key))
		{
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=key;
		//for loop to check whats happeing after each iteration
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	/*for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;*/
}