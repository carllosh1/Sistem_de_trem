
		
	}	
		
	gotoxy(1,50); printf("%c", 191);
	gotoxy(2,50); printf("%c", 179);
	gotoxy(3,50); printf("%c", 180);

 	gotoxy(2,18);printf("Visualizar Vagas");
	gotoxy(4,1); printf("%c", 195);
		
	gotoxy(7,1); printf("%c", 195);
	for(i=5; i<15;i++){
			gotoxy(i,1); printf("%c", 179);
			gotoxy(i,50); printf("%c", 179);
	}
		
	gotoxy(4,21);printf("Informacoes");	
	
	gotoxy(4,50); printf("%c", 180);
	
	gotoxy(15,1);printf("%c", 192);
	gotoxy(15,50);printf("%c", 217);
	

}

int main(){
	int opcao, opcao1,assentos, i=0, valor=0, j=0;
	int vagaoExecutivo[5]={45,45,45,45,45}, vagaoEconomico[5]={45,45,45,45,45};
	char nome[300][300];
	do{
		menuPrincipal();
	
		gotoxy(14,21);scanf("%i", &opcao);
		switch (opcao){
			case 1: 
				menuCompras(); 
				gotoxy(11,21);printf("  "); 
				gotoxy(11,21);scanf("%i", &opcao1);
				gotoxy(15,1);
				
				if(opcao1==1){
					fflush(stdin);
					printf("Qual seu nome?");
					scanf("%[^\n]s", &nome);
					
					printf("Quantas passagens  voce quer reservar?");
					scanf("%i", &assentos);
					
					
					if(i==5){
						printf("So tem %i vagas disponiveis", vagaoExecutivo[4]);	
						
					}else{}
					
	//				printf("%i", i);  -> SE NÃO FUNCIONAR USA O PRIINTF PQ FUNCIONA COM ELE CODIGO BIPOLAR 
				
					if(assentos<226){
				 	vagaoExecutivo[i]-=assentos;
					}else{
						printf("LIMITE DE 225 VAGAS");
						system("pause");
						break;
					}
				
			

					while(vagaoExecutivo[i]<=0 && i<4){
						vagaoExecutivo[i+1]+=vagaoExecutivo[i];
						vagaoExecutivo[i]=0;
						i+=1;
					}
			
				
	//				printf("%i", i); -> SE NÃO FUNCIONAR USA O PRIINTF PQ FUNCIONA COM ELE CODIGO BIPOLAR 
				
				
					system("pause");
				
				}else 
				if(opcao1==2){
					fflush(stdin);
					printf("Qual seu nome?");
					scanf("%[^\n]s", &nome);
					
					printf("Quantas passagens  voce quer reservar?");
					scanf("%i", &assentos);
					
					
					if(j==5){
						printf("So tem %i vagas disponiveis", vagaoEconomico[4]);	
						
					}else{}
					
					if(assentos<226){
					 	vagaoEconomico[j]-=assentos;
					}else{
						printf("LIMITE DE 225 VAGAS");
						system("pause");
						break;
					}
					
					while(vagaoEconomico[j]<=0 && j<4){
							vagaoEconomico[j+1]+=vagaoEconomico[j];
							vagaoEconomico[j]=0;
							j+=1;
					}
				}
		
				break;
		
		
		
			case 2: 
			system("cls"); 
			menuVisualizar(); 
			
			for(i=0; i<5;i++){
				gotoxy(i+10,2);printf("%i- Vagao Economico- %i/45", i+6,vagaoEconomico[i]);
				gotoxy(i+5,2);printf("%i- Vagao Executivo- %i/45\n",i+1,vagaoExecutivo[i]);
				
			}
		
		
			gotoxy(30,1);	system("pause"); break;
		
		
		
			default: break;
		
		}
		system("cls");
	}while (opcao !=3);
	
	printf("VOCE SAIU DO PROGRAMA :(");
	
	printf("\n\n");
}
