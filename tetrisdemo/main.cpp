#include <iostream>
#include <Windows.h>

char mapp[21][12];
char temp[12];
void printmap();
int lastpiecehit();
int gameover();

int main(){
    for(int i=0;i<20;i++){
        mapp[i][0]='|';
        mapp[i][11]='|';
    }
    for(int i=1;i<11;i++){
        mapp[20][i]='-';
    }
    mapp[20][0]='+';
    mapp[20][11]='+';
    system("color 0a");
    printmap();
    while(!gameover()){
        if(lastpiecehit()){
            break;
        }
        for(int i=0;i<20;i++){
            for(int ii=1;ii<11;ii++){
                mapp[19-i][ii]=mapp[18-i][ii];
            }
        }
        printmap();
        Sleep(200);
        system("cls");
    }
    return 0;
}

void printmap(){
    for(int i=0;i<21;i++){
        for(int ii=0;ii<12;ii++){
            std::cout<<mapp[i][ii];
        }
        std::cout<<"\n";
    }
}
int lastpiecehit(){
    return 0;
}
int gameover(){
    return 0;
}
