#include <stdio.h>
#include <string.h>

int main(){
char buffer[255];
while(1){
printf("I am ready > ");
scanf("%[^\n]%c",buffer);
if(strcmp(buffer,"exit") == 0){
printf("Good Bye :)\n");
break;
}
printf("You said: %s\n",buffer);
}
return 0;
}

