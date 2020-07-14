#ifndef _MATRIXMULTIPICATION_
#define _MATRIXMULTIPICATION_

void MatrixMutiplication(double **Matrix,int m,int n,double *Array,double *sum);

void MatrixMutiplication_Banded(double **Matrix,int m,int n,double *Array,double *sum,int Bandwidth);
#endif