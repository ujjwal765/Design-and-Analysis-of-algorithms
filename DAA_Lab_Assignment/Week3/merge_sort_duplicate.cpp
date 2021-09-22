#include<iostream>
using namespace std;

void merge(int a[],int temp[],int l,int m,int r)
{
    int i=l;
    int j=m+1;
    int k=l;
    while(i<=m && j<=r)
    {
        if(a[i]<=a[j])
        {
           temp[k]=a[i];
           i++;
           k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    for(i=0;i<=r;i++)
    {
        a[i]=temp[i];
    }
}

void mergesort(int a[],int temp[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(a,temp,l,m);
        mergesort(a,temp,m+1,r);
        merge(a,temp,l,m,r);
    }

}

void find_duplicate(int a[],int size)
{
	int temp[size];
	mergesort(a,temp,0,size-1);
	int c=0;
	for(int i=0;i<size-1;i++)
	{
		if(a[i]==a[i+1])
		{
			c=1;
			break;
		}
	}
	if(c==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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
		find_duplicate(array,size);
	}
}
