#include<stdio.h>
#include<stdlib.h>
int main(){
    int size = 1;
    int *numptr = (int*) malloc(size*sizeof(int));
    for(int i = 0;i < size;i++){
        printf("N# %d", i+1);
        scanf("%d", &numptr[i]);
        if(numptr[i] == 0 ){break;}
        size++;
        numptr = realloc(numptr, (size+1)*sizeof (int));

    }

    printf("Size: %d\n", size-1);

    printf("Even nums:\n");
    for(int i = 0;i < size -1;i++){
        if(numptr[i] % 2 == 0)
            printf(" - %d\n", numptr[i]);
    }

    printf("Odd nums:\n");
    for(int i = 0;i < size -1;i++){
        if(!(numptr[i] % 2 == 0))
            printf(" - %d\n", numptr[i]);
    }

    printf("");
}
