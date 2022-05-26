
#include <iostream>
using namespace std;
 
struct hcn
{
	long long a;
	long long b;
} typedef hcn;
 
int sinh3[]={1, 2, 3};
 
int sinh ()
{
	int vt=-1;
	for (int i=2; i>=1; i--)
	{
		if (sinh3[i]>sinh3[i-1])
		{
			vt=i-1;
			break;
		}
	}
	if (vt!=-1)
	{
		for (int i=2; i>=0; i--)
		{
			if (sinh3[i]>sinh3[vt])
			{
				int tg=sinh3[i];
				sinh3[i]=sinh3[vt];
				sinh3[vt]=tg;
				break;
			}
		}
		for (int i=vt+1; i<3; i++)
		{
			for (int j=vt+1; j<2; j++)
			{
				if (sinh3[j]>sinh3[j+1])
				{
					int tg=sinh3[j];
					sinh3[j]=sinh3[j+1];
					sinh3[j+1]=tg;
				}
			}
		}
		return 1;
	}
	else return 0;
}
 
int main ()
{
	//IN;
	hcn re[3];	//re: rectangle
	for (int i=0; i<3; i++)
	{
		cin>>re[i].a>>re[i].b;
	}
	//OUT;
	//Sap xep cac canh;
	for (int i=0; i<3; i++)
	{
		if (re[i].a>re[i].b)
		{
			int tg=re[i].b;
			re[i].b=re[i].a;
			re[i].a=tg;
		}
	}
	//TH1: 3 hcn chong nhau;
	if (re[0].b==re[1].b && re[1].b==re[2].b && re[0].a+re[1].a+re[2].a==re[0].b)
	{
		cout<<re[0].b;
		return 0;
	}
	//TH2: 2 cap + 1 nen
	hcn vt[4];
	while (1)
	{
		for (int i=0; i<3; i++)
		{
			vt[sinh3[i]].a=re[i].a;
			vt[sinh3[i]].b=re[i].b;
		}
		for (int i=1; i<=2; i++)
		{
			long long a1, b1;
			if (i==1)
			{
				a1=vt[1].a;
				b1=vt[1].b;
			}
			else
			{
				a1=vt[1].b;
				b1=vt[1].a;
			}
			for (int j=1; j<=2; j++)
			{
				long long a2, b2;
				if (j==1)
				{
					a2=vt[2].a;
					b2=vt[2].b;
				}
				else
				{
					a2=vt[2].b;
					b2=vt[2].a;
				}
				for (int k=1; k<=2; k++)
				{
					long long a3, b3;
					if (k==1)
					{
						a3=vt[3].a;
						b3=vt[3].b;
					}
					else
					{
						a3=vt[3].b;
						b3=vt[3].a;
					}
 
					if (a1+a2==a3 && b1==b2 && b2+b3==a3)
					{
						cout<<a3;
						return 0;
					}
				}
			}
		}
		if (sinh()==0) break;
	}
	cout<<"0";
	return 0;
}
