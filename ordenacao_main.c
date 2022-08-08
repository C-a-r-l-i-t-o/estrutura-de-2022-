#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenacao.h"


int main(){


    int vector ={ 7, 3, 0, 1, 4, 8, 2, 9, 5};
    bubble(vector, 8);

//trazer elementos

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
void bubble(int vector[], int size)
{
    for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - 1; j++)
            {

        if(vector[i] > vector [i+1]){
            swap(&vector[i], &vector[i +]);
            }  
        }
    }
}
void printVector(const int *vector)
{
    printf ("int vector", );

}

    return 0;
}