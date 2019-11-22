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
