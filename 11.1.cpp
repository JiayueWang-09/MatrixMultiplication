// 11.1.cpp : 定义控制台应用程序的入口点。
//
#include"Initialization.h"
#include <stdio.h>
#include <stdlib.h>
#include"PrintToFile.h"
#include"MatrixOperation.h"
#include"MatrixMultiplication.h"
#include<math.h>
int main(int argc,char *argv[])
{	

	//************基本变量***********//
	////声明//
	//char *aaa = "hahahaha";
	//char *bbb = "国庆节！";
	//double pi = 3.14159265358;
	//int c = 10;
	//int i,j;
	//FILE *fp;
	////fp = fopen("C:\\Users\\Crystal\\Desktop\\file.txt", "w+");
	//errno_t err;
	//err = fopen_s(&fp, "C:\\Users\\Crystal\\Desktop\\File.txt", "w+");


	//for (i = 0; i < 5; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%16.11lf    %16.11lf    %-16.11lf\n",(double)i, (double)j,0);
	//	   fprintf(fp, "%16.11lf    %16.11lf    %-16.11lf\n",(double)i, (double)j,0);
	//	}
	//	

	//}
	//fclose(fp);

	//printf("Hello World.\n\n");
	//printf("%s, %s\n\n",aaa,bbb);
	//printf("%-16.11lf,%16.11lf\n",pi,pi);
	//printf("%f,%20e\n",pi,pi);
	//printf("%d,%10d\n",c,c);

	////************静态数组***********//
	////声明//

	//int Array1[10];
	//float Array2[10];
	//double Array3[10];
	////初始化//
	//for(i=0;i<10;i++)
	//{
	//	Array1[i] = 0;
	//	Array2[i] = 0.0;
	//	Array3[i] = (double)i;
	//}
	////声明//
	//double Matrix[5][5];
	////初始化//
	//for(i=0;i<5;i++)
	//{
	//	for(j=0;j<5;j++)
	//	{
	//		Matrix[i][j] = 0.0;
	//	}
	//}
	//

	//************动态数组（一维）***********//
	////声明//
	//double pi = 3.14159265358;
	int i,j;
	char *Directory1,*Directory2;
	Directory1="C:\\Users\\Crystal\\Desktop\\Array.txt";
	Directory2="C:\\Users\\Crystal\\Desktop\\Matrix.txt";

	//************动态数组（一维）***********//
	//printf("Please set array size\n");
	//scanf("%d",&i);
	//double *CoordX,*CoordY,*CoordZ;
	//CoordX = (double*)malloc(i*sizeof(double));
	//CoordY = (double*)malloc(i*sizeof(double));
	//CoordZ = (double*)malloc(i*sizeof(double));
	////初始化//
	//InitializeArray(CoordX,i,0.0);
	//InitializeArray(CoordY,i,1.0);
	//InitializeArray(CoordZ,i,2.0);

	//************动态数组（二维）***********//
	double *b;
	double error0=1.0e-6;
	double **Matrix2;
	int n = 2000,Bandwidth=5;
	
	Matrix2 = (double**)malloc(n*sizeof(double*));
	for(i=0;i<n;i++)
	{
		*(Matrix2+i) = (double*)malloc((2*Bandwidth-1)*sizeof(double));
	}
	
	b=(double*)malloc(n*sizeof(double));
	

	
	InitializeArray(b,n,1.0);
	InitializeMatrix(Matrix2,n,2*Bandwidth-1,0.0);
	//MatrixDefination(Matrix2,n,Bandwidth);
	MatrixDefination_Banded(Matrix2,n,Bandwidth);

	
	ConjugateGradient(Matrix2,n,b,error0);

	//	Conjugate Gradient//
	//InitializeArray(x,n,0.0);
	//MatrixMutiplication(Matrix2,n,n,x,Arraytemp);
	//for(i=0;i<n;i++)
	//{
	//	r[i]=b[i]-Arraytemp[i];//r0
	//	p[i]=r[i];//p0
	//}
	//k=0;
	//error=sqrt(Dotproduct(r,r,n));

	//while(error > error0)
	//{
	//	MatrixMutiplication(Matrix2,n,n,p,Arraytemp);
	//	alpha=Dotproduct(r,r,n)/Dotproduct(p,Arraytemp,n);
	//	for(i=0;i<n;i++)
	//	{
	//		x[i]+=x[i]+alpha*p[i];
	//		r_new[i]=r[i]-alpha*Arraytemp[i];
	//	}
	//	error=sqrt(Dotproduct(r_new,r_new,n));
	//	beta=Dotproduct(r_new,r_new,n)/Dotproduct(r,r,n);
	//	for(i=0;i<n;i++)
	//	{
	//		p[i]=r_new[i]+beta*p[i];
	//		r[i]=r_new[i];
	//	}
	//	k++;
	//}

	
	/*PrintMatrix(Matrix2,Directory2,"AAA",n,n);
	MatrixMutiplication(Matrix2,n,n,x,b);
	PrintArray(x,Directory1,"x",n);
	PrintArray(b,Directory1,"b",n);
	system("pause");*/

	


	//////************从文件读取***********//
	//FILE *fp;
	//double x,y,z;
	//	for(j=0;j<i;j++)
	//{
	//	fscanf(fp,"%lf %lf %lf",&x,&y,&z);
	//	CoordX[j] = x;
	//	CoordY[j] = y;
	//	CoordZ[j] = z;
	//}
	//fclose(fp);

	//printf("Which row would you like to check?\n");
	//scanf("%d",&i);
	//printf("%lf %lf %lf\n",CoordX[i],CoordY[i],CoordZ[i]);

	//system("pause");

	//
	//////************输出到文件***********//
	//char *Directory;
	//Directory="C:\\Users\\Crystal\\Desktop\\File2.txt";

	//PrintToFile(Matrix2,5,10,CoordX,CoordY,CoordZ,i,Directory,"Coordinate_1",pi);
	//PrintToFile(double **Matrix,int mm,int nn,double *CoordX,double *CoordY,double *CoordZ,int i,char *Directory,char *ArrayName,double vari)

	//************条件判断***********//
	////If Else//
	//for(i=0;i<5;i++)
	//{
	//	for(j=0;j<5;j++)
	//	{
	//		if(i == j)
	//		{
	//			Matrix[i][j] = 1.0;
	//		}
	//		else if(i < j)
	//		{
	//			Matrix[i][j] = 0.0;
	//		}
	//		else
	//		{
	//			Matrix[i][j] = 2.0;
	//		}
	//		printf("%6.2lf ",Matrix[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	////Switch//
	//for(i=0;i<5;i++)
	//{
	//	for(j=0;j<5;j++)
	//	{
	//		switch (i)
	//		{
	//		case 0:
	//			Matrix[i][j] = 0.0;
	//			break;
	//		case 1:
	//			Matrix[i][j] = 1.0;
	//			break;
	//		case 2:
	//			Matrix[i][j] = 2.0;
	//			break;
	//		case 3:
	//			Matrix[i][j] = 3.0;
	//			break;
	//		case 4:
	//			Matrix[i][j] = 4.0;
	//			break;
	//		}
	//		printf("%6.2lf ",Matrix[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	//************循环结构***********//
	//double error = 10.0;
	//int num = 0;
	//while(error > 1.0)
	//{
	//	error -= 1.0;
	//	num++;
	//}
	//printf("%d\n",num);

	//

	//system("pause");
	//return 0;
}