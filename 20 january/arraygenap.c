#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int panjang = sizeof(arr) / sizeof(arr[0]);
    int awal = 0;
    for (int i = 0; i < panjang; i++){
        if(arr[i] %2 == 0){
            awal = awal + arr[i];
        }
    }
    printf("jumlah array genap : %d", awal);
    return 0;
}