#include<stdio.h>
#include<stdlib.h>
#define size 100
int s[size];
int top = -1;
void push();
void pop();
void display();
int main(){
    int ch;
    while(1){
        printf("Enter the choice\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:push();
                   break;
            case 2:pop();
                  break;
            case 3:display();
                  break;
            case 4:exit(0);
                  break;
        }

    }
}
void push(){
    int x;
    if(top==size-1){
        printf("overflow");
    }else{
        printf("enter the element:\n");
        scanf("%d",&x);
        top = top+1;
        s[top]=x;
    }
}
void pop(){
    printf("poped element is \n%d",s[top]);
    top=top-1;
}
void display()
{
    for(int i=top;i>=0;--i){
        printf("|%d|\n",s[i]);
}
}
