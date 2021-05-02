#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int choice,box,choose=1;
char p1s,p2s;
char arr[]={'0','1','2','3','4','5','6','7','8'};

void gamedesign()
{
    printf(" _____ _____ _____\n");
    printf("|     |     |     |\n");
    printf("|__%c__|__%c__|__%c__|\n",arr[0],arr[1],arr[2]);
    printf("|     |     |     |\n");
    printf("|__%c__|__%c__|__%c__|\n",arr[3],arr[4],arr[5]);
    printf("|     |     |     |\n");
    printf("|__%c__|__%c__|__%c__|\n",arr[6],arr[7],arr[8]);
}

void startgame()
{
    printf("\nPlayer-1,you play with : #");
    printf("\nPlayer-2,you play with : $");
    printf("\nHey guys!! u decide to who is player-1 and player-2...... \n");
    printf("\nEnter the player number to who start the game : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n\nplayer 1 starts the game.....");
    }
    else
    {
         printf("\n\nplayer 2 starts the game.....\n");
    }
}
void playing()
{
   while(choose)
   {
    printf("\n\nPlayer-%d Enter the box number to u blocking : ",choice);
    scanf("%d",&box);
    if(choice==1)
    {
        arr[box]='#';
        choice=choice+1;
    }
    else
    {
        arr[box]='$';
        choice=choice-1;
    }
    gamedesign();
    if(arr[0]=='#' && arr[1]=='#' && arr[2]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[0]=='$' && arr[1]=='$' && arr[2]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[3]=='#' && arr[4]=='#' && arr[5]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[3]=='$' && arr[4]=='$' && arr[5]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[6]=='#' && arr[7]=='#' && arr[8]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[6]=='$' && arr[7]=='$' && arr[8]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[0]=='#' && arr[3]=='#' && arr[6]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[0]=='$' && arr[3]=='$' && arr[6]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[1]=='#' && arr[4]=='#' && arr[7]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[1]=='$' && arr[4]=='$' && arr[7]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[2]=='#' && arr[5]=='#' && arr[8]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[2]=='$' && arr[5]=='$' && arr[8]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[0]=='#' && arr[4]=='#' && arr[8]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[0]=='$' && arr[4]=='$' && arr[8]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }else if(arr[2]=='#' && arr[4]=='#' && arr[6]=='#')
    {
        printf("\nPLAYER-1 WIN...");
        break;
    }else if(arr[2]=='$' && arr[4]=='$' && arr[6]=='$')
    {
        printf("\nPLAYER-2 WIN...");
        break;
    }
    if((arr[0]=='#'||arr[0]=='$') && (arr[1]=='$'||arr[1]=='#') && (arr[2]=='#'||arr[2]=='$') && (arr[3]=='#'||arr[3]=='$') && (arr[4]=='#'||arr[4]=='$') && (arr[5]=='#'||arr[5]=='$') && (arr[6]=='#'||arr[6]=='$') && (arr[7]=='#'||arr[7]=='$') && (arr[8]=='#'||arr[8]=='$'))
    {
        printf("\n\n*****GAME DRAW*****");
    }
   }
   printf("\n\nHey guys...!! U WANT TO PLAY AGAIN then Press 1 : ");
    scanf("%d",&choose);
    if(choose==1)
    {
        int j=48;
        for(int i=0;i<strlen(arr);i++)
        {
            arr[i]=j;
            j++;
        }
        gamedesign();
        startgame();
        playing();
    }
}

int main()
{
    gamedesign();
    startgame();
    playing();
    printf("\n\n*****END GAME*****\n\n");
    return 0;
}

