#include <stdio.h>
#include <omp.h>
int main()
{
    int i, numt, id;
    #pragma omp parallel private (id) shared(numt)
    {
        numt = omp_get_num_threads();
        id = omp_get_thread_num();
        for (i=0;i<100;i++);
            printf(" Output from thread %d of %d\n",
        id, numt);
    }
}