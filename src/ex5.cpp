#include <stdio.h>
#include <omp.h>
 
int main() {
    int i=0, j=0, id;
    #pragma omp parallel private (id,i,j)         
    {                          
        #pragma omp for                  
        for (i=0; i<4; i++) {  
            for (j=0; j<4; j++) {                
                id = omp_get_thread_num();
                printf("[Thread_%d] (i,j)=(%d,%d)\n", id, i,j);
            }
        }            
    }
}
