/*ALGORIHTME*/
/*
FONCTION:

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
		POUR j <- 0,j<8,pas de j :1
		FAIRE 
			SI t[i] != 'a'|| t[i] != 'e'||t[i] != 'i'||t[i]!='u'||t[i]!='o'||t[i]!='y'|| t[i]!=' ' && (t[i+1]=='a' || t[i+1] == 'e' || t[i+1] == 'i'|| t[i+1]=='u'|| t[i+1]=='o'|| t[i+1] =='y')
		       		ALORS
					numCHAR <-numCHAR + 2
					POUR k <- numCHAR ;k>i, pas de k allant de -1
					FAIRE
						t[k]<-t[k-1]
					FINPOUR
					t[i+1]<- 'I'
					numCHAR <- numCHAR + 2
					POUR k <- numCHAR ;k>i+1, pas de k allant de -1
					FAIRE
						t[k]<-t[k-1]
					FINPOUR
					t[i+2]<- 'T'
					i <- i+3
			FINSI
		FINPOUR
	FINPOUR
	AFFICHER ("crypted :",t)
Fin_fonction
Debut
	sentences[100]:chaine de caractere
	entering(sentences)
	ITing(sentences)
Fin

*/
#include <stdio.h>
#include "../Headers/crypt.h"

void entering(char *t)
{
	printf("put here the sentences that u wanna crypt : ");
	scanf(" %[^\n]",t);
}

void ITing(char *t)
{
	int i,j,k,numCHAR;
	i=0;
	while(t[i] !='\0')
	{
		i++;
	}
	numCHAR=i++;
	for(i=0;i<=numCHAR;i++)
	{
i		if((t[i]!='a' || t[i]!='e' || t[i] != 'i'|| t[i]!='u'|| t[i]!='o'|| t[i]!='y' || t[i] != ' ' ) && (t[i+1]=='a' || t[i+1] == 'e' || t[i+1] == 'i'|| t[i+1]=='u'|| t[i+1]=='o'|| t[i+1] =='y'))
		{	
			
					
			numCHAR=numCHAR+2;
			for(k=numCHAR;k>i;k=k-1)
			{
				t[k]=t[k-1];
			}
			t[i+1]='I';
			numCHAR=numCHAR+2;
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


			
