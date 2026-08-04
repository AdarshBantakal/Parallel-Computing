#include <stdio.h>
#include <omp.h>

int main(){
    int num_interactions;
    printf("Enter the number of interactions:");
    scanf("%d", &num_interactions);
    #pragma omp parallel 
    {
        #pragma omp for schedule(static,2)
        for(int i=0;i<num_interactions;i++){
            printf("thread %d :Iteration %d\n", omp_get_thread_num(),i);
        }
    }
    return 0;
}