//#include "isort.h"
#include <stdio.h>
#define DEBUG

//int getline(char s[]);
void shift_element(int* arr,int i){
     
    for(int k=i;k>0;k--){
        
        int temp = *(arr+k-1);
        *(arr+k) = temp;
       // printf('%d',arr[i]);
    }
}
    void insertion_sort(int* arr,int len){ //j holeh smola
        for(int i=1;i<len;i++){
            int temp =*(arr+i);
            int j = i-1;
            while(j>=0 && *(arr+j)>temp){
                *(arr+j+1) = *(arr+j);
                j--;
            }
            
            *(arr+j+1) = temp;
        }
    }
    void my_print(int *arr,int len){
    for(int i=0;i<len;i++){
        if(i==len-1){
           printf("%d\n",*(arr+i));  
        }
        else{
             printf("%d,",*(arr+i));
        }
    }
    }   
    
 
    
