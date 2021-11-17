#include<iostream>
using namespace std;

void insertion_sort(char a[],int size)
{
	int temp,j;
	for(int i=1;i<size;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	int count[26]={0},pos,max=1;
	for(int i=0;i<size;i++)
	{
		count[(int)a[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			pos=i;
		}
	}
	if(max!=1)
	{
		cout<<(char)('a'+pos)<<"-"<<max<<endl;
	}
	else
		cout<<"No Duplicates Present"<<endl;
}

int main()
{
	int n,size;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        	cin>>size;
        	char array[size];
        	for(int j=0;j<size;j++)
        	{
            		cin>>array[j];
        	}
		insertion_sort(array,size);
	}
}