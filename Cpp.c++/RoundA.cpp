#include<iostream>
#include<time.h>


#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
int enemy[3];
int enemy[3];
int enemyFlag[3];
char car[4][4] = {' ','+', '+',' ',
                   '+','+','+','+',
                   ' ','+','+',' ',
                    '+','+','+','+' };

int carsPos = WIN_WIDTH/2;
int score = 0;
void gotoxy(int x, inrt y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPos(console,CursorPosition);
} 
void setcursor(bool visible, DWORD size){
    if(size == 0)
    size =20;

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console,&lpCursor);
}
void drawBorder(){
    for(int i=0; i<SCREEN_HEIGHT; i++){
        for(j=0; j<17; j++){
            gotoxy(0+j,i); cout<<"+";
            gotoxy(WIN_WIDTH-j,i); cout<<"+";
        }
    }
    for ( i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH,i); cout<<"+";
    }
    
}
void genEnemy(int ind){
    enemy[ind]=17+rand()%(33);
}
void drawEnemy(int ind){
    if (enemyFlag[ind]== true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);   cout<<"****";
        gotoxy(enemyX[ind], enemyY[ind]+1);   cout<<" ** ";
        gotoxy(enemyX[ind], enemyY[ind]+2);   cout<<"****";
        gotoxy(enemyX[ind], enemyY[ind]+3);   cout<<" ** ";
    }
    
}
 void eraseEnemy(int ind){
     if (enemyFlag[ind]== true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);   cout<<"    ";
        gotoxy(enemyX[ind], enemyY[ind]+1);   cout<<"    ";
        gotoxy(enemyX[ind], enemyY[ind]+2);   cout<<"    ";
        gotoxy(enemyX[ind], enemyY[ind]+3);   cout<<"    ";
    }
     
 }
  void restenemy(int ind){
      earseEnemy(ind);
      enemyY[ind]=1;
      genEnemy(ind);
  }

  void drawcar(){
      for(int i=0;  i<4; i++){
          for (j= 0; i < 4; j++)
          {
            gotoxy(j+carsPos, i+22); cout<<car[i][j];
          }
          
      }
  }
  void eraseCar(){
      for(int i=0; i<4; i++){
          for (j = 0; j <4; j++)
          {
            gotoxy(j+carsPos, i+22); cout<<" ";
          }
          
      }
  }
  int collision(){
      if (enemy[0]+4>=23)
      {
          if (enemy[0]+ 4 - carsPos >= 0 && enemy[0]+4 - carsPos <9)
          {
              return 1;
          }
          
      }
      return 0;
      
  }
 void gameover(){
     system("cls");
     cout<<endl;
     cout<<"\t\t----------------------------------------"<<endl;
     cout<<"\t\t--------------GAME OVER ----------------"<<endl;
     cout<<"\t\tPress any key to go back to menu,"<<endl;
     getch();
 }
 void updateScore(){
     gotoxy(WIN_WIDTH + 7, 5); cout<<"Score:  "<<score<<endl;
 }
  void instaructions(){
      cout<<"Instaructions"<<endl;
      cout<<"--------------------"<<endl;
      cout<<"Avoid Cars by moving left or right.  "<<endl;
      cout<<"Press a to move left "<<endl;     
      cout<<"Press d to move left "<<endl;     
      cout<<"Press escape to exit "<<endl;     
      cout<<"Press any key to go back to menu "<<endl;     
      getch();
  }
  void play(){
      carsPos =-1 = WIN_WIDTH/2;
      score =0;
      enemyFlag[0]= 1;
      enemyFlag[1]=0;
      enemyY[0] = enemyY[1]=1;

      system("cls");
      drawBorder();
      updateScore();
      genEnemy(0);
      genEnemy(1);

      gotoxy(WIN_WIDTH + 7,2 ); cout<<"Car Game"<<endl;
      gotoxy(WIN_WIDTH + 6,4 ); cout<<"-----------"<<endl;
      gotoxy(WIN_WIDTH + 6,6 ); cout<<"-----------"<<endl;
      gotoxy(WIN_WIDTH + 7,12 ); cout<<"Control "<<endl;
      gotoxy(WIN_WIDTH + 7,13 ); cout<<"------------"<<endl;
      gotoxy(WIN_WIDTH + 2,14 ); cout<<"A key -- left"<<endl;
      gotoxy(WIN_WIDTH + 2,15 ); cout<<" D key  -- Right "<<endl;

      gotoxy(18, 5); cout<<"Press any key to start"<<endl;
      getch();
      gotoxy(18, 5 ); cout<<"                     ";

      while(1){
          if (kbhit()){
              char cg = getch();
              if (ch =='aa' || ch == 'A' )
              {
                 if(carsPos > 18)
                 carsPos -=4;

              }
              if(ch =='d || ch == 'D ){
                  if(carsPos <50)
                  carsPos +=4;
              }
              if( ch==27){
                  break;
              }
              
          }
      
      drawcar();
      drawEnemy(0);
      drawEnemy(1);
      if (collision()==1 )
      {
         gameover();
         return;
      }
      Sleep(50);
      eraseCar();
      eraseenemy(0);
      eraseenemy(1);
       if( enemyY[0] ==10)
       if(enemyFlag[1] ==0)
       enemyFlag[1] ==1;

       if(enemyFlag[0]==1)
       enemyY[0] += 1;
       if (enemy[0]> SCREEN_HEIGHT-4)
       {
           restenemy(0);
           score++;
           updateScore();
       }
       if (enemy[1]> SCREEN_HEIGHT-4)
       {
           restenemy(1);
           score++;
           updateScore();
       }
       
    }
  }

   int main()
   {
       setcursor(0,0);
       srand((unsigned)time(NULL));
       
       do{
           system("cls");
           gotoxy(10, 5); cout<<"-------------------------------";
           gotoxy(10,6); cout<<"|         Car Game             |";
           gotoxy(10,7); cout<<"---------------------------------";
           gotoxy(10,9); cout<<"1. Start Game";
           gotoxy(10,10);cout<<"2. Instructions";
           gotoxy(10,11); cout<<"3. Quit";
           gotoxy(10,13); cout<<"Select option";
           char op = getche();

           if( op=='1') play();
           else if(op=='2') instructions();
           else if(op=='3') exit(0);
       }
   }