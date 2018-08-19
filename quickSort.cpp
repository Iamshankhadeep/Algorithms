#include<iostream>
using namespace std;
int partition(int a[],int r,int p)
{
	int j,i,k,temp,pivot;
	pivot=a[p];
	i=r-1;
	for(j=r;j<=p-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[p];
	a[p]=temp;
	return i+1;
}
void quickSort(int a[],int r,int p)
{
	int q;
	if (r<p)
	{
		q= partition(a,r,p);
		quickSort(a,r,q-1);
		quickSort(a,q+1,p);
	}
}
int main()
{	//According to algorithm the started position of array is 1
	int w[10],nnn;
	cin>>nnn;
	for (int i = 1; i <= nnn; ++i)
	{
		cin>>w[i];
	}
	//={10,4,3,21,5};
	quickSort(w,1,nnn);
	for (int i = 1; i <= nnn; ++i)
	{
		cout<<w[i]<<" ";
	}
	cout<<endl;
}