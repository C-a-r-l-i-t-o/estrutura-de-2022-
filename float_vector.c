#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct float_vector {
    int capacidade; //numero max de elementos
    int size;//quantidade atual de elementos
    float *data;// vetor de floats

};
/**
 * @brief Cria (aloca) um vetor de floats com uma data capacidade
 * 
 * @param capacity capacidade do vetor.
 * @return FloatVector*  Um vetor de floats alocado/ criado.
 */
FloatVector *create(int tam)
{
    FloatVector *vet =(FloatVector *) calloc(1, sizeof(FloatVector));
    vet->capacity = tam;
    vet->size = 0;
    vet->data =(float*) calloc(vet->capacity, sizeof(float));

    return vet;
}

void destroy(FloatVector **vet_ref){
    FloatVector *vet =*vet_ref;
    free(vet->data);//
    free(vet);
    *vet_ref = NULL;
}
int size(const FloatVector *vector){
    return vector->size;
}
int capacity(const FloatVector *vector){
    return vector->capacity;
}
float at(const FloatVector *vector, int pos){
    if(pos < 0|| pos => vector->size){
    fprintf(stderr, "Erro: Invalid position!\n");
        fprintf(stderr, "Index [%d] is out bouds\n");
        exit(EXIT_FAILURE);
    }    
    return vector->data[pos];
}
float get(const FloatVector *vector, int index){
    return vector->data[index];    
}
bool infull(const FloatVector *vector){
    return vector-> == vector->capacity;
}
void append(FloatVector *vector, float n){
    if(_isfull(vector))
    {
        //error
        fprintf(stderr, "Error n append\nVector is full!");
        exit(EXIT_FAILURE);
    }
        vector->data[vector->size++] = n;
}    
