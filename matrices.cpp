#include <stdio.h>
#include <iostream>
#define N 30
#define M 80

#define C 40
#define R 20

using namespace std;

void inicializar();
void llenarBordes();
void imprimirMatriz();
void llenarDiagonales();
void imprimirMatriz_V();

void Figura_A();
void Figura_B();
void Figura_C();
void Figura_D();
void Figura_Vertical();
void Figura_Vertical_vertices();

void inicializar_V();



char matriz [N][M];

char matriz_2 [C][R];

int main()
{
    
    int opcion=0;
    
    cout<<"Bienvenido"<<"\n\n";
    
    cout<<"Por favor escoga cual forma del challenge 7 desea construir?"<<"\n\n";
    
    cout<<"1. Imprimir figura A \n";
    cout<<"2. Imprimir figura B \n";
    cout<<"3. Imprimir figura C \n";
    cout<<"4. Imprimir figura D \n";
    cout<<"5. Imprimir figura Vertical \n\n";
    
    cout<<"\n";
    
    cin>>opcion;
    
    switch(opcion){
        
        case 1:
        
        inicializar(); 
        llenarBordes();
        
        Figura_A();
        exit(1);
        
        case 2:
        
        inicializar(); 
        llenarBordes();
        
        Figura_B();
        exit(1);
        
        case 3:
        
        inicializar(); 
        llenarBordes();

        Figura_C();
        exit(1);
        
        case 4:
        
        inicializar(); 
        llenarBordes();
        
        Figura_D();
        exit(1);
        
        case 5:
        
        inicializar_V();
        Figura_Vertical();
        Figura_Vertical_vertices();
        
        imprimirMatriz_V();
        exit(1);
        
        
        default:
        
        cout<<"Opcion incorrecta! Intente despues"<<"\n";
    }
    

} 

void inicializar(){
    
    for(int i=0; i<N; i+=1){
        
        for(int j=0; j<M; j+=1){
            
            matriz[i][j]=' ';
        }
    }
}

void inicializar_V(){
    
    for(int i=0; i<C; i+=1){
        
        for(int j=0; j<R; j+=1){
            
            matriz_2[i][j]=' ';
        }
    }
}

void imprimirMatriz(){
    
    for(int i=0; i<N; i+=1){
        
        for(int j=0; j<M; j+=1){
            
            cout<<matriz[i][j];
        }
        
        cout<<endl;
    }
}

void imprimirMatriz_V(){
    
    for(int i=0; i<C; i+=1){
        
        for(int j=0; j<R; j+=1){
            
            cout<<matriz_2[i][j];
        }
        
        cout<<endl;
    }
}


void llenarBordes(){
    
    for(int i=0; i<N; i+=1){
        
        for(int j=0; j<M; j+=1){
            
            if(i==0 || i==N-1){
                
                matriz[i][j]='-';
            }
        
            if(j==0 || j==M-1){
                
                matriz[i][j]='|';
            }
            
            //if(i==j){
                
                //matriz[i][j]='\\';
            //}
            
            //if( (i+j)== N-1){
                
                 //matriz[i][j]='/';
            //}
            
           // if( (i+j) == N-1 || (i+j)== M-1 ){
                
                // matriz[i][j]='/';
            // }
         
        }
        
         cout<<"\n"; 
       
    } 
}

void Figura_A(){

   for(int i=(N-1); i>=0; i-=1){
        
        for(int j=M-N; j<=M-1; j+=1){
            
           if ((i+j) == M-1){
               
                matriz[i][j]='/';
                matriz[i][M-N+i]='\\';
           }
        }
        
        cout<<endl;
        imprimirMatriz();
    }

}

void Figura_B(){
    
   for(int i=(N-1); i>=0; i-=1){
        
        for(int j=M-N; j<=M-1; j+=1){
            
           if ((i+j) == M-1){
               
                matriz[N-i][M-N+i]='/';
                matriz[i][M-N+i]='\\';
             
           }
        }
        
        cout<<endl;
        imprimirMatriz();
    }
    

}


void Figura_C(){

   for(int i=0; i<=N-1; i+=1){
        
        for(int j=M-N; j<=M-1; j+=1){
            
           if ((i+j) == M-1){
               
                matriz[i][j]='/';
                matriz[i][M-N+i]='\\';
           }
        }
        
        cout<<endl;
        imprimirMatriz();
    }

}

void Figura_D(){
    
   for(int i=0; i<=N-1; i+=1){
        
        for(int j=M-N; j<=M-1; j+=1){
            
           if ((i+j) == M-1){
               
                matriz[N-i][M-N+i]='/';
                matriz[i][M-N+i]='\\';
             
           }
        }
        
        cout<<endl;
        imprimirMatriz();
    }
    
   
}



void Figura_Vertical(){
    
    for(int i=0; i<C; i+=1){
        
        for(int j=0; j<R; j+=1){
            
            if(i==0 || i==C-1){
                
                matriz_2[i][j]='-';
            }
        
            if(j==0 || j==R-1){
                
                matriz_2[i][j]='|';
            }
            
         
        }
        
         cout<<"\n"; 
       
    } 
   
}

void Figura_Vertical_vertices(){
    
    for(int i=0; i<C; i+=1){
        
        for(int j=0; j<R; j+=1){
            
            if(i==j){
                
                matriz_2[i][j]='\\';
            }
            
            if((i+j) == C-1){
                
                matriz_2[i][j]='/';
                
            }
        
        }
        
        cout<<"\n"; 
    
    }
    


   for(int i=0; i<C; i+=1){
        
        for(int j=R-1; j>=0; j-=1){
            
           if ((i+j) == R-1){
               
                matriz_2[i][j]='/';
             
           }

        }
        
        cout<<endl;

    }
    
    
   for(int i=(C-R); i<=C; i+=1){
        
        for(int j=0; j<R; j+=1){
            
           if ((i-R) == j ){
               
                matriz_2[i][j]='\\';
           }

        }
        
        cout<<endl;

    }
 
}



