#include<iostream>
#include<windows.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
void loading(){
    int char1=177,char2=219,x{583},y{0};
    system("COLOR 0A");
    system("cls");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<flush;
    cout<<setw(72)<<"Game Loading..." ;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t";
    for (int i=0;i<=60;i++)
    {
        cout<<(char)char1;
    }cout<<"\r";
    cout<<"\t\t\t\t";
     for (int i=0;i<=60;i++)
    {
        cout<<(char)char2;
        y=x-i*10;
        if(y<0){
            y=0;
        }
        Sleep(y);
    }
}
