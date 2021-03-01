#include <stdio.h>


__uint8_t stop_fun(__uint8_t x)
{

	if(x==0)
		printf("Already in the Stop state\n");
	else if(x==1)
		printf("Changing mode to play\n");
	else if(x==2)
		printf("play the song first before pausing \n");
	else if(x==3)
		printf("play the song first before Fast fowording the song\n");
	else if(x==4)
		printf("play the song first before Rewinding the song\n");
	else
		printf("Invalid transitions\n");
}


__uint8_t play_fun(__uint8_t x)
{

	if(x==0)
		printf("Changing mode to stop\n");
	else if(x==1)
		printf("Already in the playing state\n");
	else if(x==2)
		printf("Changing mode to pause\n");
	else if(x==3)
		printf("Fast fowording the song\n");
	else if(x==4)
		printf("Rewinding the song\n");
	else
		printf("Invalid transitions\n");
}


__uint8_t pause_fun(__uint8_t x)
{

	if(x==0)
		printf("Changing mode to stop\n");
	else if(x==1)
		printf("Changing mode to pause\n");
	else if(x==2)
		printf("Already in the pause state\n");
	else if(x==3)
		printf("Fast fowording the song\n");
	else if(x==4)
		printf("Rewinding the song\n");
	else
		printf("Invalid transitions\n");
}

	

	
int main(int argc,char** argv)
{
int state=*argv[1]-48;
int c;
int x=*argv[2]-48;
switch(state)
{
case 0: 
	fp=stop_fun;
	break;
case 1:
	fp=play_fun;
	break;
case 2:
	fp=pause_fun;
	break;
default:
	printf("Invalid option\n");
}
c=fp(x);
}
	
