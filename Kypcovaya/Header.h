#pragma once

#include "Header1.h"

// оголошення прототипів функцій користувача

void flowerDrawing();                                 // початковий малюнок
void chairmanOfTheVerkhovnaRada();                    // голова Верховної Ради України
void theLeadershipOfTheVerkhovnaRada();               // керівництво Верховної Ради України
void showTheMainMenu();                               // головне меню
void showCommissionsMenu();                           // меню комісій
void showTheMenuOfDeputies();                         // меню депутатів
void showMeetingMenu();                               // меню засідань

// депутати
int getItemsFromFileDep(string, Deputies[]);
Deputies getItemFromStrDep(string);
void saveItemsToFileDep(Deputies[], int, string);
void addDeputies(Deputies[], int, Commission[], int);
int addItemsDep(Deputies[], int, Commission[], int);
void printItemsDep(Deputies[], int);
bool printIdDep(Deputies[], int, int);
void registerDep(Deputies[], int);
void informAboutTheDepByNumber(Deputies[], int, int);
int removalOfDep(Deputies[], int, int);

void numberOfDeputiesPresentDtMeetings(Meeting[], int);

// комісії
int getItemsFromFileCom(string, Commission[]);
Commission getItemFromStrCom(string);
void saveItemsToFileCom(Commission[], int, string);
void addCom(Commission[], int);
int addItemsCom(Commission[], int);
void printItemsCom(Commission[], int);
bool printIdCom(Commission[], int, int);
void numberAndNameOfTheCommission(Commission[], int);
void registerCom(Commission[], int);
void informAboutTheComByNumber(Commission[], int, int);
int removalOfCom(Commission[], int, int);

// засідання
int getItemsFromFileMeeting(string, Meeting[]);
Meeting getItemFromStrMeeting(string);
void saveItemsToFileMeeting(Meeting[], int, string);
int addItemsMeeting(string, Meeting[], int, Commission[], int, Deputies[], int);
void printItemsMeeting(Meeting[], int);
bool printIdMeeting(Meeting[], int, int);
void printItemsFromFileName(string, Meeting[], int h, Deputies[], int);
void registerMeeting(Meeting[], int);
void informAboutTheMeetingByNumber(Meeting[], int, int);
int removalOfMeeting(Meeting[], int, int);