/*decrypting*/
/*
vide decrypting(t[]:type chaine de caractere)
Debut_fonction
    i<-0,k<-0,numCHAR<-0,test<-0:type entier

    TANTQUE t[i]!='\0'
    Faire
        i<-i+1
    FinTANTQUE
    numChar <-i+1

    POUR i<-0,i<=numCHAR,i pas allant de 1
    Faire
    *using the function vowel_test ,it returns 1 if the letter is a vowel ,0 if it's a consumn 
        SI vowel_test(t[i])=0 && t[i+1]='I' && t[i+2]='j' && vowel_test(t[i+3])=1
        Alors
            test<-test+1
            numCHAR<-numCHAR-1
            POUR k<-i+1,k<=numCHAR,k pas allant de 1
            Faire
                t[k]<-t[k+1]
            FinPOUR
            numCHAR<-numCHAR-1
            POUR k<-i,k<=numCHAR,k pas allant de 1
            Faire
                t[k]<-t[k+1]
            FinPOUR
        FinSI
    FinPOUR
    SI test=0 
    Alors
        Afficher "Your text isn't crypted\n"
    SINON
        Afficher "decrypted:%s\n",t

*/
#include <stdio.h>
#include "../headers/decrypt.h"
#include "../headers/crypt.h"

void decryptITing(char *t)
{
	int i=0,k=0,test=0,numCHAR=0;
	while(t[i]!='\0')
	{
		i++;
	}
	numCHAR=i++;
	for(i=0;i<=numCHAR;i++)
	{
		if(vowel_test(t[i])==0 && t[i+1]=='I'&& t[i+2]=='T' && vowel_test(t[i+3])==1) 
		{
			test=test+1;
			numCHAR=numCHAR-1;
			for(k=i+2;k<=numCHAR;k++)
			{
				t[k]=t[k+1];
			}
			numCHAR=numCHAR-1;
			for(k=i+1;k<=numCHAR;k++)
			{
				t[k]=t[k+1];
			}
		}
	}
	if(test==0)
	{
		printf("Your text isn't crypted\n");
	}
	else
	{
		printf("decrypted:%s\n",t);
	}
}