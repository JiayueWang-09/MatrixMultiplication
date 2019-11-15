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