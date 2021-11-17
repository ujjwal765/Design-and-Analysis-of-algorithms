#include<iostream>
#include<algorithm>
using namespace std;


void find_sumPair(int A[],int n,int K)
 { 
    sort(A,A+n);
    int i = 0;
    int j = n -1;
    int c=0;
    while(i<j)
    {
       if(A[i] + A[j] == K)
	{
         cout<<A[i]<<" "<<A[j]<<", ";
	 c++;
	}
       if(A[i] + A[j] < K)
         i = i+1;
       else
         j = j-1;
    } 
	cout<<endl;
	if(c==0)
		cout<<"No Such Pair Exist"<<endl;
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
		int K;
		cin>>K;
		find_sumPair(array,size,K);
	}
}