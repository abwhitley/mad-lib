//
//  main.c
//  madLib
//
//  Created by Austins Work on 8/11/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <strings.h>
#include "Words.h"

int getUsersName(char name[], char *prompt);
void useName(char []);
void useAdjetive(char *adjetiveAsString);
void useNoun(Noun nounChosen);
void useVerb(Verb verbChosen);


int main(int argc, const char * argv[]) {
    
    Adjetive adjetiveChosen = AdjetiveNull;
    Noun nounChosen = NounNull;
    Verb verbChosen = VerbNull;
    int errorCode = 0; // = numberOfItemsScanned
    
    
    while((errorCode != 1) ||
          (adjetiveChosen < AdjetiveFirst ) || (adjetiveChosen > AdjetiveLast)){
        fpurge(stdin);
        printf("please enter: \n");
        printf("    %d for Ugly\n",AdjetiveUgly);
        printf("    %d for Decent\n",AdjetiveDecent);
        printf("    %d for Pretty\n",AdjetivePretty);
        errorCode = scanf("%d", &adjetiveChosen);
        
    }
    
    char *adjetiveAsString = StringFromAdjetive(adjetiveChosen);
    printf("You chose the adjetive %s\n", adjetiveAsString);
    
    while((errorCode != 1) ||
          (nounChosen < NounFirst ) || (nounChosen > NounLast)){
        fpurge(stdin);
        printf("please enter: \n");
        printf("    %d for Wolf\n",NounWolf);
        printf("    %d for Pineapple\n",NounPineapple);
        printf("    %d for HouseElves\n",NounHouseElves);
        errorCode = scanf("%d", &nounChosen);
        
    }
    char *nounAsString = StringFromNoun(nounChosen);
    printf("You chose the noun %s\n", nounAsString);
    
    while((errorCode != 1) ||
          (verbChosen < VerbFirst ) || (verbChosen > VerbLast)){
        fpurge(stdin);
        printf("please enter: \n");
        printf("    %d for Sprint\n",VerbSprint);
        printf("    %d for Escape\n",VerbEscape);
        printf("    %d for Fly\n",VerbFly);
        errorCode = scanf("%d", &verbChosen);
        
    }
    char *verbAsString = StringFromVerb(verbChosen);
    printf("You chose the verb %s\n", verbAsString);

    
    char name [100] = "\0";
    
    getUsersName(name, "Enter You Name: \n");
    
    printf("Hello %s \n\n", name);
    
    useName(name);
    /*useAdjetive(adjetiveAsString);
    useNoun(nounChosen);
    useVerb(verbChosen);*/
    printf("Once a %s was going threw town.\n\n", nounAsString);
    printf("It was a %s %s. \n\n", adjetiveAsString, nounAsString);
    printf("One day it decided to %s\n\n", verbAsString);
    printf("The End.\n");
    return 0;
}

int getUsersName(char name[], char *prompt){
    
    int errorCode = 0;
    while(errorCode != 1){
        fpurge(stdin);
        printf("%s", prompt);
        errorCode = scanf("%[^\n]s", name);
    }
    return errorCode;
}

void useName(char name[]){
    printf("I hear your name is %s \n\n", name);
}
void useAdjetive(char *adjetiveAsString){
    printf("%c", *adjetiveAsString);
}
void useNoun(Noun nounAsString){
    printf("%c", nounAsString);
}
void useVerb(Verb verbAsString){
    printf("%c", verbAsString);
}
