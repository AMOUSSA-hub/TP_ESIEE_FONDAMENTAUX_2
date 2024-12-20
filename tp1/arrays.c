#include "arrays.h"
#include <stdlib.h>

int *create_array(int max_size) {
    int *ptr = (int*)malloc(max_size*sizeof(int));
    return ptr;
}

void free_array(int t[]) {
    free(t);
}

void insert_unsorted(int t[], int *size, int elt) {
   t[*size] = elt;
   (*size)++;

}

int find_unsorted(int t[], int size, int elt) {

    int i;
    for (i = 0; i <=size-1; i++){

        if(t[i] == elt){
            return 1;
        }
    }

    return 0;
}

void insert_sorted(int t[], int *size, int elt) {
    /*
    * Write this function!
    */
}

int find_sorted(int t[], int size, int elt) {
    /*
    * Write this function!
    */
    return -1;
}
