#include <stdio.h>
#include "libaw.h"

int main() {
    printf("Using go lib from C:\n");
   
    //Call Add() - passing integer params, interger result
    GoInt a = 12;
    GoInt b = 99;
    printf("aw.Add(12,99) = %d\n", Add(a, b)); 

    //Call Cosine() - passing float param, float returned
    printf("aw.Cosine(1) = %f\n", (float)(Cosine(1.0)));
    
    //Call Sort() - passing an array pointer
    GoInt data[6] = {77, 12, 5, 99, 28, 23};
    GoSlice nums = {data, 6, 6};
    Sort(nums);
    printf("aw.Sort(77,12,5,99,28,23): ");
    for (int i = 0; i < 6; i++){
        printf("%d,",((GoInt *)nums.data)[i]);
    }
    printf("\n");

    //Call Log() - passing string value
    GoString msg = {"Hello from C!", 13};
    Log(msg);
}
