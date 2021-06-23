/*
Given an array reverse it & print it

example arr = [1,2,3,4,5]
output = [5,4,3,2,1]
*/

#include <stdio.h>

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int out[n];
    int i;
    for(i = n; i >= 0; i--){
        out[i - 1] = arr[n - i];
    }
    for(i = 0; i< n; i++){
        printf("%d ", out[i]);
    }
    return 0;
}