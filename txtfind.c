#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "txtfind.h"

#define LINE 256
#define WORD 30

int getLine(char * str,char s[]){
int size=0;

    for (int i = 0; *(str+i)!='\n'&&*(str+i)!='\0'; i++)
    {
        s[i]=*(str+i);
        size++;
    }
    

return size;
}
int getWord(char *str,char w[]){
    
    int size=0;
 
for(int i=0; *(str+i)!=' '&&*(str+i)!='\n'&& *(str+i)!='\t'; i++){
    w[i]=*(str+i);
    size++;
}
return size;
}
int Substring( char * str1, char * str2){
    int size_str1=strlen(str1);
    int size_str2=strlen(str2);
    for(int i=0; i<size_str1; i++){
        int count=0;
        if(*(str1+i)==*str2){
        for(int j=0; j<size_str2; j++){
            if(*(str1+i+j)==*(str2+j)){
                count++;
            }
          }
          if(count==size_str2)return 1;
        }
    }
    return 0;
}
int Similar (char *s, char *t, int n){
    //int size_s=strlen(s);
    int size_t=strlen(t);
    int count=0;
    int i=0;
    int j=0;
    while(i<size_t){
        if(*(s+j)!=*(t+i)){
            count++;
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    int check=strlen(s+j);
    if(check+count==n)return 1;
    else return 0;
}
void print_lines(char * str1 ,char * str2){
    if(Substring(str1,str2)==1){
    
    printf("%s",(str1));
}
}

void print_similar_words(char * str1,char str2[] ){
    char check[WORD];
    char temp[LINE];
    int i=0;
    int size=getLine(str1,temp);
    getWord(str1,check);
    
    while(i<size){
        i+=getWord(str1+i,check);
      
   if(Similar(check,str2,1)==1){
       printf("%s\n",check);
   }
   else if(strcmp(str2,check)==0){
       printf("%s\n",check);
   }
   i++;
   memset(check,0,WORD);
    }
    
    
}
