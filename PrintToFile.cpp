#include <stdio.h>
#include <stdlib.h>
void PrintToFile(double **Matrix,int mm,int nn,double *CoordX,double *CoordY,double *CoordZ,int i,char *Directory,char *ArrayName,double vari)

{
	FILE *fp;
	errno_t err;
	err=fopen_s(&fp,Directory, "w+");

	//err = fopen_s(&fp,"C:\\Users\\Crystal\\Desktop\\File.txt", "w+");
	//fp = fopen("file.txt","w+");

	fprintf(fp,"Array's name is:%s,Pi=%20E/n",ArrayName,vari);//20位字符空间，E表示科学计数法，空间有空则会在前面加空格


	int j,k;
	for(j=0;j<i;j++)
	{
		fprintf(fp,"    %16.11lf    %16.11lf    %16.11lf\n",CoordX[j],CoordY[j],CoordZ[j]);
	}

	for(k=0;k<mm;k++)
	{
		for(j=0;j<nn;j++)
		{
			fprintf(fp,"%16.11lf ",Matrix[k][j]);
		}
		fprintf(fp,"\n");
	}

	fclose(fp);
}

void PrintMatrix(double **Matrix,char *Directory,char *MatrixName,int m,int n)
{
	FILE *fp;
	errno_t err;
	err=fopen_s(&fp,Directory, "w+");

	fprintf(fp,"Matrix's name is:%s,Number of rows =%d Number of columns =%d\n",MatrixName,m,n);
	printf("Matrix's name is:%s,Number of rows =%d Number of columns =%d\n",MatrixName,m,n);
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			fprintf(fp,"%16.11lf ",Matrix[i][j]);
			printf("%16.11lf ",Matrix[i][j]);		
		}
		fprintf(fp,"\n");
		printf("\n");
	}
	fclose(fp);
}


void PrintArray(double *Array,char *Directory,char *ArrayName,int m)
{
	FILE *fp;
	errno_t err;
	err=fopen_s(&fp,Directory, "a+");//append附加

	fprintf(fp,"Array's name is:%s,Number of rows =%d\n",ArrayName,m);
	printf("Array's name is:%s,Number of rows =%d\n",ArrayName,m);
	int i;
	for(i=0;i<m;i++)
	{
	    fprintf(fp,"%16.11lf ",Array[i]);
		printf("%16.11lf ",Array[i]);		
		fprintf(fp,"\n");
		printf("\n");	
	}
	fclose(fp);
}