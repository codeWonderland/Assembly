// Program I.2
// Accessing the First Element in result - C++
// Copyright (c) 2017 Hall & Slonka

#include <xmmintrin.h>
int main()
{
    float array[4] = { 1.0, 2.0, 3.0, 4.0 };
    __m128 result = _mm_load_ps(array);      // MOVAPS
    
    float element = result[0];
    
    return 0;  // set breakpoint here
}
