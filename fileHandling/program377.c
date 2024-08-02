//Accept the file number and OPEN that file 

//Manipulation Of File (File Handling)

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for Creat in file hand;ing 
//O_RDONLY->Open For reading 
//O_WRONLY->open For Writing 
//O_RDWR->Open For Reading and Writing 

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