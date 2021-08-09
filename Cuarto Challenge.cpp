#include  <iostream>
#include <stdlib.h>
#include <string>
#define N 16
#define M 16  

using namespace std;

void imprimirAjedrez();

void imprimirDsuperior();

void imprimirDinferior();

void imprimirtableroCompleto();

void circuloLleno();


int main(){
	
	imprimirAjedrez();
	
	imprimirDsuperior();
	
	imprimirDinferior();
	
	imprimirtableroCompleto();
	
	circuloLleno();
	
}

void imprimirAjedrez(){
	
	for(int i = 0; i < N; i += 1){
		
		for(int j = 0; j < M; j += 1){
			
			if( i%2 == 0){
		
				cout<<" #";
						}
			else{
				
				cout<<"# ";
			}
			
		}
		cout<<"\n";
			
	}
	
	cout<<"\n\n\n";
	
}


void imprimirDsuperior(){
	
	
	int diagS=0;
	

	for(int i = 0; i<N; i += 1){
		
		for (int j = 0; j < M-diagS; j +=1){
			
			if( i%2 == 0){
		
				cout<<"# ";
						}
			else{
				
				cout<<" #";
			}	
				
		}
		
		diagS+=1;
		
		cout<<"\n";
	}
	
	cout<<"\n\n\n";
	
}


void imprimirDinferior(){
	
	
	int diagI=15;
	
	bool x=true;
	
		
	for(int i = 0;i<N; i += 1){
		
		for (int j = 0; j<M-diagI; j += 1){
			
			if(x==true){
							
				for ( int k = 0; k < diagI; k+= 1){
				
					cout<<"  ";
					x=false;
				}
				
			}
			
			if( i%2 == 0){
		
				cout<<"# ";
						}
			else{
				
				cout<<" #";
			}
		}
		
		diagI-=1;
		
		x=true;
		
		cout<<"\n";
	}
	
	cout<<"\n\n\n";
}


void imprimirtableroCompleto(){
	
	int diagS=0;
	
	int diagI=15;
	
	
	for(int i = 0; i<N; i += 1){
		
		
		for (int j = 0; j < M-diagS; j +=1){
			
			if( i%2 == 0){
		
				cout<<"# ";
						}
			else{
				
				cout<<" #";
			}	
				
		}
		
		diagS+=1;
		
		
		
		for (int k = 0; k<M-diagI; k += 1){
			
			if( i%2 == 0){
		
				cout<<"# ";
						}
			else{
				
				cout<<" #";
			}
		}
		
		diagI-=1;
			
		cout<<"\n";
	
}

	cout<<"\n\n\n";
	
	
}


void circuloLleno(){
	
	int a=11;
	
	int b=15;
	
	int c= 4;
		
	int rest=15;
	
	bool x=true;
	
	bool midd = true;
	
		
	for(int i = 0;i<a; i += 1){
		
		if (i<2){
			
		
		for (int j = 0; j<c*2; j += 1){
			
				if(x==true){
							
				for ( int k = 0; k < rest; k+= 1){
				
					cout<<"  ";
					x=false;
				}
			
			}
			
		
			cout<<"$ ";

		}
		
		c+=3;
		rest-=3;
		
		x=true;
		
		cout<<"\n";
		
		}

		
		else if(i<=7){
			
		for (int j = 0; j<(c-2)*2; j += 1){
			
				if(x==true){
							
				for ( int k = 0; k < (rest+2); k+= 1){
				
					cout<<"  ";
					x=false;
				}
			
			}
			
		
			cout<<"$ ";

		}
		
		
		x=true;
		
		cout<<"\n";
		
		}
		
		else if (i<10){
			
			if (midd){
				rest+=3;
				c-=3;
			}
			else{
				midd=false;
				rest+=3;
				c-=3;
			}
			

			
			for (int j = 0; j<c*2; j += 1){
			
				if(x==true){
							
				for ( int k = 0; k < rest; k+= 1){
				
					cout<<"  ";
					x=false;
				}
				
			}
			
		
			cout<<"$ ";

		}
	
		
		x=true;
		
		cout<<"\n";
		
			
			
		}		
		
		
	}
	
	cout<<"\n\n\n";
}
	
	

