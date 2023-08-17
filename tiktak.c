#include<stdio.h>
#include<conio.h>

void start();
int check();
 char arr[]={'0','1','2','3','4','5','6','7','8','9'} ;
  int mark,player=1,input,i=1;
void system();
void main(){
 	start();
while(i<=9){
	if(player%2==0){
 		mark='O';
	 }
	 else{
	 	mark='X';
	 }
     	scanf("%d",&input);
              	if(input<1||input>9||arr[input]=='X'||arr[input]=='O'){
	              	printf("invalid input\n");
                }
               	else{
	               	arr[input]=mark;
             		player++;i++;
            }
  start();
  check();
}
} 	
void start(){
	system("cls");
	printf("####Tic Tac Toe****\n");
	printf("   |   |    \n");
	printf(" %c | %c | %c  \n",arr[1],arr[2],arr[3]);
	printf("___|___|___ \n");
	printf("   |   |    \n");
	printf(" %c | %c | %c  \n",arr[4],arr[5],arr[6]);
	printf("___|___|___ \n");
	printf("   |   |    \n");
	printf(" %c | %c | %c  \n",arr[7],arr[8],arr[9]);
	printf("   |   |    \n");
   
}

int check(){
	if(arr[1]==arr[2]&&arr[2]==arr[3])
	printf("Winner is Player %c \n",mark);
	
	
	if(arr[4]==arr[5]&&arr[5]==arr[6])
	printf("Winner is Player %c \n",mark);
	
	
	if(arr[7]==arr[8]&&arr[8]==arr[9])
	printf("Winner is Player %c \n",mark);
	
		
	if(arr[1]==arr[4]&&arr[4]==arr[7])
	printf("Winner is Player %c \n",mark);
	
	
	if(arr[2]==arr[5]&&arr[5]==arr[8])
	printf("Winner is Player %c \n",mark);	
	
	
	if(arr[3]==arr[6]&&arr[6]==arr[9])
	printf("Winner is Player %c \n",mark);
	
	
	if(arr[1]==arr[5]&&arr[5]==arr[9])
	printf("Winner is Player %c \n",mark);
	
	
	if(arr[3]==arr[5]&&arr[5]==arr[7])
	printf("Winner is Player %c \n",mark);
	
	
}
