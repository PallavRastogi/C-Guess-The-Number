#include <iostream>
using namespace std;

int main(){
    cout<<"-- Welcome To My Game --\n";
    cout<<"RULES -\n#1) You Have to Guess a Number Between 1-100.\n#2) You Will Get 7 Chances/guesses.\n#3) After Every Guess You Will Get a Feedback Indicating Whether You Guessed Too High Or Too Low.\n#4) Good Luck! :D\n\n";
    int secret = 34;
    int ui;
    bool exit_number = 0;
    
    for(int g = 1; g < 8; g++){
        cout<<"------------------\nGuess #"<<g<<"-\nEnter Your Guess: \n";
        cin>>ui;
        cout<<"\n";
        
        if(ui == secret){
            exit_number = 1;
            break;
        }
        ddvfesgtrthtyg
            
            ffrgfg
            
            
            
            tff
        else if(ui<secret){
            cout<<"You Guessed Too Low, Try Entering a Higher Number!\n\n";
        }
        
        else{
            cout<<"You Guessed Too High, Try Entering a Lower Number!\n\n";
        }
    }
    if(exit_number == 0){
        cout<<"Your 7 Guesses are over, better luck next time!";}
    else{cout<<"Congratulations You Won!!!\nThe Secret Number Was "<<secret;}
        
    
    return 0;
}


// can add random number functionality
// same number each time prog is run
// compile to exe by "g++ <filename.cpp>"
//end of file//
//
