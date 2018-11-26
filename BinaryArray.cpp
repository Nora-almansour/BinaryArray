//  Nora Al-Mansour //
#include<iostream>
using namespace std;
int array_1[5];
int array_2[5];
int sum_1[5];
int m=0;
int carry[5];
void Read (int x, int z);
void outing (int sum);
int main ()
{
Read(0,0);
outing (0);
return 0;
}

void Read (int x, int z)
{
	cout<<" Enter five binary digits , after each digit press enter : \n";
	for (int i=0;i<5;i++)
	{
		cin>>x;
		while (x!=0 && x!=1)
		{		cout<<" Please type a binary digit , 0 or 1 only : \n";
		cin>>x;
		}
		array_1[i]=x;
	}
	cout<<" Enter five binary digits , after each digit press enter : \n";
	for (int i=0;i<5;i++)
	{
		cin>>z;
		
		while (z!=0 && z!=1)
		{		cout<<" Please type a binary digit , 0 or 1 only \n";
		cin>>z;
		}
		array_2[i]=z;
	}

}
void outing (int sum)
{
	for (int k=4;k>=0;k--)
	{
		sum=m+array_1[k]+array_2[k];
		switch (sum)
		{
		case 0:
			sum_1[k]=0;
			carry[k]=0;
			m=0;
			break;
		case 1:
			sum_1[k]=1;
			carry[k]=0;
			m=0;
			break;
		case 2:
			sum_1[k]=0;
			carry[k]=1;
			m=1;
			break;
		case 3:
			sum_1[k]=1;
			carry[k]=1;
			m=1;
			break;
		}
	}
		cout<<" The sum of : ";
		for (int t=0;t<5;t++)
		{
			cout<<array_1[t];
		}
		cout<< " + " ;
		for (int p=0;p<5;p++)
		{
			cout<< array_2[p] ;
		}
		cout<<" = ";
		for (int b=0;b<5;b++)
		{
			cout<<sum_1[b];
		}
		cout<<endl<<" The final carry  = " << m <<endl;
