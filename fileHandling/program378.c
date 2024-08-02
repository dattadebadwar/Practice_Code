//Accept the file number and OPEN that file 

//Manipulation Of File (File Handling)

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for Creat in file hand;ing 
int OpenFile(char Name[])
{
    int fd=0;
    fd=open(Name,O_RDWR);
    return fd;
}
int main()
{
    char Fname[20];
    int fd=0;   //File Discripter

    printf("Enter the file name that you want to Open : ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open the File\n");
    }
    else{
        printf("file is  sucessfuly Opend with Fd %d\n",fd);
    }
    return 0;
}