#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int coef;
    int pow;
    struct node *nxt;
}node;
struct node *Poly(){
    int coef,exp,flag;
    node *temp=(struct node*)malloc(sizeof(struct node));
    node *p=temp;
    do{
        printf("\nExponent: ");
        scanf("%d",&exp);
        printf("Coefficient: ");
        scanf("%d",&coef);
        temp->coef=coef;
        temp->pow=exp;
        temp->nxt=0;
        printf("Enter(1/0)");
        scanf("%d",&flag);
        if(flag){
            temp->nxt=(node*)malloc(sizeof(node));
            temp=temp->nxt;
            temp->nxt=0;
        }
    }
    while(flag);
    //printf("\n");
    return p;
}
void disPoly(node *p){
    while(p!=0){
        printf("%dx^%d",p->coef,p->pow);
        p=p->nxt;
        if(p!=0){
            printf("+");
        }
    }
    
}
node *add(node *a,node *b){
    node *c=0;
    node *temp=(node*)malloc(sizeof(node));
    temp->nxt=0;
    c=temp;
    while(a&&b){
        if(a->pow>b->pow){
            temp->coef=a->coef;
            temp->pow=a->pow;
            a=a->nxt;
        }
        else if(a->pow<b->pow){
             temp->coef=b->coef;
            temp->pow=b->pow;
            b=b->nxt;
            
        }
        else{
             temp->coef=b->coef+a->coef;
            temp->pow=b->pow;
            a=a->nxt;
            b=b->nxt;
            
        }
        if(a&&b)
        {
            temp->nxt = (node*)malloc(sizeof(node));
            temp = temp->nxt;
            temp->nxt = 0;
        }
        
    }
    while(a||b){
         temp->nxt = (node*)malloc(sizeof(node));
            temp = temp->nxt;
            temp->nxt = 0;
            if(a){
                temp->coef=a->coef;
                temp->pow=a->pow;
                a=a->nxt;
            }
            else if(b){
                temp->coef=b->coef;
                temp->pow=b->pow;
                b=b->nxt;
                
                
            }    
        
    }
    return c;
   
}
int main(){
    printf("*******************************************");
    node*c=0;
    printf("\nEnter the first polynomial: ");
    printf("\n");
    node*a=0;
    a=Poly();
    printf("\n");
    disPoly(a);
    printf("\n\n******************************************\n");
    node*b=0;
    printf("\n");
     printf("\nEnter the second polynomial: ");
     printf("\n");
    b=Poly();
    printf("\n");
    disPoly(b);
    printf("\n\n*****************************************\n");
    c=add(a,b);
    printf("\n");
    printf("\nResult: \n");
    disPoly(c);
    return 0;
}
