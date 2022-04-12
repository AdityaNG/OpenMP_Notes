#include <stdio.h>
#include <omp.h>
int main()
{
    #pragma omp parallel
    {
        printf("Hello World... from thread = %d\n", omp_get_thread_num());
    }
}