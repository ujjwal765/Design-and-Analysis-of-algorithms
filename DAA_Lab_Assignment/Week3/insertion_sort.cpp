#include<iostream>
using namespace std;

void insertion_sort(int a[],int size)
{
	int temp,j,shift=0,cmp=0;;
	for(int i=1;i<size;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			shift++;
			cmp++;
			j--;
		}
		a[j+1]=temp;
		shift++;
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"comparisions = "<<cmp<<endl;
	cout<<"shift = "<<shift<<endl;
}

int main()
{
	int n,size;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        	cin>>size;
        	int array[size];
        	for(int j=0;j<size;j++)
        	{
            		cin>>array[j];
        	}
		insertion_sort(array,size);
	}
}
