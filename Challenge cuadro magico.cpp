#include <stdio.h>
#include <iostream>
#include <cmath>


using namespace std;


void inicializar();
void imprimir();


int magico[15][15],i,j,k,n;


int main ()
{
   
	n=7;

    inicializar();

    cout<<" "<<endl;

    i=0;
   
    j=trunc(n/2);
   
    k=1;

    magico[i][j]=k;
   
    cout<<"i j k : "<< i<<" "<<j<<" "<<k<<endl;
   
    for(k=2; k<=n*n; k+=1){
   
        i=i-1;
   
        j=j+1;

        if(i<0){
   
            i=n-1;
        }
   
        if(j>n-1){
       
            j=0;
        }
   
        if(magico[i][j]==0){
       
            magico[i][j]=k;
        }
       
        else{
       
            i=i+1;
           
            j=j-1;
       
            if (i>n-1){
           
                i=0;
            }
           
            if(j<0){
           
                j=n-1;
            }
       
        i=i+1;

        cout<<"i j k : "<< i<<" "<<j<<" "<<k<<"\n";
   
        magico[i][j]=k;
       
        }
        
        cout<<"i j k : "<< i<<" "<<j<<" "<<k<<"\n";
       
       
   
    }
   
    cout<<" "<<endl;
   
    imprimir();
   
   
}

void inicializar(){
   
   for(i=0; i<=n-1; i+=1){
   
        for(j=0; j<=n-1; j+=1){
   
            magico[i][j]=0;
   
            cout<< magico[i][j]<<" ";
        }
   
        cout<<" "<<endl;
    }
   
}
   
void imprimir(){

   for(i=0; i<=n-1; i+=1){
   
        for(j=0; j<=n-1;j+=1){
       
        	cout<<magico[i][j]<<" ";
        	
        }
         
        cout<<" "<<"\n";
    }
   
   
}
