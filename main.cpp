#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>

using namespace std;
char maporg[21][20]={
"7########8########9",
"|...g....|........|",
"|.##.###.|.###.##.|",
"|................g|",
"|.##.|.##8##.|.##.|",
"|....|...|...|....|",
"1##9.4##.|.##6.7##3",
"   |.|.......|.|   ",
"7##3.|.78 89.|.1##9",
"<   ...||@||...   >",
"1##9.|.12#23.|.7##3",
"   |.|.......|.|   ",
"7##3.|.##8##.|.1##9",
"|........|........|",
"|.#9.###.|.###.7#.|",
"|..|...........|..|",
"4#.|.|.##8##.|.|.#6",
"|....|...|...|g...|",
"|.###2##.|.##2###.|",
"|g................|",
"1#################3"};
//y

char map[21][20]={
"7########8########9",
"|...g....|........|",
"|.##.###.|.###.##.|",
"|................g|",
"|.##.|.##8##.|.##.|",
"|....|...|...|....|",
"1##9.4##.|.##6.7##3",
"   |.|.......|.|   ",
"7##3.|.78 89.|.1##9",
"<   ...||@||...   >",
"1##9.|.12#23.|.7##3",
"   |.|.......|.|   ",
"7##3.|.##8##.|.1##9",
"|........|........|",
"|.#9.###.|.###.7#.|",
"|..|...........|..|",
"4#.|.|.##8##.|.|.#6",
"|....|...|...|g...|",
"|.###2##.|.##2###.|",
"|g................|",
"1#################3"};

//Declaration
typedef struct coord{
                    int y;
                    int x;
                    }coord;
bool Game_running=true;
char k;
coord Pacman;
coord ghosta;
coord ghostb;
coord ghostc;
coord ghostd;
 char a='R';
 char b='L';
 char c='D';
 char d='U';
 bool s=true;
 int v=0;
//---------------------------


void MovGhosta(){

if(map[ghosta.y][ghosta.x]==map[ghosta.y][17]){ a='L';}
if(map[ghosta.y][ghosta.x]==map[ghosta.y][1]){ a='R';}


if(a=='R'){

      if((map[ghosta.y][ghosta.x+1]==' ')||(map[ghosta.y][ghosta.x+1]=='.')||(map[ghosta.y][ghosta.x+1]==map[Pacman.y][Pacman.x])){

          map[ghosta.y][ghosta.x]=' ';
          ghosta.x=ghosta.x+1;
          if(map[ghosta.y][ghosta.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghosta.y][ghosta.x]=='.') { map[ghosta.y][ghosta.x-1]='.';}
          map[ghosta.y][ghosta.x]='g';

                                                                }
                        }


if(a=='L'){

      if((map[ghosta.y][ghosta.x-1]==' ')||(map[ghosta.y][ghosta.x-1]=='.')||(map[ghosta.y][ghosta.x-1]==map[Pacman.y][Pacman.x])){

          map[ghosta.y][ghosta.x]=' ';
          ghosta.x=ghosta.x-1;
          if(map[ghosta.y][ghosta.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghosta.y][ghosta.x]=='.') { map[ghosta.y][ghosta.x+1]='.';}
          map[ghosta.y][ghosta.x]='g';

                                                                }
                        }



}
void MovGhostb(){

if(map[ghostb.y][ghostb.x]==map[ghostb.y][17]){ b='L';}
if(map[ghostb.y][ghostb.x]==map[ghostb.y][1]){ b='R';}


if(b=='R'){

      if((map[ghostb.y][ghostb.x+1]==' ')||(map[ghostb.y][ghostb.x+1]=='.')||(map[ghostb.y][ghostb.x+1]==map[Pacman.y][Pacman.x])){

          map[ghostb.y][ghostb.x]=' ';
          ghostb.x=ghostb.x+1;
          if(map[ghostb.y][ghostb.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghostb.y][ghostb.x]=='.') { map[ghostb.y][ghostb.x-1]='.';}
          map[ghostb.y][ghostb.x]='g';

                                                                }
                        }


if(b=='L'){

      if((map[ghostb.y][ghostb.x-1]==' ')||(map[ghostb.y][ghostb.x-1]=='.')||(map[ghostb.y][ghostb.x-1]==map[Pacman.y][Pacman.x])){

          map[ghostb.y][ghostb.x]=' ';
          ghostb.x=ghostb.x-1;
          if(map[ghostb.y][ghostb.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghostb.y][ghostb.x]=='.') { map[ghostb.y][ghostb.x+1]='.';}
          map[ghostb.y][ghostb.x]='g';

                                                                }
                        }



}
void MovGhostc(){

if(map[ghostc.y][ghostc.x]==map[17][ghostc.x]){ c='U';}
if(map[ghostc.y][ghostc.x]==map[1][ghostc.x]){ c='D';}


if(c=='D'){

      if((map[ghostc.y+1][ghostc.x]==' ')||(map[ghostc.y+1][ghostc.x]=='.')||(map[ghostc.y+1][ghostc.x]==map[Pacman.y][Pacman.x])){

          map[ghostc.y][ghostc.x]=' ';
          ghostc.y=ghostc.y+1;
          if(map[ghostc.y][ghostc.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghostc.y][ghostc.x]=='.') { map[ghostc.y-1][ghostc.x]='.';}
          map[ghostc.y][ghostc.x]='g';

                                                                }
                        }


if(c=='U'){

     if((map[ghostc.y-1][ghostc.x]==' ')||(map[ghostc.y-1][ghostc.x]=='.')||(map[ghostc.y-1][ghostc.x]==map[Pacman.y][Pacman.x])){

          map[ghostc.y][ghostc.x]=' ';
          ghostc.y=ghostc.y-1;
          if(map[ghostc.y][ghostc.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghostc.y][ghostc.x]=='.') { map[ghostc.y+1][ghostc.x]='.';}
          map[ghostc.y][ghostc.x]='g';

                                                                }
                        }



}
void MovGhostd(){

if(map[ghostd.y][ghostd.x]==map[17][ghostd.x]){ d='U';}
if(map[ghostd.y][ghostd.x]==map[1][ghostd.x]){ d='D';}


if(d=='D'){

      if((map[ghostd.y+1][ghostd.x]==' ')||(map[ghostd.y+1][ghostd.x]=='.')||(map[ghostd.y+1][ghostd.x]==map[Pacman.y][Pacman.x])){

          map[ghostd.y][ghostd.x]=' ';
          ghostd.y=ghostd.y+1;
          if(map[ghostd.y][ghostd.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghostd.y][ghostd.x]=='.') { map[ghostd.y-1][ghostd.x]='.';}
          map[ghostd.y][ghostd.x]='g';

                                                                }
                        }


if(d=='U'){

     if((map[ghostd.y-1][ghostd.x]==' ')||(map[ghostd.y-1][ghostd.x]=='.')||(map[ghostd.y-1][ghostd.x]==map[Pacman.y][Pacman.x])){

          map[ghostd.y][ghostd.x]=' ';
          ghostd.y=ghostd.y-1;
          if(map[ghostd.y][ghostd.x]==map[Pacman.y][Pacman.x]){Game_running=false;}
          if(map[ghostd.y][ghostd.x]=='.') { map[ghostd.y+1][ghostd.x]='.';}
          map[ghostd.y][ghostd.x]='g';

                                                                }
                        }



}

void MovPacman(){

//Pacman Right MOV
    if(k=='R'){

      if((map[Pacman.y][Pacman.x+1]==' ')||(map[Pacman.y][Pacman.x+1]=='.')||(map[Pacman.y][Pacman.x]==map[9][17])){
          map[Pacman.y][Pacman.x]=' ';
          Pacman.x=Pacman.x+1;
          if(map[Pacman.y][Pacman.x]==map[9][18]){ Pacman.x=1;}
          map[Pacman.y][Pacman.x]='@';
                                                                }
                        }
    if(GetAsyncKeyState(VK_RIGHT)){
      if((map[Pacman.y][Pacman.x+1]==' ')||(map[Pacman.y][Pacman.x+1]=='.')){k='R';}}



//Pacman LEFT MOV
    if(k=='L'){

      if((map[Pacman.y][Pacman.x-1]==' ')||(map[Pacman.y][Pacman.x-1]=='.')||(map[Pacman.y][Pacman.x]==map[9][1])){
          map[Pacman.y][Pacman.x]=' ';
          Pacman.x=Pacman.x-1;
          if(map[Pacman.y][Pacman.x]==map[9][0]){ Pacman.x=17;}
          map[Pacman.y][Pacman.x]='@';
                                                                 }
                        }
    if(GetAsyncKeyState(VK_LEFT)){
      if((map[Pacman.y][Pacman.x-1]==' ')||(map[Pacman.y][Pacman.x-1]=='.')){k='L';}}



//Pacman UP MOV
    if(k=='U'){
      if((map[Pacman.y-1][Pacman.x]==' ')||(map[Pacman.y-1][Pacman.x]=='.')){
          map[Pacman.y][Pacman.x]=' ';
          Pacman.y=Pacman.y-1;

          map[Pacman.y][Pacman.x]='@';
                                                                }
                        }
    if(GetAsyncKeyState(VK_UP)){
      if  ((map[Pacman.y-1][Pacman.x]==' ')||(map[Pacman.y-1][Pacman.x]=='.')){k='U';}}


//Pacman DOWN MOV
    if(k=='D'){
      if((map[Pacman.y+1][Pacman.x]==' ')||(map[Pacman.y+1][Pacman.x]=='.')){
          map[Pacman.y][Pacman.x]=' ';
          Pacman.y=Pacman.y+1;

          map[Pacman.y][Pacman.x]='@';
                                                                }
                        }
    if(GetAsyncKeyState(VK_DOWN)){
      if ((map[Pacman.y+1][Pacman.x]==' ')||(map[Pacman.y+1][Pacman.x]=='.')){k='D';}}

              }

void Tweak(){
    map[Pacman.y][Pacman.x]=254;
    map[9][0]=174;
    map[9][18]=175;

    for(int y=0;y<=21;y++){
      for(int j=0;j<=20;j++){
        if(map[y][j]=='#'){
          map[y][j]=205;  }

        if(map[y][j]=='7'){
          map[y][j]=201;  }

        if(map[y][j]=='9'){
          map[y][j]=187;  }

        if(map[y][j]=='1'){
          map[y][j]=200;  }

        if(map[y][j]=='3'){
          map[y][j]=188;  }

        if(map[y][j]=='|'){
          map[y][j]=186;  }

        if(map[y][j]=='g'){
          map[y][j]=190;  }

        if(map[y][j]=='8'){
          map[y][j]=203;  }

        if(map[y][j]=='6'){
          map[y][j]=185;  }

        if(map[y][j]=='2'){
          map[y][j]=202;}

        if(map[y][j]=='4'){
          map[y][j]=204;  }

                           }
                          }
              }

void ShowHomeScreen(){

char a[29]="############################";
for(int i=0;i<28;i++){
    a[i]=205;
    }
    char ul=201;
    char ur=187;
    char dl=200;
    char dr=188;
    char b =186;



cout<<ul<<a<<ur<<endl;
cout<<b<<" Que Voulez Vous Faire ?    "<<b<<"\n"<<b<<"                            "<<b<<endl;
cout<<b<<"    1) Commencer (continue) "<<b<<"\n";
cout<<b<<"    2) Quiter               "<<b<<endl;
cout<<b<<"    3) Aide                 "<<b<<endl;
cout<<b<<"                            "<<b<<endl;
cout<<dl<<a<<dr<<endl;

}
void HomeScreen(){
 char t=190;

 if(s){

PlaySound("1.wav", NULL, SND_FILENAME | SND_ASYNC);}
SHC:
ShowHomeScreen();

int choix;
cin>>choix;

switch(choix){

case 1:
       PlaySound("2.wav", NULL, SND_FILENAME | SND_LOOP|SND_ASYNC);
       k='\0';
       break;
case 2: exit(0);
        break;

case 3:
       cout<<"\n"<<endl;
       system("cls");
       cout<<"Astuce : Evitez "<<t<<" et mangez . et "<<endl;
       cout<<"Control:\n Utiliser les fleches de direction pour bouger pac man\n";
       cout<<" Utilisez la touch Echap pour mettre le jeu en pause \n \n"<<endl;
       system("pause");
       system("cls");
       goto SHC;


        break;
default:
    system("cls");
    cout<<"SVP Choisissez 1 ou 2 ou 3  \n \n"<<endl;
    system("pause");
    system("cls");
    goto SHC;
}
}

void cond(){

if (GetAsyncKeyState(VK_ESCAPE)){
   system("cls");
      s=false;
    PlaySound("3.wav", NULL, SND_FILENAME | SND_ASYNC);
    HomeScreen();

}
}




int main()
{
cout<<"! This Game was a fun made enjoy it !"<<endl;
system("pause");
system("cls");
Game_running:
system("cls");
int Compteur;
char z;
char m;
HomeScreen();
v=2;
 looselife:
   PlaySound("2.wav", NULL, SND_FILENAME | SND_LOOP|SND_ASYNC);

   Pacman.y=9;
   Pacman.x=9;

   ghosta.y=19;
   ghosta.x=1;

   ghostb.y=3;
   ghostb.x=17;

   ghostc.y=1;
   ghostc.x=4;

   ghostd.y=17;
   ghostd.x=14;

while(Game_running){
cond();
system("cls");

 for(int i=0;i<=20;i++) {cout << map[i]<< endl;}
 cout <<"Vie : "<<v<< endl;



MovPacman();
MovGhosta();
MovGhostb();
MovGhostc();
MovGhostd();
Sleep(75);
Tweak();


Compteur=0;
for(int y=0;y<=21;y++){
    for(int j=0;j<=20;j++){
        if(map[y][j]=='.'){Compteur++; }
                         }}

if(Compteur==0){
                     system("cls");
                     cout<<"!! Vous Avez Gagnez !!"<<endl;
                     PlaySound("5.wav", NULL, SND_FILENAME | SND_ASYNC);
                     system("pause>nul");
                     win:
                     k='\0';
                     cout<<"return to main menu ?? y/n"<<endl;
                     system("pause>nul");
                     cin>>m;


                     switch(m){

                     case 'y':
                              Game_running=true;
                              for(int y=0;y<=21;y++){
                                  for(int j=0;j<=20;j++){ map[y][j]= maporg[y][j];}
                                  }
                              goto Game_running;
                              break;

                     case 'n':
                              exit(0);
                              break;

                     default:
                             system("cls");
                             cout<<"SVP Choisissez y ou n \n \n"<<endl;
                             system("pause");
                             system("cls");
                             goto win;
                               }
                               }


}
PlaySound("4.wav", NULL, SND_FILENAME | SND_ASYNC);

if (v>0){
     system("cls");
     cout<<"Vous Avez "<<v<<" Vie Restante"<<endl;
     system("pause");
     Sleep(100);


     k='\0';
     v--;
     Game_running=true;
     map[Pacman.y][Pacman.x]=' ';
     map[ghosta.y][ghosta.x]=' ';
     map[ghostb.y][ghostb.x]=' ';
     map[ghostc.y][ghostc.x]=' ';
     map[ghostd.y][ghostd.x]=' ';

     map[9][9]  = '@';
     map[19][1] = 'g';
     map[3][17] = 'g';
     map[1][4]  = 'g';
     map[17][14]= 'g';

     goto looselife;
}

else{
 retry:
 system("cls");
 cout<<"Vous Avez Perdu"<<endl;
 Sleep(100);
 k='\0';
 cout<<"return to main menu ?? y/n"<<endl;
 system("pause>nul");
 cin>>z;


switch(z){

case 'y':
        Game_running=true;

        for(int y=0;y<=21;y++){
                for(int j=0;j<=20;j++){ map[y][j]= maporg[y][j];}
                              }
         goto Game_running;
         break;

case 'n':
        exit(0);
        break;

default:
       system("cls");
       cout<<"SVP Choisissez y ou n \n \n"<<endl;
       system("pause");
       system("cls");
       goto retry;
         }}



return 0;
}
