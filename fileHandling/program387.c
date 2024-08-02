// Take the file from user and Display the size of file 
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
    int Count=0 , i=0;

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
        for(i=0;i<Length; i++)
        {
            if(Data[i]>= 'a' && Data[i]<='z')
            {
                Count++;
            }
        }
    }
    
    printf("Size of file is %d bytes \n",Count);

    close(fd);

    return 0;
}

