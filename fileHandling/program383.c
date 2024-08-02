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

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        return -1;
    }

    Length = read(fd,Data,13);   //(kuthun , kashat ,kiti)
    
    printf("Data from file is \n");

    write(1,Data,Length);

    return 0;
}

