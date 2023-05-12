//Programa que suma 2 matrices

#include <stdio.h>

int main (){

    int matriz[2][2]= {{1,2},{3,4}};
    int matriz1[2][2]={{5,6},{7,8}};
    int matrices[2][2];
    int i,j;
    if (sizeof(matriz) != sizeof(matriz1)){
        printf("Error: Las matrices deben tener la misma dimension \n");
        return 1;
    }

    for(i = 0; i<2; i++){
        for(j=0; j<2; j++){
            matrices[i][j]= matriz[i][j] + matriz1[i][j];
            }
            }
            printf("La matriz resultante es: \n");
            for(i=0; i<2; i++){
                for(j=0; j<2; j++){
                    printf("%d, ", matrices[i][j]);
                }
                printf("\n");
            }
    return 0;
}