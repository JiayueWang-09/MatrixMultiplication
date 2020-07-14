#ifndef _MATRIXOPERATION_
#define _MATRIXOPERATION_

void MatrixDefination(double **Matrix2,int m,int Bandwidth);

double Dotproduct(double *a, double*b,int n);

void ConjugateGradient(double **Matrix,int n,double *b,double error0);

void MatrixDefination_Banded(double **Matrix,int n,int Bandwidth)£»

#endif