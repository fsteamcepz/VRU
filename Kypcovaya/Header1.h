#pragma once

#include <iostream>             // заголовчий файл з класами, функціями і змінними для організації введення та виведення
#include <Windows.h>            // заголовчий файл містить прототип функції SetConsoleOutputCP
#include <string>               // бібліотека, в якій містяться класи з методами і змінними для організації роботи з рядками
#include <iomanip>              // бібліотека, в якій містяться додаткові маніпулятори вводу/виводу (наприклад, setw)
#include <fstream>              // бібліотека введення та виведення у файл (для читання і для запису)
using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

struct Deputies
{
    int id;                    // номер депутата
    string fullName;           // прізвище, ім'я та по батькові
    string dateOfBirth;        // дата народження
    string address;            // адреса
    int telephone;             // мобільний телефон
    int idOfComInDep;          // номер комісії, в якій знаходиться депутат
};

struct Commission
{
    int id2;                   // номер комісії
    string nameProfCom;        // профіль комісії
    string fullNameCom;        // прізвище, ім'я та по батькові Голови комісії
    string dateOfCreation;     // дата створення комісії
};

struct Meeting
{
    int id3;                   // номер засідання
    string location;           // місце проведення
    int idCom;                 // номер комісії
    string themeOfThe;         // тема проведення
    int sign;                  // ознака присутності
};