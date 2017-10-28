#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int b;
	int i; 
	int j;
	int k;
	int a;
	int pc;
	int usu;
	int colu;
	int p;
	int pcx;
	int pcy;
	int usux=0;
	int cpux;
	int cpuy;
	int usuy=0;
	int matriz_cpu[11][11];	 
	int matriz_usu[11][11];	  
	int matriz_colu[17][52];
	
		
	for ( i = 0 ; i < 11 ; i++){
		b = 47 + i;
		for( j = 0 ; j < 11 ; j++){
			
			matriz_cpu[i][j] = b;
			b++;
			
		}

	}
	
	for( i = 0 ; i < 11 ; i++){ 
		b = 47 + i;
		for( j = 0 ; j < 11 ; j++){
			
			matriz_usu[i][j] = b;
			b++;
			
		}

	}	
	
	for ( i = 0 ; i < 17 ; i++){ 
	
		for( j = 0; j < 52; j++)
		{
			
			matriz_colu[i][j] = 126 ;	
			
		} 
	
	} 
		
		
		
		
		
		
		for ( i = 1 ; i < 11 ; i++){ 
		
			for( j = 1 ; j < 11 ; j++){
			
				matriz_cpu[i][j] = 177;
			
			}
		
		}
			
		for ( i = 1 ; i < 11 ; i++){ 
		
			for( j = 1 ; j < 11 ; j++){
			
				matriz_usu[i][j] = 177;
			
			}
		
		}
	
		for( i = 0 ; i < 10 ; i++){
			

			pcx = rand()% 10;
			pcx += 1;
			pcy = rand()% 10;
			pcy+= 1;
			
			if( matriz_cpu[pcx][pcy] == 184){
				
				i--;				
				
			}
			
			matriz_cpu[pcx][pcy] = 184 ;
			
		}
	
		printf("\n");	
		
		for( i = 1; i < 6 ; i++ ){  
		
			system ("cls");
		system("color E");
			printf("Ingresa las coordenadas de tus barquitos %d:\n", i);
					
					printf("Valor en x: ");
					scanf("%d", &usux);
					printf("Valor en y: ");
					scanf("%d", &usuy);
					
					usux += 1;
					usuy += 1; 
					
					if( usux < 11 && usuy < 11 && usux > 0 && usuy > 0 ){
						

						if (matriz_usu[usux][usuy] == 184){
							
							printf("Ese lugar ya esta ocupado.\n");
							i--;
							system ("pause");
						}
						
						matriz_usu[usux][usuy] = 184 ;
						
					}else{
						
						printf("Uno de los valores que haz ingresado no es valido.\n");
						i--;
						system ("pause");
					}

		}			

	
	   	do {

		   	system("cls");
		   	       	
			
			printf("\n\n\t\t\t\t\t\tBatalla Naval\n\n");
       		
               pcx = 0;
               pcy = 0;

               if ( k > 0){ 
               	
	    				if ( matriz_cpu[usux][usuy] == 177){
		    				
		    				printf("\n\t\t\t\t\t\tHaz fallado\n");
		    				matriz_cpu[usux][usuy] = 126; 
		    			system("color 3");
		    			}else if(  matriz_cpu[usux][usuy] == 184 ){
		    				
                        	printf("\t\t\t\t\t\t%c%c Le Haz dado. %c%c\n\n\a", 219, 219, 219, 219);
		    				system("color A");
		    			matriz_cpu[usux][usuy] = 178; 		    				
		    				usu++;
		    				a++;
		    			}
               	
               }	
			   for( i = 3; i < 14 ; i++ ){ 
			
		    		for( j = 35 ; j < 46 ; j++ ){
		    			
                        if ( matriz_cpu[i-3][j-35] == 184 ){
                        	
                        	colu= 177;
                        	
                        }else{
                        	
                        	colu = matriz_cpu[i-3][j-35];
                        	
                        }  	
						   matriz_colu[i][j] = colu;
                           pcy++;
                    }
                    pcx++;
               }
               
	    
		    
				for ( i = 3; i < 14 ; i++ ){ 
				
		    		for ( j = 6 ; j < 17 ; j++ ){
                        
						   matriz_colu[i][j] = matriz_usu[i-3][j-6];
                           pcy++;
                    }
                    pcx++;
               }
               
               if( k > 0 ){
               	
               		cpux = rand() % 10 ;
               		cpux += 1 ;
					cpuy = rand() % 10 ;
					cpuy += 1 ;
					
				     if( matriz_usu[cpux][cpuy] == 177){
                        	
                        	matriz_usu[cpux][cpuy] = 126 ;
                        	printf("\t\t\t\t\t\tEl enemigo ha fallado.\n\n");
                        }else if( matriz_usu[cpux][cpuy] == 184 ){
                        	
                        	matriz_usu[cpux][cpuy] = 178 ;
                        	printf("\t\t\t\t\t\t%c%c Te han golpeado %c%c\n\n\a", 219, 219, 219, 219);
                        	system("color 4");
                        	pc++;
                        	a++;
                        	
                        }
               	
               	
               }             
                
                pcx= 0;
                pcy = 0;
			
				for( i= 0; i < 17 ; i++ ){
					
					for( j = 0; j < 52; j++){
						
						printf(" %c", matriz_colu[i][j]);
						
					}
					
					printf("\n");
					
				}
			
				do {
					p = 0;
					printf("Ingresa la coordenada en x: ");
					scanf("%d", &usux);
					printf("ingresa la coordenada en y: ");		
					scanf("%d", &usuy);
			system ("color 8");
					usux += 1;
					usuy += 1;
					
					if(usux < 11 && usux > -1 && usuy < 11 && usuy > -1){
						p = 5;
					}else{
						printf("\n\tLos valores no son correctos.\n");
					}

    }while(p < 3);

		    	k++; 

			} while( a < 11);	
		
		if ( pc == 5){
			
			printf("Te han ganado.");
			
		}else if(usu == 5){
			
			printf("Tenemos la victoria.");
			
		}
		
	
  return 0;
}


	

