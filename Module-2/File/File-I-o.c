#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20];
    fptr = fopen("hello.txt","a"); //open file in write mode and assign it to the pointer variable "fptr"
    fprintf(fptr, "Nidhi");
    //write data into the file using function fprintf
    fclose(fptr);
    fptr = fopen("hello.txt", "r");
    // open a file for reading only (file must exist)and assign its address to the pointer variable 'fptr'
    fscanf(fptr, "%s", &str);
    printf("%s", str);
    fclose(fptr);
    return 0;
}