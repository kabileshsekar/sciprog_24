#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file 

    f = fopen(filename,r);
    if(f == NULL)
    {
        printf("File not opening due to error%s", filename);
        return 1;
    }


    int *Matrix;
    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 

    Matrix = (int **)calloc(n, sizeof(int *));
    if (Matrix == NULL) {
        printf("allocation failed\n");
        fclose(f);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        Matrix[i] = (int *)calloc(n, sizeof(int));
        if (Matrix[i] == NULL) {
            printf("allocation for row %d is failed\n", i);
            for (int j = 0; j < i; j++) {
                free(Matrix[j]);
            }
            free(Matrix);
            fclose(f);
            return 1;
        }
    }

    // TODO:inputting integer data into the matrix;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (fscanf(f, "%d", &Matrix[i][j]) != 1) {
                printf("reading data from file with error\n");
                for (int k = 0; k < n; k++) {
                    free(Matrix[k]);
                }
                free(Matrix);
                fclose(f);
                return 1;
            }
        }
    }

    if (isMagicSquare(Matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is NOT a magic square.\n");
    }


    // TODO: Freeing each row separately before freeing the array of pointers

    for (int i = 0; i < n; i++) {
        free(Matrix[i]);
    }
    free(Matrix);


    // TODO:Close the file

    fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
