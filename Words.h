//
//  Words.h
//  madLib
//
//  Created by Austins Work on 8/11/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#ifndef Words_h
#define Words_h

#include <stdio.h>
#include <limits.h>

typedef enum Adjetive {
    AdjetiveUgly = 1,
    AdjetiveDecent,
    AdjetivePretty,
    AdjetiveNull = INT_MIN,
    AdjetiveFirst = AdjetiveUgly,
    AdjetiveLast = AdjetivePretty
    
} Adjetive;

typedef enum Noun{
    NounWolf = 1,
    NounPineapple,
    NounHouseElves,
    NounNull = INT_MIN,
    NounFirst = NounWolf,
    NounLast = NounHouseElves
    
} Noun;

typedef enum Verb{
    VerbSprint = 1,
    VerbEscape,
    VerbFly,
    VerbNull = INT_MIN,
    VerbFirst = VerbSprint,
    VerbLast = VerbFly
    
} Verb;

char *StringFromAdjetive(Adjetive adjetive);
char *StringFromNoun(Noun noun);
char *StringFromVerb(Verb verb);

#endif /* Words_h */
