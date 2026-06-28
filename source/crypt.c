/*ALGORIHTME*/
/*
FONCTION:
entier vowel_test(t:caractere)
Debut_fonction
	truth
	SI t='a' || t='e' || t='u' || t='i' || t='y' || t='o' ||
	   t='A' || t='E' || t='U' || t= 'I' || t= 'Y' || t= 'O'
		ALORS
			truth<-1
	SINON
			truth<-0
	FINSI
	retourner(truth)
Fin_fonction

vide entering(t[]:chaine de caractere)
Debut_fonction
	Afficher("put here the sentences that u wanna crypt")
	LIRE(t)
Fin_fonction

vide ITing(t[]:chaine de caractere)
Debut_fonction
	i,j,k,numCHAR:entier
	tmp,tmp1:caractere
	i <-0
	FAIRE
		i <- i+1
	FIN
	numCHAR <-i + 1
	POUR i <- 0 ,i < = numCHAR ,Pas de i :1
	FAIRE 
		    SI vowel_test(t[i])=0 && vowel_test(t[i+1])=1
				ALORS
i					numCHAR <-numCHAR + 1
					POUR k <- numCHAR ;k>i, pas de k allant de -1 *shifting  character to the right*
					FAIRE
						t[k]<-t[k-1]
					FINPOUR
					t[i+1]<- 'I'
					numCHAR <- numCHAR + 1
					POUR k <- numCHAR ;k>i+1, pas de k allant de -1
					FAIRE
						t[k]<-t[k-1]
					FINPOUR
					t[i+2]<- 'T'
					i <- i+3
			FINSI
	FINPOURe
	AFFICHER ("crypted :",t)
Fin_fonction
Debut
	sentences[100]:chaine de caractere
	entering(sentences)
	ITing(sentences)
Fin

*/
#include <string.h>
#include <stdio.h>
#include "../headers/crypt.h"
#include "../headers/decrypt.h"
int vowel_test(char caract)
{
	int truth;
	if(caract =='a'|| caract =='e' || caract == 'y' || caract== 'u'|| caract == 'i' || caract == 'o'|| 
		caract == 'A'|| caract == 'E' || caract == 'Y' || caract == 'U' || caract == 'I' || caract == 'O')
	{
		truth=1;
	}
	else if(caract != ' ')
	{
		truth=0;
	}
	else
	{
		truth=2;
	}
	return truth;
}
void entering(char *t)
{
	printf("put here the sentences : ");
	scanf(" %[^\n]",t);
}

void ITing(char *t)
{
	int i,k,numCHAR;
	i=0;
	while(t[i] !='\0')
	{
		i++;
	}
	numCHAR=i++;
	for(i=0;i<=numCHAR;i++)
	{
		if((vowel_test(t[i])==0) && (vowel_test(t[i+1]))==1)
		{			
			numCHAR=numCHAR+1;
			for(k=numCHAR;k>i;k=k-1)
			{
				t[k]=t[k-1];
			}
			t[i+1]='I';
			numCHAR=numCHAR+1;
            for(k=numCHAR;k>i+1;k=k-1)
            {     
				t[k]=t[k-1];
            }       
            t[i+2]='T';
			i=i+3;
		}
	}
	printf("crypted : %s\n",t);
}

void menu(int argc,char *argv[])
{
	if(argc==2)
	{
		char t[100];
		if((strcmp(argv[1],"-c"))==0)
		{
			entering(t);
			ITing(t);
		}
		else if((strcmp(argv[1],"-d"))==0)
		{
			entering(t);
			decryptITing(t);
		}
		else if((strcmp(argv[1],"-h"))==0)
		{
			printf("*option*\n-c:crypting\n-d:decrypting\n-h:help\n");
		}
		else
		{
			printf("invalid syntax or missing , check -h for help\n");
		}
	}	
	else
	{	
		printf("invalid syntax or missing , check -h for help\n");
	}
}


			