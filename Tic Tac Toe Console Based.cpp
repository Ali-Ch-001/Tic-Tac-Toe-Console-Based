#include <iostream>
using namespace std;


struct TicTacToe
{
    char **p;
    char nott;
    char Tick;
    char symbol;
    int x; //player turns
    int i; //game stopper
    char w; //winner
};

void tablepointing(TicTacToe &T1)
{
        T1.p = new char *[3];
    for (int i = 0; i<3; i++)
    {
        T1.p[i] = new char [3];
    }
}
void maketable(TicTacToe T1)
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
         T1.p[i][j] = '*';
        }
    }
    
}
void printtable(const TicTacToe &T1)
{

    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
         cout<<"    "<<T1.p[i][j]<<"    ";
        } cout<<endl;
    }
}

void userassign(TicTacToe &T1)
{
    switch (T1.x) {
         
        
    case 1 ... 3 :
    while (T1.p[0][T1.x-1] == 'X' || T1.p[0][T1.x-1] == 'O')
    {
        cout<<"Wrong Input Try again";
        cin>>T1.x;
        
    }
            break;
        case 4 ... 6 :
    while (T1.p[1][T1.x-4] == 'X' || T1.p[1][T1.x-4] == 'O')
    {
        cout<<"Wrong Input Try again";
        cin>>T1.x;
        
    }
            break;
        case 7 ... 9 :
    while (T1.p[2][T1.x-7] == 'X' || T1.p[2][T1.x-7] == 'O')
    {
        cout<<"Wrong Input Try again";
        cin>>T1.x;
        
    }
            break;
    }
    switch (T1.x) {
         
        
        case 1 ... 3 :
            T1.p[0][T1.x-1] = T1.symbol ;
          
            
            break;

    case 4 ... 6 :
            
            T1.p[1][T1.x-4] = T1.symbol ;
            
            break;

    case 7 ... 9 :
            
            T1.p[2][T1.x-7] = T1.symbol ;
            
            break;
    default :
        cout<<"Wrong Input \n";
           
            break;

    }
}
void gameover(TicTacToe &T1)
{
    if( ( T1.p[0][0] == 'X'  && T1.p[0][2] == 'X' && T1.p[0][1] == 'X') || ( T1.p[0][0] == 'O'  && T1.p[0][2] == 'O' && T1.p[0][1] == 'O') )
    {
        T1.w = T1.p[0][0];
        T1.i = 9;
    }
   else if( ( T1.p[1][0] == 'X'  && T1.p[1][2] == 'X' && T1.p[1][1] == 'X' ) || ( T1.p[1][0] == 'O'  && T1.p[1][2] == 'O' && T1.p[1][1] == 'O' ) )
    {
        T1.w = T1.p[1][0];
        T1.i = 9;
    }
   else if( ( T1.p[2][0] == 'X'  && T1.p[2][2] == 'X' && T1.p[2][1] == 'X') || ( T1.p[2][0] == 'O'  && T1.p[2][2] == 'O' && T1.p[2][1] == 'O') )
    {
        T1.w = T1.p[2][0];
        T1.i = 9;
    }
    
   else if( ( T1.p[0][0] == 'X'  && T1.p[1][0] == 'X' && T1.p[2][0] == 'X')|| ( T1.p[0][0] == 'O'  && T1.p[1][0] == 'O' && T1.p[2][0] == 'O') )
    {
        T1.w = T1.p[0][0];
        T1.i = 9;
    }
   else if( ( T1.p[0][1] == 'X' && T1.p[1][1] == 'X' && T1.p[2][1] == 'X') || ( T1.p[0][1] == 'O' && T1.p[1][1] == 'O' && T1.p[2][1] == 'O') )
    {
        T1.w = T1.p[0][1];
        T1.i = 9;
    }
  
    else if( ( T1.p[0][2] == 'X' && T1.p[1][2] == 'X' && T1.p[2][2] == 'X' )||( T1.p[0][2] == 'O' && T1.p[1][2] == 'O' && T1.p[2][2] == 'O' ) )
    
    {
        T1.w = T1.p[0][2];
        T1.i = 9;
    }
   else if( ( T1.p[0][0] == 'X' && T1.p[1][1] == 'X' && T1.p[2][2] == 'X' )|| ( T1.p[0][0] == 'O' && T1.p[1][1] == 'O' && T1.p[2][2] == 'O' )  )
    {
        T1.w = T1.p[0][0];
        T1.i = 9;
    }
   else if( ( T1.p[0][2] == 'X' && T1.p[1][1] == 'X' && T1.p[2][0] == 'X')|| ( T1.p[0][2] == 'O' && T1.p[1][1] == 'O' && T1.p[2][0] == 'O'))
    {
        T1.w = T1.p[0][2];
        T1.i = 9;
    }
   else
   {
       T1.i++;
   }

   
}


void userinput(TicTacToe &T1)
{
    T1.i = 0;
     T1.x = 0;
    T1.nott ='X';
    T1.Tick ='O';

    int x = 1 ;
    
    while(T1.i != 9){
        if (x == 1){
           cout<<"Enter a move pl \n";
            cin>>T1.x;
            T1.symbol = T1.nott;
            userassign(T1);
            printtable(T1);
            x = 2;
        }
        gameover(T1);
        if(T1.i == 9){ break; }
        
        if (x == 2){
        cout<<"Enter a move p2 \n";
            cin>>T1.x;
            T1.symbol = T1.Tick;
            userassign(T1);
            printtable(T1);
            x = 1;
        }
        gameover(T1);
        if(T1.i == 9) { break; }
            
        
        }
    
}
void winner(const TicTacToe &T1)
{
    if (T1.w == 'X')
    {
        cout<<"P1 is the winner \n";
        
    }
    else if (T1.w == 'O')
    {
        cout<<"P2 is the winner \n";
        
    }
    else{
        cout<<"The Match is a Draw \n";
    }
}

int main() {
    
    TicTacToe T1;
    tablepointing(T1);
    maketable(T1);
    printtable(T1);
    userinput(T1);
    winner(T1);
    
    return 0;
}
