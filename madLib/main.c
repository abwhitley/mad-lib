//
//  main.c
//  madLib
//
//  Created by Austins Work on 8/11/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#include <stdio.h>
int getUsersName(char name[], char *prompt);
void useName(char []);

int main(int argc, const char * argv[]) {
    
    char name [100] = "\0";
    int errorCode =  0;
    
    while(errorCode != 1){
        errorCode = getUsersName(name, "Enter your name: \n");
    }
    
    printf("Hello %s \n", name);
    
    useName(name);
    
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
    printf("I hear your name is %s \n", name);
}
