void MatrixMutiplication(double **Matrix,int m,int n,double *Array,double *sum)
{
	for(int i=0;i<m;i++)
	{
		sum[i]=0.0;
		for(int j=0;j<n;j++)
		{
			sum[i] += Matrix[i][j]*Array[j];
		}
	}
}

void MatrixMutiplication_Banded(double **Matrix,int m,int n,double *Array,double *sum,int Bandwidth)
{
	int i,j;
	for(i=0;i<Bandwidth-1;i++)
	{
		sum[i]=0.0;
		for(j=Bandwidth-1-i;j<n;j++)
		{
			sum[i] += Matrix[i][j]*Array[j-(Bandwidth-1-i)];
		}
	}
	
	for(i=Bandwidth-1;i<m-Bandwidth+1;i++)
	{
		sum[i]=0.0;
		for(j=0;j<n;j++)
		{
			sum[i] += Matrix[i][j]*Array[i-(Bandwidth-1)+j];
		}
	}
	for(i=m-Bandwidth;i<m;i++)
	{
		sum[i]=0.0;
		for(j=0;j<Bandwidth-1+m-i;j++)
		{
			sum[i] += Matrix[i][j]*Array[i-(Bandwidth-1)+j];
		}
	}
}
