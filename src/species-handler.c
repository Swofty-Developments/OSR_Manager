#include <stdio.h>
#include "../include/character.h"

Species Human = {"HUMAN", 100, 100, 100, true, true};
Species Elf = {"ELF", 4, 0, 8, false, true};
Species Dwarf = {"DWARF", 6, 0, 0, false, false};
Species Halfling = {"HALFLING", 4, 0, 0, false, false};

extern struct Character newCharacter;

void chooseSpecies() {
    printf("> CHOOSE A SPECIES: HUMAN, ELF, DWARF OR HALFLING\n> ");

    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp("human", input) == 0 ) {
        newCharacter.SPECIES = Human;

    } else if(strcmp("elf", input) == 0) {
        newCharacter.SPECIES = Elf;

    } else if(strcmp("dwarf", input) == 0) {
        newCharacter.SPECIES = Dwarf;

    } else if(strcmp("halfling", input) == 0) {
        newCharacter.SPECIES = Halfling;

    } else {
        printf("> YOU CAN'T PLAY AS THAT!\n");
        chooseSpecies();
    }
}

