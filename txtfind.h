#ifndef TXTFIND_H
#define TXTFIND_H
int getLine(char * str,char s[]);
int getWord(char *str,char w[]);
int Substring( char * str1, char * str2);
int Similar (char *s, char *t, int n);
void print_lines(char *str1,char * str2);
void print_similar_words(char * str1,char str2[]);
#endif