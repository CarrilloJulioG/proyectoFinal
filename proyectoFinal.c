#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
float p_acumulado=0;
int main()
{

	//precios :D
	float hp=30.50, hpo=32.00, hc=35.50, hn=28.00, hd= 30.00 ;//Precios de las hambusguesas
	float hdg=35.50;//precio de los hot dog
	float pp= 130.00, ps= 125.50, ph= 135.50, pm=130.00 ;//´precio de las pizzas
	float sp= 40.00, sj= 35.50, sa=38.50 ;// precio de los sandwich
	float cc=15.00, st=15.00, as=10.50, mn=15.00, aj=12.50; //precio de las bebidas  
	
	//Variables de los casos
	int oph=0, ophdg=0, opp=0, ops=0, opb=0;
	int opf;//variable de la cuenta final
	char pe = '\0'; 
	char au=163, nn=164, ao=162, se=173;//Caracteres especiales
	do
	{ 
			//MENÚ
			printf("\tMen%c\n\n",au);
			printf("Elegir la opci%cn deseada\n",ao);
			printf("a)Hamburguesa\n");
			printf("b)Hot dog\n");
			printf("c)Pizza\n");
			printf("d)Sandwich\n");
			printf("e)Bebidas\n");
			printf("f)Cancelar pedido\n");
			printf("g)Terminar pedido\n");
			fflush(stdin);
			scanf("%c",&pe);
				
			 switch(pe)
			 {
				 
				case 'a':
						system("cls");
						//tipos de Hamburguesa
						printf("\nElija el tipo de hamburguesa que quiere\n\n");
						printf("1)Con pi%ca.\n",nn);
						printf("2)De pollo.\n");
						printf("3)De camaron.\n");
						printf("4)Normal.\n");
						printf("5)Doble queso.\n");
						printf("6)elegir otra cosa\n");
						fflush(stdin);
						scanf("%d",&oph);
							switch(oph) 
							{
								
								case 1:
									printf("Seria $%.2f\n",hp); 
									oph=hp;
									break;
								case 2:
									printf("Seria $%.2f.\n",hpo); 
									oph=hpo;
									break;
								
								case 3:
									printf("Seria $%.2f.\n",hc);
									oph=hc;
									break;;
								case 4:
									printf("Seria $%.2f.\n",hn); 
									oph=hn;
									break;
								case 5:
								printf("Seria $%.2f.\n",hd);
								oph=hd;
									break;
								case 6:
								 printf("\tSalir\n");
									break;
								default:
								printf("Opcion no valida\nSelecciona una de las opciones disponibles\n");
							}
						p_acumulado=p_acumulado+oph;
				break;			
				case 'b':
						system("cls");
						//tipos de hotdog
						printf("Elija el tipo hot de dog que desea.\n\n");
						printf("1)con todo\n");
						printf("2)sin cebolla\n");
						printf("3)sin mostaza\n");
						printf("4)sin mallonesa\n");
						printf("5)elegir otra cosa\n");
						fflush(stdin);
						scanf("%d",&ophdg);
						switch(ophdg) 
							{
								
								case 1:
									printf("Seria $%.2f\n",hdg); 
									ophdg=hdg;
									break;
								case 2:
									printf("Seria $%.2f.\n",hdg);
									ophdg=hdg;									
									break;
								
								case 3:
									printf("Seria $%.2f.\n",hdg);
									ophdg=hdg;
									break;;
								case 4:
									printf("Seria $%.2f.\n",hdg);
									ophdg=hdg;
									break;
								case 5:
									printf("\tSalir\n");
									break;
								default:
								printf("Opcion no valida\nSelecciona una de las opciones disponibles\n");
							}	
						p_acumulado=p_acumulado+ophdg;	
				break;
				case'c':
				
						system("cls");
						//tipos de pizza
						printf("Elija el tipo pizza que desea.\n\n");
						printf("1)Peperoni\n");
						printf("2)Salchicha\n");
						printf("3)Hawaiana\n");
						printf("4)Mexicana\n");
						printf("5)elegir otra cosa\n");
						fflush(stdin);
						scanf("%d",&opp);
						switch(opp) 
							{
								
								case 1:
									printf("Seria $%.2f\n",pp); 
									opp=pp;
									break;
								case 2:
									printf("Seria $%.f.\n",ps); 
									opp=ps;
									break;
								
								case 3:
									printf("Seria $%.2f.\n",ph);	
									opp=ph;
									break;;
								case 4:
									printf("Seria $%.2f.\n",pm); 
									opp=pm;
									break;
								case 5:
									printf("\tSalir\n");
									break;
								default:	
								printf("Opcion no valida\nSelecciona una de las opciones disponibles\n");	
						}
						p_acumulado=p_acumulado+opp;
				break;
				case 'd' :
						system("cls");
						//tipos de sandwich
						printf("\nElija el tipo de sandwich que quiere\n\n");
						printf("1)Pollo.\n");
						printf("2)Jam%cn.\n",ao);
						printf("3)At%cn.\n",au);
						printf("4)elegir otra cosa\n");
						fflush(stdin);
						scanf("%d",&ops);
							switch(ops) 
							{
								
								case 1:
									printf("Seria $%.2f\n",sp); 
									ops=sp;
									break;
								case 2:
									printf("Seria $%.2f.\n",sj); 
									ops=sj;
									break;
								
								case 3:
									printf("Seria $%.2f.\n",sa);
									ops=sa;
									break;;
								case 4:								
									printf("\tSalir\n");
									break;
								default:
								printf("Opcion no valida\nSelecciona una de las opciones disponibles\n");
								
							}
							p_acumulado=p_acumulado+ops;
				break;
				
				case 'e':
						system("cls");
						//tipos de bebidas
						printf("\nElija el refresco que quiere\n\n");
						printf("1)Coca Cola.\n");
						printf("2)Sprite.\n");
						printf("3)Agua simple.\n");
						printf("4)Manzanita.\n");
						printf("5)Agua de Jamaica.\n");
						printf("6)elejir otra cosa\n");
						fflush(stdin);
						scanf("%d",&opb);
							switch(opb) 
							{
								
								case 1:
									printf("Seria $%.2f\n",cc); 
									opb=cc;
									break;
								case 2:
									printf("Seria $%.2f.\n",st); 
									opb=st;
									break;
								
								case 3:
									printf("Seria $%.2f.\n",as);
									opb=as;									
									break;
								case 4:
									printf("Seria $%.2f.\n",mn);
									opb=mn;
									break;
								case 5:
									printf("Seria $%.2f.\n",aj); 
									opb=aj;
									break;
								case 6:
									printf("\tSalir\n");
									break;
								default:
								printf("Opcion no valida\nSelecciona una de las opciones disponibles\n");
							}
							p_acumulado=p_acumulado+opb;
				break;
				case 'f':
					system("cls");
					p_acumulado=p_acumulado-p_acumulado;
				break;
				case 'g':
					printf("\tSalir\n");
				break;
				default:
					printf("Opcion no valida\nSelecciona una de las opciones disponibles\n");
				
			}
				
	}
	while(pe !=	'g');
	printf("%c%c%cGracias!! Pase a pagar.\n Seria un total de $%.2f",se,se,se,p_acumulado);
	return 0;	
}
