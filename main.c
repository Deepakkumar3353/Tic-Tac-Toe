#include <stdio.h>
#include <stdlib.h>


char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void gameboard();
int gamecheck();

/***** TIC TAC TOE GAME BOARD *****/
void gameboard()
{
  system("clear");
  printf("\n\n\t WELCOME TO TIC TAC TOE GAME\n\n");
  printf("\t REPRESENTATION OF PLAYER\n\n");
  printf("\t PLAYER 1 = X AND PLAYER 2 = O \n\n\n");
  printf("\t     |     |     \n");
  printf("\t  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
  printf("\t_____|_____|_____\n");
  printf("\t     |     |     \n");
  printf("\t  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
  printf("\t_____|_____|_____\n");
  printf("\t     |     |     \n");
  printf("\t  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
  printf("\t     |     |     \n");

}


/***** FUNCION FOR CHECKING THE TIC TAC TOE GAME *****/

/***** FUNCTION TO FOR GAME STATUS
       1 FOR GAME IS OVER WITH RESULT
       -1 FOR GAME IS IN PROGRESS
       0 FOR GAME IS OVER WITH DRAW *****/
int gamecheck()
{
  if(square[1]==square[2]&&square[2]==square[3])
  return 1;
  else if(square[4]==square[5]&&square[5]==square[6])
         return 1;
  else if(square[7]==square[8]&&square[8]==square[9])
         return 1;
  else if(square[1]==square[4]&&square[4]==square[7])
         return 1;
  else if(square[2]==square[5]&&square[5]==square[8])
         return 1;
  else if(square[3]==square[6]&&square[6]==square[9])
         return 1;
  else if(square[1]==square[5]&&square[5]==square[9])
         return 1;
  else if(square[3]==square[5]&&square[5]==square[7])
         return 1;
  else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
        return 0;
   else
       return -1;

}

int main()
{
    int player=1,i,choice;
    char mark;
    do
    {
    gameboard();
    player=(player%2)?1:2;
    printf("\n\n\t PLAYER %d , ENTER A NUMBER : ",player);
    scanf("%d",&choice);
    mark=(player==1)? 'X':'O';
    if(choice==1&&square[1]=='1')
      square[1]=mark;
    else if(choice==2&&square[2]=='2')
      square[2]=mark;
    else if(choice==3&&square[3]=='3')
      square[3]=mark;
    else if(choice==4&&square[4]=='4')
      square[4]=mark;
    else if(choice==5&&square[5]=='5')
      square[5]=mark;
    else if(choice==6&&square[6]=='6')
      square[6]=mark;
    else if(choice==7&&square[7]=='7')
      square[7]=mark;
    else if(choice==8&&square[8]=='8')
      square[8]=mark;
    else if(choice==9&&square[9]=='9')
      square[9]=mark;
    else
        {
         printf("\tINVALID MOVE");
         player--;

        }
      i=gamecheck();
      player++;
    } while(i==-1);
    gameboard();
    if(i==1)
    printf("\n\n\n\t ===>\aPLAYER %d WIN",--player);
    else
        printf("\n\n\n\t ===>\a GAME DRAW");

    return 0;
}
