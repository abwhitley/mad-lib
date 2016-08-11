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

char *StringFromAdjetive(Adjetive adjetive);

#endif /* Words_h */
