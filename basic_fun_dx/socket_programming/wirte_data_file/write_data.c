// #include<unistd.h>
#include<string.h>
#include<stdio.h>

int main(void){



FILE *fd;
char bff[]="I am not going to stop\n";
// fd=fopen("data.txt","w");
// fprintf(fd,"%s",bff);
// fclose(fd);
fd=fopen("data.txt","r");
char c;
while ((c=fgetc(fd))!=EOF)
{
    putchar(c);

}
fclose(fd);

    return 0;
}