#include <stdio.h>
#include <omp.h>

int main() {

	int i, j, numt, id;

	#pragma omp parallel for private(id)
	for (i=1; i<8; i++)
	{
		numt = omp_get_num_threads();
		id = omp_get_thread_num();

		for (int j=0; j<100; j++);

		printf("Output from thread %d of %d\n", id, numt);
		//printf("Output from thread %d of %d\n", i, numt);
	}
}
