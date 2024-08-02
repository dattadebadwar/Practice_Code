//  Accept the file number from the user and Read the whole File 

//Accept the file number and OPEN that file 

//Manipulation Of File (File Handling)

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for Creat in file hand;ing 
#include<unistd.h> //
#include<string.h>

int main()
{
    char Fname[20];
    int fd=0, Length=0 ;   //File Discripter
    char Data[100];

    printf("Enter the file name that you want to Open : ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to Open file \n");
        return -1;
    }


    while ((Length=read(fd,Data,sizeof(Data))) !=0)
    {
        write(1,Data,Length);
    }
    
    close(fd);

    return 0;
}

