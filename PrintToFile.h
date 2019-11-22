#ifndef _PRINTTOFILE_
#define _PRINTTOFILE_

void PrintToFile(double **Matrix,int mm,int nn,double *CoordX,double *CoordY,double *CoordZ,int i,char *Directory,char *ArrayName,double vari);

void PrintMatrix(double **Matrix,char *Directory,char *MatrixName,int m,int n);
void PrintArray(double *Array,char *Directory,char *ArrayName,int m);

#endif