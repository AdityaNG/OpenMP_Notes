#include <stdio.h>
#include <omp.h>
int main()
{
    omp_set_num_threads(6);
    #pragma omp parallel
    {
        printf("Hello World... from thread = %d\n", omp_get_thread_num());
    }
}