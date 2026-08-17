#include <stdio.h>
int main(){
char name[]="Karan Partap";
printf("Array before modyfeing:  %s\n",name);
name[6]='p';
printf("Array after modyfieng: %s\n",name);


char *nickname= "Karan Partap";
printf("pointer before modyfeing:  %s\n",name);
nickname[6]='p';//cause errpr or wont rum
printf("pointer after modyfieng: %s\n",nickname);


return 0;
}
