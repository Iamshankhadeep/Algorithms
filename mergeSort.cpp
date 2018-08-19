/*
This code is Written by Shankhadeep Dey
(15th Aug 2018)
*/
#include<iostream>
using namespace std;
void merge(int a[],int r,int q,int p)
{
	int n1,n2,j,i,k;
	n1= q-r+1;
	n2= p-q;
	int L[n1+1],R[n2+1];
	for (i = 0; i <n1; i++)
		L[i]=a[r+i];
	for (j = 0; j < n2; j++)
		R[j]=a[q+j+1];
	L[n1]=9999;
	R[n2]=9999;
	i=0;
	j=0;
	for (k = r; k <= p; k++)
	{
		if (L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
	/*while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
 
    Copy the remaining elements of R[], if there
       are any 
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }*/
}
void mergeSort(int a[],int r,int p)
{
	int q;
	if (r<p)
	{
		q= (p+r)/2;
		mergeSort(a,r,q);
		mergeSort(a,q+1,p);
		merge(a,r,q,p);
	}
}
int main()
{	//According to algorithm the started position of array is 1
	int w[5]={10,4,3,21,5};
	mergeSort(w,0,4);
	for (int i = 0; i < 5; ++i)
	{
		cout<<w[i]<<" ";
	}
	cout<<endl;
}