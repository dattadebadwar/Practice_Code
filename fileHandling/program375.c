//Manipulation Of File (File Handling)

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for Creat in file hand;ing 

int main()
{
    char Fname[20];
    int fd=0;   //File Discripter

    printf("Enter the file name that you want to Create : ");
    scanf("%s",Fname);

    fd=creat(Fname,0777);

    if(fd==-1)
    {
        printf("Unable to Create the File\n");
    }
    else{
        printf("file is Created sucessfuly with Fd %d\n",fd);
    }
    return 0;
}