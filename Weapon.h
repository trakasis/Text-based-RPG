#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//daggers: rand() % 2 + 2 (numbers 2-3)
//sword: rand() % 3 + 3 (numbers 3-5)
//mace: rand() % 3 + 4 (numbers 4-6)
//fists: rand() % 2 + 1 (numbers 1-2) 
//orc weapon: rand() % 2 + 3 (numbers 3-4)

class Weapon
{
    public: 
        string name;
        float critMult;
        
};

float swordDamageNormal()
{
    Weapon sword;
    sword.name = "sword";
    sword.critMult = 1.5;
    
    float dmgOutput;

    dmgOutput = (rand() % 3 +3);
    
    return dmgOutput;
 
}

float swordDamageCrit()
{   
    Weapon sword;
    sword.name = "sword";
    sword.critMult = 1.5;
    
    float dmgOutput;
    dmgOutput = (rand() % 3 +3) * sword.critMult;
    
    return dmgOutput;
}

float maceDamageNormal()
{
    
    Weapon mace;
    mace.name = "mace";
    mace.critMult = 1.25;

    float dmgOutput;

    dmgOutput = (rand() % 3 +4);
    
    return dmgOutput;

}

float maceDamageCrit()
{
    
    Weapon mace;
    mace.name = "mace";
    mace.critMult = 1.25;

    float dmgOutput;

    dmgOutput = (rand() % 3 +4) * mace.critMult;
    
    return dmgOutput;
}


float daggersDamageNormal()
{
   
    Weapon daggers;
    daggers.name = "daggers";
    daggers.critMult = 2;

    
    float dmgOutput = ((rand() % 2 +2) + (rand() % 2 +2));
    
    return dmgOutput;
    
}

float daggersDamageCrit()
{
    srand(time(0));
    Weapon daggers;
    daggers.name = "daggers";
    daggers.critMult = 2;

    float dmgOutput;
    
    float hit1 = (rand() % 2 +2);
    float hit2 = (rand() % 2 +2);
    dmgOutput = (hit1 + hit2) * 2;
    
    return dmgOutput;

}

float fistsDamageNormal()
{
    srand(time(0));
    Weapon fists;
    fists.name = "fists";
    fists.critMult = 1.25;

    float dmgOutput;
   
        float hit1 = (rand() % 2 + 1);
        float hit2 = (rand() % 2 + 1);
        dmgOutput = (hit1 + hit2);
        
        return dmgOutput;
    

    
}

float fistsDamageCrit()
{
    srand(time(0));
    Weapon fists;
    fists.name = "fists";
    fists.critMult = 1.25;

    float dmgOutput;
    
        float hit1 = (rand() % 2 + 1);
        float hit2 = (rand() % 2 + 1);
        dmgOutput = (hit1 + hit2) * 1.25; 
        
        return dmgOutput;
    
}

float orcWeaponNormal()
    {
        srand(time(0));
        Weapon orc;
        orc.name = "club";
        orc.critMult = 1.25;

        float dmgOutput;
      
            float hit = (rand() % 2 + 3);
            dmgOutput = hit;
            
            return dmgOutput;
        
    }

float orcWeaponCrit()
    {
        srand(time(0));
        Weapon orc;
        orc.name = "club";
        orc.critMult = 1.25;

        float dmgOutput;
        
        
            float hit = (rand() % 2 + 3) * orc.critMult;
            dmgOutput = hit;
            
            return dmgOutput;
       
    }