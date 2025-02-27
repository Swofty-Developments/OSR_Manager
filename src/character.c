#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/character.h"
#include "../include/dice.h"

struct Character newCharacter;

Character createCharacter() { 
    
    newCharacter.EXPERIENCE = 0;

    newCharacter.ABILITY_STRENGTH     = roll(3,6);
    newCharacter.ABILITY_CONSTITUTION = roll(3,6);
    newCharacter.ABILITY_INTELLIGENCE = roll(3,6);
    newCharacter.ABILITY_WISDOM       = roll(3,6);
    newCharacter.ABILITY_DEXTERITY    = roll(3,6);
    newCharacter.ABILITY_CHARISMA     = roll(3,6);
    newCharacter.GOLD          = roll(3,6) * 10;

    printf("> YOUR CHARACTER STARTS WITH:\n> STR %d\n> CON %d\n> INT %d\n> WIS %d\n> DEX %d\n> CHA %d\n", 
    newCharacter.ABILITY_STRENGTH,  newCharacter.ABILITY_CONSTITUTION, newCharacter.ABILITY_INTELLIGENCE, newCharacter.ABILITY_WISDOM, newCharacter.ABILITY_DEXTERITY,  newCharacter.ABILITY_CHARISMA);

    chooseSpecies(newCharacter);

    chooseClass(newCharacter);
    
    printf("> YOUR CHARACTER'S CLASS IS %s. GOOD CHOICE!\n", newCharacter.CLASS.NAME);
    printf("> YOUR CHARACTER STARTS WITH %d HITPOINTS.\n", newCharacter.HITPOINTS_MAX);

    printf("> YOU START WITH %d GOLD. CHOOSE SOME EQUIPMENT!\n", newCharacter.GOLD);
    
    chooseArmour(newCharacter);
    
    chooseOtherEquipment(newCharacter);

    return newCharacter;
}
