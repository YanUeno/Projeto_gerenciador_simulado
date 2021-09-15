#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

char nome[100],nome2[100];
int resp2,resp,curso,numins,sexo,idade,idadmed;
int contapro,contaproinf,contaproadm,contaproel,contapro2,contaprom,contrep;
float medadm,medif,medel;
int nif,nadm,nel;
float nota;
//ver melhor aluno

int idadeif,numeinsif,sexoif;
int idadeadm,numeinsadm,sexoadm;
int idadeel,numeinsel,sexoel;
float notael;
float notaadm;
float notaif;
char nomeif1[100],nomeif2[100];
char nomeadm1[100],nomeadm2[100];
char nomeel1[100],nomeel2[100];
char teste[100];




main(){
setlocale(LC_ALL,"Portuguese");		
		system ("color 02");
        printf ("PROJETO 2°BIMESTRE\n");
		printf ("Yan Ueno & Giuliana Vaez--1°F\n");
		printf (" ");
		printf ("---------------------------------------------------------------------------------------------\n");
		printf ("descriçãp:\n");
		printf ("Esse programa foi desinvolvido por Giuliana Vaez e Yan Ueno para projeto do segundo bimestre,\n");
		printf ("do Colégio Uvivap , o programa simula um programa para cadastrar participantes de um simulado\n"); 
		printf ("e calculando alguns resultados apartir dos dados recebidos.\n");
		printf ("-----------------------------------------------------------------------------------------------\n");
        printf ("Pressione alguma tecla e enter para executar o programa!\n");
		scanf ("%s",&teste);
		system ("cls");
		system ("color 07");
        //programa
		resp2=1;
		while (resp2==1){
			printf ("digite seu primeiro nome:\n");
			scanf ("%s",&nome);
			printf ("digite seu sobrenome:\n");
			scanf ("%s",&nome2);
			printf ("qual sua idade?\n");
			scanf ("%d",&idade);
			printf ("qual seu numero de inscrição\n");
			scanf ("%d",&numins);
			resp=1;
			while (resp==1){
					printf ("qual o curso escolhido?(1-informatica|2-Administração|3-eletronica)\n");
					scanf ("%d",&curso);
					printf ("%d\n",curso);
					if ((curso==1)||(curso==2)||(curso==3)){
						resp=2;
					}else{
                        system ("color 0c");
                        printf("escolha apenas dentro dos cursos oferecidos !\n");					
                    }	
			        
            }
			system ("color 07");
            resp=1;
			while (resp==1){
				printf ("qual seu sexo ?(1-Masculino|2-Feminino)\n");
				scanf ("%d",&sexo);
				if ((sexo==1)||(sexo==2)){
					resp=2;
				}else{
					system ("color 0c");
                    printf ("excolha apenas dentor das opções disponiveis !\n");
				
				}
			}			
			system ("color 07");
            resp=1;
			while (resp==1){
				printf ("digite sua nota:\n");
				scanf ("%f",&nota);
				if ((nota>=0)&&(nota<=10)){
					resp=2;
				}else{
					system ("color 0c");
                    printf ("A nota do vestibular vai apenas de 0,00-10,00 !\n");
				}
			}
			//A
			system ("color 07");
            system ("cls");
			printf ("canditado %s %s\n",nome,nome2);
			printf ("n° de inscrição:%d\n",numins);
			if (curso==1){
				printf ("curso:Informatica\n");
				nif=nif+1;		
			}else{
				if (curso==2){
					printf ("curso:Administração\n");
					nadm=nadm+1;
				}else{
					if (curso==3){
						printf ("curso:Eletronica\n");
						nel=nel+1;
					}
				}
			}
			printf ("idade:%d\n",idade);
			printf ("nota:%.2f\n",nota);
			//contador de aprovados total
			if ((idade>=18)&&(nota>=7)){
				printf ("Aprovado\n");
				printf (" ");
                contapro=contapro+1;
			}else{
				printf ("Reprovado\n");
			 printf (" ");
            }
			//contador de aprovados em cada curso
			if ((curso==1)&&(nota>=7)&&(idade>=18)){
				contaproinf=contaproinf+1;
			}else{
				if ((curso==2)&&(nota>=7)&&(idade>=18)){
					contaproadm=contaproadm+1;
				}else{
					if ((curso==3)&&(nota>=7)&&(idade>=18)){
						contaproel=contaproel+1;
					}
				}
				
				
			}
			//contador de aprovados homens
			if ((nota>=7)&&(idade>=18)&&(sexo==1)){
				contaprom=contaprom+1;
			}
			//media de idade
			if ((curso==1)){
				medif=medif+idade;
			}else{
				if(curso==2){
					medadm=medadm+idade;
				}else{
					if (curso==3){
						medel=medel+idade;
					}
				}
			}
			//quantidade de reprovados entre 17-20
			if ((idade>=17)&&(idade<=20)&&(nota<7)||(idade<=18)){
				contrep=contrep+1;
			}
			//melhor candidato em cada curso
			if ((curso==1)&&(nota>notaif)){
				strcpy (nomeif1,nome);
				strcpy (nomeif2,nome2);
				notaif=nota;
				idadeif=idade;
				numeinsif=numins;
			}else{
				if ((curso==2)&&(nota>notaadm)){
					strcpy (nomeadm1,nome);
					strcpy (nomeadm2,nome2);
					notaadm=nota;
					idadeadm=idade;
					numeinsadm=numins;	
				}else{
					if ((curso==3)&&(nota>notael)){
						strcpy (nomeel1,nome);
						strcpy (nomeel2,nome2);
						notael=nota;
						idadeel=idade;
						numeinsel=numins;	
					}
				}
			
			}
			
		resp=1;
		while (resp==1){
		printf ("Deseja cadastrar mais um aluno(1-Sim|2-Não)\n");
		scanf ("%d",&resp2);
	
		if ((resp2==1)||(resp2==2)){
            resp=2;
		    system ("cls");
        }else{
			system ("color 04");
            printf ("Responda Sim ou Não !\n");
			}
		}
	

		}
		system ("color 07");
        medif=medif/nif;
		medadm=medadm/nadm;
		medel=medel/nel;


//MOSTRAR
		printf ("Numero de candidatos aprovados em cada curso:\n");
		printf ("Informatica:%d\n",contaproinf);
		printf ("Administração:%d\n",contaproadm);
		printf ("Eletronica:%d\n",contaproel);
		printf ("------------------------------------------------\n");
		printf ("Total de aprovados no vestibular:%d\n",contapro);
		printf ("Total de aprovados masculinos:%d\n",contaprom);
		printf ("------------------------------------------------\n");
		printf ("A media de idade dos alunos de cada curso foi:\n");
		printf ("Informatica:%.2f\n",medif);
		printf ("Administração:%.2f\n",medadm);
		printf ("Eletronica:%.2f\n",medel);
		printf ("------------------------------------------------\n");
		printf ("a quantidade de reprovados entre 17-20 foi de:\n",contrep);
		printf ("------------------------------------------------\n");
		printf ("Os melhore em cada curso foram:\n");
		printf ("\n");
		printf ("Informatica:\n");
		printf ("Nome:%s %s\n",nomeif1,nomeif2);
		printf ("Idade:%.2d\n",idadeif);
		printf ("N° de inscrição:%d\n",numeinsif);
		printf ("Nota:%.2f\n",notaif);
		printf ("\n");
		printf ("Administração:\n");
		printf ("Nome:%s %s\n",nomeadm1,nomeadm2);
		printf ("Idade:%d\n",idadeadm);
		printf ("N° de inscrição:%d\n",numeinsadm);
		printf ("Nota:%.2f\n",notaadm);
		printf ("\n");
		printf ("Eletronica:\n");
		printf ("Nome:%s %s\n",nomeel1,nomeel2);
		printf ("Idade:%d\n",idadeel);
		printf ("N° de inscrição:%d\n",numeinsel);
		printf ("Nota:%.2f\n",notael);
		system ("PAUSE");
	
	
	
	
}
