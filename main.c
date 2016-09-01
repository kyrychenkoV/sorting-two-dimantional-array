#include <stdio.h>
#define lines 2
#define colums 5
int main(int argc, char *argv[])
{
    inputData();
    return 0;
}
void sortArray (int *a,int size){
    int i, j;
    int tmp;
    for (i = 1; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (a[j] < a[j-1]) {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
}
void printArray(int array[],int size){
    int i;
    for (i=0;i<size;i++){
        printf("%3d",array[i]);
    }
    printf("\n");

}
void inputData(){
    int i=0,j,k;
    int array [lines][colums]={{2,3,4,10,1},
                         {1,9,20,40,5}};
    printf("Araray befor:\n");
    for(i=0;i<lines;i++){
        for(j=0;j<colums;j++){
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }
    printf("Araray after:\n");
    for (i=0;i<lines;i++){
        sortArray(array[i],colums);
        printArray(array[i],colums);
    }
}
