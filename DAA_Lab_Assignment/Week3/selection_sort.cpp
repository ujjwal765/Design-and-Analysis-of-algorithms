#include<iostream>
using namespace std;

void selection_sort(int a[],int size)
{
	int min_idx,temp,swap=0,cmp=0;;
	for(int i=0;i<size-1;i++)
	{
		min_idx=i;
		for(int j=i+1;j<size;j++)
		{
			cmp++;
			if(a[min_idx]>a[j])
				min_idx=j;
		}
		temp=a[i];
		a[i]=a[min_idx];
		a[min_idx]=temp;
		swap++;
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"comparisions = "<<cmp<<endl;
	cout<<"swaps = "<<swap<<endl;
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
		selection_sort(array,size);
	}
}
