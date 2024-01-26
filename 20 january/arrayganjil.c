#include <stdio.h>
int main (){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int panjang = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < panjang; i++){
    if (arr[i] % 2 != 0){
        printf ("%d", arr[i]);
    }
    }

    return 0;
}