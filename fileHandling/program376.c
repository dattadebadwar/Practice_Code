//Manipulation Of File (File Handling)

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for Creat in file hand;ing 

int CreateFile(char Name[])
{
    int fd=0;
    fd=creat(Name,0777);
    return fd;

}

int main()
{
    char Fname[20];
    int fd=0;   //File Discripter

    printf("Enter the file name that you want to Create : ");
    scanf("%s",Fname);

    fd=CreateFile(Fname);
    if(fd==-1)
    {
        printf("Unable to Crate file \n");

    }
    else
    {
        printf("File is Succesfully Created with FD %d\n",fd);
    }
    return 0;
}