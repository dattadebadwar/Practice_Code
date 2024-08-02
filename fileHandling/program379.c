//Accept the file number and OPEN that file 

//Manipulation Of File (File Handling)

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for Creat in file hand;ing 
#include<unistd.h> //

int main()
{
    char Fname[20];
    int fd=0;   //File Discripter
    char Data[]="Marevllous";
    printf("Enter the file name that you want to Open : ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open the File\n");
    }
    else{
        printf("file is  sucessfuly Opend with Fd %d\n",fd);
        write(fd,Data,10);
    }
    return 0;
}