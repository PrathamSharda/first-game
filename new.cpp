#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include "hellowindows.cpp" 
using namespace std;
int main(){
    cout<<flush;
int a,b=rand()%50,x=1,guessm{0},choice{3};
loading();
system("cls");
cout<<flush;
cout<<setw(65)<<"Welcome!"<<endl;
Sleep(100);
    cout<<setw(37+40)<<"To the Guessing Game Show,"<<endl;
    cout<<setw(45+40)<<"in which you guess the number between 1 and 50"<<endl;
    cout<<setw(40+40)<<" and find if your guess is correct."<<endl;
    cout<<endl;
while (x==1){
    cout<<setw(0)<<"Make your Guess:";
    cin>>guessm;
    if(b==guessm){
        cout<<setw(65)<<(char)1<<" You have won!!!!!!!";
        break;
        x=0;}
    else{
        if(choice==0){
            cout<<setw(65)<<"LOOSER "<<"number is:"<<b;
            x==0;
            break;
        }
        else{
            cout<<setw(65)<<"Guess again";
            choice--;
        }
    }
    cout<<endl;

    system("pause");
    system("cls");
    

}
}


