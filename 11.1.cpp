// 11.1.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include"Initialization.h"
#include <stdio.h>
#include <stdlib.h>
#include"PrintToFile.h"

int main(int argc,char *argv[])
{	

	//************��������***********//
	////����//
	//char *aaa = "hahahaha";
	//char *bbb = "����ڣ�";
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

	////************��̬����***********//
	////����//

	//int Array1[10];
	//float Array2[10];
	//double Array3[10];
	////��ʼ��//
	//for(i=0;i<10;i++)
	//{
	//	Array1[i] = 0;
	//	Array2[i] = 0.0;
	//	Array3[i] = (double)i;
	//}
	////����//
	//double Matrix[5][5];
	////��ʼ��//
	//for(i=0;i<5;i++)
	//{
	//	for(j=0;j<5;j++)
	//	{
	//		Matrix[i][j] = 0.0;
	//	}
	//}
	//

	//************��̬���飨һά��***********//
	////����//
	double pi = 3.14159265358;
	int i,j;
	char *Directory1,*Directory2;
	Directory1="C:\\Users\\Crystal\\Desktop\\Array.txt";
	Directory2="C:\\Users\\Crystal\\Desktop\\Matrix.txt";

	//************��̬���飨һά��***********//
	printf("Please set array size\n");
	scanf("%d",&i);
	double *CoordX,*CoordY,*CoordZ;
	CoordX = (double*)malloc(i*sizeof(double));
	CoordY = (double*)malloc(i*sizeof(double));
	CoordZ = (double*)malloc(i*sizeof(double));
	//��ʼ��//
	InitializeArray(CoordX,i,0.0);
	InitializeArray(CoordY,i,1.0);
	InitializeArray(CoordZ,i,2.0);
  /*  PrintArray(CoordX,Directory1,"x",i);
	PrintArray(CoordY,Directory1,"x",i);
	PrintArray(CoordZ,Directory1,"x",i);*/
	
	//************��̬���飨��ά��***********//
	double **Matrix2;
	int m = 5,n = 10;

	Matrix2 = (double**)malloc(m*sizeof(double*));
	for(i=0;i<m;i++)
	{
		*(Matrix2+i) = (double*)malloc(n*sizeof(double));
	}
	InitializeMatrix(Matrix2,m,n,0.0);
    PrintMatrix(Matrix2,Directory2,"AAA",m,n);
	system("pause");

	//////************���ļ���ȡ***********//
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
	//////************������ļ�***********//
	//char *Directory;
	//Directory="C:\\Users\\Crystal\\Desktop\\File2.txt";

	//PrintToFile(Matrix2,5,10,CoordX,CoordY,CoordZ,i,Directory,"Coordinate_1",pi);
	//PrintToFile(double **Matrix,int mm,int nn,double *CoordX,double *CoordY,double *CoordZ,int i,char *Directory,char *ArrayName,double vari)

	//************�����ж�***********//
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

	//************ѭ���ṹ***********//
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