#include <stdio.h>
#include <immintrin.h>
#include <avx2intrin.h>


int main(int argc, char *agrv[]){

    __m128  a;
    __m128  b;
    __m128  c;
 
    float op1[4] = {1.1, 2.2, 3.3, 4.4};
    float op2[4] = {2.2, 3.3, 4.4, 5.5};
    float result[4];
 
    // Load
    a = _mm_load_ps(op1);
    b = _mm_load_ps(op2);
 
    // Calculate
    c = _mm_add_ps(a, b);   // c = a + b
 
    // Store
    _mm_store_ps(result, c);
 
    printf("0: %lf\n", result[0]);
    printf("1: %lf\n", result[1]);
    printf("2: %lf\n", result[2]);
    printf("3: %lf\n", result[3]);

    return 0;
}
