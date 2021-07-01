
/*
* a basing shifting operation on vector arrays example.
* 01.06.2021 nesh@Aydin
*/
#include <stdio.h>

void ordinalValsPushArr(int arr[],int arrSize){
    for(int c=0;c<arrSize;c++)
        arr[c]=c+1;
}

void printArr(int arr[],int arrSize){
    for(int c=0;c<arrSize;c++)
        printf("%d\t",
        arr[c]);
    printf("\n");
    
}

void vectorElementsShiftingArr(int arr[],int arrSize,int shift){
 
    int tmpArr[arrSize];
    for(int b=0;b<kaydirma;b++){
    tmpArr[b]=0;
    for(int c=1;c<arrSize-b;c++){
        tmpArr[b+c]=arr[c-1];
    }}
  //   bastirma(tmpArr,arrSize);
   for(int c=0;c<arrSize;c++)
    arr[c]=tmpArr[c];
        
}


int main()
{
    int arr[20];
    int arrS=(sizeof(arr)/sizeof(int));
    ordinalValsPushArr(arr,arrS);
    printArr(arr,arrS);
    vectorElementsShiftingArr(arr,arrS,6);
   printArr(arr,arrS);
    return 0;
}
