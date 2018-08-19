/*
This code is Written by Shankhadeep Dey
(15th Aug 2018)
*/
#include<iostream>
using namespace std;
int main()
{
	int a[30],i,n,j,key=0,temp;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	i=0;
	while(i<n)
	{
		key=a[i];
		for(j=i;j<n;++j){
			//to make this in Increasing order just make (a[j]>key) to (a[j]<key)
			if (a[j]>key)
				key=a[j];
				temp=a[i];
				a[i]=key;
				a[j]=temp;
			}
		i++;
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}