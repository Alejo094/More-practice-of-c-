
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string board[9]={" "," "," "," "," "," "," "," "," "};

void display_board_guide();

void display_board();

void update_board();

void update_board_pc();

void easy_game();

void expt_game();

void dif_game();

int pc_player_turn(int i);

void human_player_turn();

int pc_player_turn_win(int x);

int pc_player_turn_expt(int x);

bool check_winner();

int i=0;
int x=0;
int y=0;

int position=0;
string player_choice="";
string pc_player="";
string human_player="";
int counter=0;
bool first_strat=false;
bool second_strat=false;
bool third_strat=false;
bool fourth_strat=false;

int main()
{
    
    int opcion=0;
    
    cout<<"Bienvenido a tricky nacho!"<<"\n\n";
    
    cout<<"Por favor escoga su nivel de dificultad para el juego?"<<"\n\n";
    
    cout<<"1. Facil \n";
    cout<<"2. Dificil \n";
    cout<<"3. Experto \n\n";
    cout<< "Opcion ? \n";
    
    cout<<"\n";
    
    cin>>opcion;
    
    switch(opcion){
        
        case 1:
        
        easy_game();
        exit(1);
        
        case 2:
        
        dif_game();
        exit(1);
        
        case 3:
        
        expt_game();
        exit(1);
        
        default:
        
        cout<<"Opcion incorrecta! Intente despues"<<"\n";
    }
    

    
}

void display_board(){
    
    cout<<"\n    |    |    "<<"\n";
    cout<<"  "<<board[0]<<" | "<<board[1]<< "  | "<<board[2] << "\n";
    cout<<"--------------\n";
    cout<<"    |    |    \n";
    cout<<"  " << board[3] <<" | " << board[4]<< "  | "<< board[5] << "\n";
    cout<<"--------------\n";
    cout<<"    |    |    \n";
    cout<<"  " << board[6] <<" | " << board[7]<< "  | "<< board[8] << "\n";
}

void display_board_guide(){
    
    cout<<"\n    |    |    "<<"\n";
    cout<<" 0  | 1  |  2"<<"\n";
    cout<<"--------------\n";
    cout<<"    |    |    \n";
    cout<<" 3  | 4  |  5"<<"\n";
    cout<<"--------------\n";
    cout<<"    |    |    \n";
    cout<<" 6  | 7  |  8"<<"\n";
}


void update_board(){
    
    system("clear");
    
    board[position]=human_player;
    
    display_board();
}

void update_board_pc(){

    system("clear");
    
    board[position]=pc_player;
    
    display_board();
}

int pc_player_turn(int i){
    
            if(check_winner()){
                return 1;
            }
            
             
            if (i==8){
                
                return 1;
            }
                
            else{
                
                position=i;
                
                if(board[position] == " " ){
                
                update_board_pc();
                
                return 1;
                
                }
                
                else{
                
                    return (pc_player_turn(i+1));
                }
            
            }
            
        }
        
void human_player_turn(){
    
       cout<<"Seleccione una posicion (0-8) para poner su simbolo?"<<"\n";
       
        cin>>position;
        
        if(board[position] == " " ){
        
        update_board();
        
        }
        
        else{
        
        do{
            
            cout<<"Ya hay un simbolo en esta posicion por favor escoge otro lado!"<<"\n";
            
            cout<<"\nSeleccione una posicion (0-8) para poner su simbolo?"<<"\n";
            
            cin>>position;   
              
        }
        while(board[position] != " ");
        
        update_board();
        
        if( check_winner()==true){
            
        }
    
        }
}

bool check_winner(){
    
    if((board[0]==board[3]) && (board[3]==board[6]) && board[0] != " "){
        
        return true;
    }
    else if ((board[1]==board[4]) && (board[4]==board[7]) && board[1] != " "){
        
        return true;
    }

    else if ((board[2]==board[5]) && (board[5]==board[8]) && board[2] != " "){
        
        return true;
    }
    else if ((board[0]==board[1]) && (board[1]==board[2]) && board[0] != " "){
        
        return true;
    }
    else if ((board[3]==board[4]) && (board[4]==board[5]) && board[3] != " "){
        
        return true;
    }
    else if ((board[6]==board[7]) && (board[7]==board[8]) && board[6] != " "){
        
        return true;
    }
    else if ((board[0]==board[4]) && (board[4]==board[8]) && board[0] != " "){
        
        return true;
    }
    else if ((board[2]==board[4]) && (board[4]==board[6]) && board[2] != " "){
        
        return true;
    }

    return false;
    
}

int pc_player_turn_win(int x){

    if(check_winner()){
        return 1;
    }
           
    if (counter==4){
                
        return 1;
    }
                
    else{
                
        
        if(board[0] == " " && board[1] !=" " && counter==0){
            
            position=0;
            
            update_board_pc();
            
            first_strat=true;
            
            return 1;
                
        }

        
        if(board[3] != " " && board[4]==" " && counter==0){
            
            position=4;
            
            update_board_pc();
            
            second_strat=true;
            
            return 1;
        }
        
        if(first_strat==false && second_strat==false){
            
            pc_player_turn(i);
        }
        
        
        
        if(first_strat==true){
            
            if(board[4] == " "){
            
                position=4;
            
                update_board_pc();
                    
                return 1;
            
            }
            else if((board[0]==board[4]) && (board[8]==" ") && board[0] != " "){
            
                position=8;
            
                update_board_pc();
                    
                return 1;
                
            }
            else if(board[2] == " "){
                
                position=2;
                
                update_board_pc();
                        
                return 1;
                
            }
        
             else if(board[8] == " "){
                 
                 position=8;
                  
                update_board_pc();
                        
                return 1;
             }
                
            else{
                
                
                for(y=0; y<8;y+=1){
                    
                    if(board[y]==" "){
                        
                        position=y;
                        break;
                    }
            }
          
            update_board_pc();
                    
            return 1;
        }
        
            
        }
        
        if(second_strat==true){
            
            if(board[7]==" "){
                
                position=7;
                
                update_board_pc();
                
                return 1;
            }
            else if(board[6]==" "){
                
                position=6;
                update_board_pc();
                return 1;
            }
            else if(board[2]==" "){
                
                position=2;
                update_board_pc();
                return 1;
            }
            else if(board[8]==" "){
                
                position=8;
                update_board_pc();
                return 1;
            }
            else{
                
                
                for(y=0; y<8;y+=1){
                    
                    if(board[y]==" "){
                        
                        position=y;
                        break;
                    }
                }
          
            update_board_pc();
                    
            return 1;


            }
      }
        
            
    }
    
}


int pc_player_turn_expt(int x){
    
    if(check_winner()){
        return 1;
    }
           
    if (counter==4){
                
        return 1;
    }
                
    else{
                
        
        if(board[1] != " " && board[4] ==" " && counter==0){
            
            position=4;
            
            update_board_pc();
            
            third_strat=true;
            
            return 1;
                
        }

        
        if(board[4] == " " && board[2] !=" " && counter==0){
            
            position=4;
            
            update_board_pc();
            
            fourth_strat=true;
            
            return 1;
        }
        
        if(third_strat==false && fourth_strat==false){
            
            pc_player_turn(i);
        }
        

        if(third_strat==true){
            
            if(board[6] == " "){
            
                position=6;
            
                update_board_pc();
                    
                return 1;
            
            }
            else if((board[4]==board[6]) && (board[2]==" ") && board[4] != " "){
            
                position=2;
            
                update_board_pc();
                    
                return 1;
                
            }
            else if(board[0] == " "){
                
                position=0;
                
                update_board_pc();
                        
                return 1;
                
            }
        
             else if((board[0]==board[6]) && (board[3]==" ") && board[0] != " "){
                 
                position=3;
                  
                update_board_pc();
                        
                return 1;
             }
             
             else if((board[0]==board[4]) && (board[8]==" ") && board[0] != " "){
                 
                position=8;
                  
                update_board_pc();
                        
                return 1;
                 
                 
             }
                
            else{
                
                
                for(y=0; y<8;y+=1){
                    
                    if(board[y]==" "){
                        
                        position=y;
                        break;
                    }
                }
          
            update_board_pc();
                    
            return 1;
       
            }
        }

        if(fourth_strat==true){
            
            if(board[0] == " "){
            
                position=0;
            
                update_board_pc();
                    
                return 1;
            
            }
            else if((board[0]==board[4]) && (board[8]==" ") && board[0] != " "){
            
                position=8;
            
                update_board_pc();
                    
                return 1;
                
            }
            else if(board[5] == " "){
                
                position=5;
                
                update_board_pc();
                        
                return 1;
                
            }
        
             else if((board[4]==board[5]) && (board[3]==" ") && board[4] != " "){
                 
                position=3;
                  
                update_board_pc();
                        
                return 1;
             }
             
                 
             
                
            else{
                
                
                for(y=0; y<8;y+=1){
                    
                    if(board[y]==" "){
                        
                        position=y;
                        break;
                    }
                }
          
            update_board_pc();
                    
            return 1;
            
                
            }
        }
    }
    

}



void easy_game(){

    system("clear");
    
    cout<<"Nivel Facil!"<<"\n\n";
    
    display_board_guide();
    
    do{
        
        cout<<"\nDesea ser X o O (mayuscula) ?"<<"\n\n";
    
        cin>>player_choice;

    }
    
    while (player_choice!="X" && player_choice!= "O");
    

        human_player=player_choice;
        
        if (human_player=="X"){
            
            pc_player="O";
        }
        else{
            
            pc_player="X";
        }
        
        
        do{
            
            human_player_turn();
            
            pc_player_turn(i);
            
            counter+=1;
        }
        
        while(check_winner()==false && counter!=5);
        
        if (check_winner()){
            
            cout<<"\nFelicitacion ha ganado!"<<"\n";         
        }
        
        if(check_winner()!=true && counter==5){
            
            cout<<"\nJuego empatado!"<<"\n";
        }
}


void dif_game(){
    
    system("clear");
    
    cout<<"Nivel Dificil"<<"\n\n";
    
    display_board_guide();
    
    do{
        
        cout<<"\nDesea ser X o O (mayuscula) ?"<<"\n\n";
    
        cin>>player_choice;

    }
    
    while (player_choice!="X" && player_choice!= "O");
    

        human_player=player_choice;
        
        if (human_player=="X"){
            
            pc_player="O";
        }
        else{
            
            pc_player="X";
        }
        
        
        do{
            
            human_player_turn();
        
            pc_player_turn_win(x);
            
            counter+=1;
        }
        
        while(check_winner()==false && counter!=5);
        
        if (check_winner()){
            
            cout<<"\nFelicitacion ha ganado!"<<"\n";         
        }
        
        if(check_winner()!=true && counter==5){
            
            cout<<"\nJuego empatado!"<<"\n";
        }
    
}


void expt_game(){
    
    system("clear");
    
    cout<<"Nivel Experto!"<<"\n\n";
    
    display_board_guide();
    
    do{
        
        cout<<"\nDesea ser X o O (mayuscula) ?"<<"\n\n";
    
        cin>>player_choice;

    }
    
    while (player_choice!="X" && player_choice!= "O");
    

        human_player=player_choice;
        
        if (human_player=="X"){
            
            pc_player="O";
        }
        else{
            
            pc_player="X";
        }
        
        
        do{
            
            human_player_turn();
        
            pc_player_turn_expt(x);
            
            counter+=1;
        }
        
        while(check_winner()==false && counter!=5);
        
        if (check_winner()){
            
            cout<<"\nFelicitacion ha ganado!"<<"\n";         
        }
        
        if(check_winner()!=true && counter==5){
            
            cout<<"\nJuego empatado!"<<"\n";
        }
    


}

