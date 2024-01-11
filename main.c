#include <stdio.h>

int proizv (int arr[], int size);

int main()
{
    int test_arr[] = {1, 3, 5, 7, 8, 4, 4, 2, 5, 76, 9};
    
    int res = proizv(test_arr, sizeof(test_arr));
    printf("%d \n", res);
    return 0;
}

int proizv (int arr[], int size){
    int res = 1;
    for (int i = 0; i < size / 4; i++)
    {   
        if (arr[i] % 2 == 1){
            res *= arr[i];
        }
    }
    return res;
}