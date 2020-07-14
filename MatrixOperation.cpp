#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include"MatrixMultiplication.h"
#include"Initialization.h"
#include"PrintToFile.h"
#include<time.h>

void MatrixDefination_Banded(double **Matrix,int n,int Bandwidth)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*Bandwidth-1);j++)
		{
			if(i>Bandwidth-j-2)
			{
				Matrix[i][j]=(double)j+1;
			}
			if(i<n-Bandwidth-j-1)
			{
				Matrix[i][2*Bandwidth-2-j]=(double)j+1;
			}
	    }
	}
}

void MatrixDefination(double **Matrix2,int m,int Bandwidth)
{
	int i,j,k;
		for(i=0;i<m;i++)
	{
		Matrix2[i][i]=Bandwidth;
		if (i<=m-Bandwidth)
		{
			k=Bandwidth;
		}
		else {
			k=m-i;
		}
		for(j=1;j<k;j++)
		{
			Matrix2[i][i+j]=Bandwidth-j;
			Matrix2[i+j][i]=Bandwidth-j;
		}
	
	
	}
}

double Dotproduct(double *a,double *b,int n)
{
	double temp=0.0;
	for(int i=0;i<n;i++)
	{
		temp += a[i]*b[i];
	}
	return temp;
}

void ConjugateGradient(double **Matrix,int n,double *b,double error0)
{
	double *r,*p,*Arraytemp,*r_new,*x;
	double error,alpha,beta;
	int i,k;
	char *Directory1;
	Directory1="C:\\Users\\Crystal\\Desktop\\Array.txt";


	r=(double*)malloc(n*sizeof(double));
	r_new=(double*)malloc(n*sizeof(double));
	p=(double*)malloc(n*sizeof(double));
	Arraytemp=(double*)malloc(n*sizeof(double));
	x=(double*)malloc(n*sizeof(double));

	InitializeArray(x,n,0.0);
	InitializeArray(r_new,n,0.0);
	InitializeArray(r,n,0.0);
	InitializeArray(p,n,0.0);
	InitializeArray(Arraytemp,n,0.0);
	MatrixMutiplication(Matrix,n,n,x,Arraytemp);

	for(i=0;i<n;i++)
	{
		r[i]=b[i]-Arraytemp[i];//r0
		p[i]=r[i];//p0
	}
	k=0;
	error=sqrt(Dotproduct(r,r,n));

	int START_CLOCK,END_CLOCK;
	double Iter_Running_Time,Total_Running_Time=0.0;
	while(error > error0)
	{
		START_CLOCK = clock();
		MatrixMutiplication(Matrix,n,n,p,Arraytemp);
		alpha=Dotproduct(r,r,n)/Dotproduct(p,Arraytemp,n);
		for(i=0;i<n;i++)
		{
			x[i]+=x[i]+alpha*p[i];
			r_new[i]=r[i]-alpha*Arraytemp[i];
		}
		error=sqrt(Dotproduct(r_new,r_new,n));
		beta=Dotproduct(r_new,r_new,n)/Dotproduct(r,r,n);
		for(i=0;i<n;i++)
		{
			p[i]=r_new[i]+beta*p[i];
			r[i]=r_new[i];
		}
		END_CLOCK = clock();
		Iter_Running_Time=(double)(END_CLOCK - START_CLOCK)/CLOCKS_PER_SEC;
		Total_Running_Time+=Iter_Running_Time;
		printf("Iteration number = %d,error =%12E,Itertation time = %12.6lf, Total time=%12.6lf\n",k,error,Iter_Running_Time,Total_Running_Time);
		k++;
	}
	    //PrintArray(x,Directory1,"x",n);
		system("pause");
}