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
    int fd=0, Length=0;   //File Discripter
    char Data[100];

    printf("Enter the file name that you want to Open : ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR | O_APPEND);//Single Change O_APPEND

    if(fd==-1)
    {
        return -1;
    }

    printf("Enter the data That You want to write in File : \n");
    scanf(" %[^'\n']s",Data);

    Length=strlen(Data);
    //write(Kahat,Kay,KITI)
    write(fd,Data,Length);
    return 0;
}