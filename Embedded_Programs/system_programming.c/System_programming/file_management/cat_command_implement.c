#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	int i=1,fd,ret;
	char buffer[10000];
	while(i<argc)
	{
		fd=open(argv[i],O_RDONLY);
		if(fd < 0)
		{
			printf("cat: '%s': No such file or directoryi\n",argv[1]);
			exit(-1);
		}
		while(ret=read(fd,buffer,9999))
		{
			/*if(ret < 0)
			{
				printf("Faile to read\n");
				exit(-1);
			}*/
			buffer[ret]='\0';
			printf("%s",buffer);
		}
		close(fd);
		i++;
	}


}

