//
//  Words.c
//  madLib
//
//  Created by Austins Work on 8/11/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#include "Words.h"

char *StringFromAdjetive(Adjetive input ){
    switch (input) {
        case AdjetiveUgly: {
            return "Ugly";
        }
        case AdjetiveDecent: {
            return "Decent";
        }
        case AdjetivePretty: {
            return "pretty";
        }
        default:{
            return NULL;
        }
    }
    
}

char *StringFromNoun(Noun input){
    switch (input) {
        case NounWolf: {
            return "Wolf";
	        }
        case NounPineapple: {
            return "Pineapple";
        }
        case NounHouseElves: {
            return "HouseElves";
        }
        default:
            return NULL;
    }
}

char *StringFromVerb(Verb input){
    switch (input) {
        case VerbSprint:{
            return "Sprint";
        }
        case VerbEscape:{
            return "Escape";
        }
        case VerbFly:{
            return "Fly";
        }
        default:
            return NULL;
    }
}
