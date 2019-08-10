#include<stdio.h>
int main(){
int x,p,s=0,t=0;
scanf("%d %d\n",&x,&p);
while(x>1){
t=(p/100)*x;
s=s+t;
x=x-t;
}
printf("%d\n",s);
return 0;
}
