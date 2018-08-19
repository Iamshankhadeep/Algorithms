/*
This code is Written by Shankhadeep Dey
(18th Aug 2018)
*/
#include<iostream>
using namespace std;
int a[10],n;
void maxHeapify(int i)
{
	int left,right,large,temp;
	left=2*i;
	right=left+1;
	large=i;
	if((a[left]>a[i]) && (left<=n))
		large=left;
	if((a[right]>a[large]) && (right<=n))
		large=right;
	if(i!=large)
	{
		temp=a[large];
		a[large]=a[i];
		a[i]=temp;
		maxHeapify(large);
	}

}
void buildMaxHeap()
{
	for (int i = n/2; i >=1; --i)
	{
		maxHeapify(i);
	}
}
void heapsort()
{
	int temp;
	buildMaxHeap();
	for (int i = n; i >=2; i--)
	{
		temp=a[i];
		a[i]=a[1];
		a[1]=temp;
		--n;
		maxHeapify(1);
	}
}
int main()
{	//According to algorithm the started position of array is 1
	int nh;
	cin>>n;
	nh=n;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	//={10,4,3,21,5};
	heapsort();
	for (int i = 1; i <= nh; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}