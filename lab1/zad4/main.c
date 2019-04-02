
#include <stdio.h>

int main() {
    float tab[100000000];
    float v = 0.29283f;
    for(int i=0; i<10000000; i++) tab[i] = v;

    float sum = 0;
    for(int i= 0; i<10000000; i++) sum+=tab[i];

    float b_bezwgl = 10000000*v - sum;
    float b_wzgle = b_bezwgl / 1000000* v;

    printf ( "%e\n", sum);
    printf ( "%e\n", b_bezwgl);
    printf ( "%e\n", b_wzgle);
    return 0;
}
