//  Name :- SHANTKUMAR PATIL
//  Date of Submisson :- 31/10/2026
//  Description : Duo player Chocolate chilly game



#include<stdio.h>

int main()
{
    int chocolate=13; // intialised number of chocolates
    int p1,p2;
    printf("                                             \n");
    printf("''''''''''CHOCOLATE CHILLY DUO PLAYER GAME''''''''''\n");


    while(chocolate)
    {
        label:
        printf("Player 1 turn : \n");
        printf("Pick chocolates (1-3): \n"); 
        scanf("%d",&p1);
        if(p1<0||p1>3||p1>chocolate)
        {  
            printf("Invalid input\n");
            printf("\n");
            goto label;
        }
        chocolate-=p1;
        if(chocolate==0)
        {
            printf("Oops!! Player 2 got chilli\nPlayer 1 won\n");
            break;
        }
       // printf("Chocolates remaining %d\n",chocolate);
        printf("\n");
                    
        
        hii:
        printf("Player 2 turn : \n");
        printf("Pick chocolates (1-3): \n");
        scanf("%d",&p2);
        if(p2<0||p2>3||p2>chocolate)
        {
            printf("Invalid input\n");
            printf("\n");
            goto hii;
        }
        chocolate-=p2;

        if(chocolate==0)
        {
            printf("Ooh NO!! Player 1 got chilli\nPlayer 2 won\n");
            break;
        }
       // printf("Chocolates remaining %d\n",chocolate);
        printf("\n");
}
return 0;
}