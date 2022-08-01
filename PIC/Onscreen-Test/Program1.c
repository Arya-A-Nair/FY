#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

  FILE *fp;//Declaring pointer to a file
  FILE *fp2;
  char ch;
  char str[100]="Hey my name is Arya";
  int i=0;
  fp2=fopen("Arya.txt","w");//creating a file
  fputs(str, fp2);
  fclose(fp2);
  fp = fopen("Arya.txt","r");//Opening file in read mode

  if(fp == NULL)//If file is not found
  {
    printf("File not found");
    exit(0);
  }

  fscanf(fp,"%[^\n]",str); //Storing in single string until we don't get a new line character
  printf("Original String: %s\n",str);
  printf("Reversed String: %s",strrev(str));//using string.h library to reverse the string
  fclose(fp);
  return 0;
}
