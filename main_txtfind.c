#include <stdio.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30

int main(){
char arr[LINE];
//char word [WORD];

fgets(arr,sizeof(arr),stdin);
char to_find[WORD];
int index=1+getWord(arr,to_find);
char ch [WORD];
getWord(arr+index,ch);
while(fgets(arr,sizeof(arr),stdin)){
    if(ch[0]=='a'){
 print_lines(arr,to_find);
    }
    else if(ch[0]=='b'){
print_similar_words(arr,to_find);
}
else{
    printf("Error! there is only a or b in the options\n");
    break;
}
}
return 0;
}