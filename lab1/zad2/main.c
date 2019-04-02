#include <stdio.h>
#include <math.h>

long silnia(int n, long sil){
    if(n==0) return 1;
    sil*=n;
    n--;
    if(n==0) return sil;
    else return silnia(n,sil);
}


float etox(int n, float x, int i, float ex){
    //printf("silnia: %f %f\t", powf(x,i), powf(x,i)/silnia(i,1));
    ex+=powf(x,i)/silnia(i,1);
    i++;
    //printf("ex: %f\n",ex);
    if(i==n) return ex;
    else return etox(n,x,i,ex);
}

float stableetox(int n, float x, int i, float ex){
    if(x>=0) return etox(n,x,i,ex);
    else return (1/etox(n,-x,i,ex));
}
int main() {
    printf("%f\n", powf(2.7, -5.5));
    printf("%f\n", etox(16,2, 0, 0));
    printf("%f\n", stableetox(16,-5.5, 0, 0));
    return 0;
}