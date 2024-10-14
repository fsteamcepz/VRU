#pragma once

#include <iostream>             // ���������� ���� � �������, ��������� � ������� ��� ���������� �������� �� ���������
#include <Windows.h>            // ���������� ���� ������ �������� ������� SetConsoleOutputCP
#include <string>               // ��������, � ��� �������� ����� � �������� � ������� ��� ���������� ������ � �������
#include <iomanip>              // ��������, � ��� �������� �������� ����������� �����/������ (���������, setw)
#include <fstream>              // �������� �������� �� ��������� � ���� (��� ������� � ��� ������)
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
    int id;                    // ����� ��������
    string fullName;           // �������, ��'� �� �� �������
    string dateOfBirth;        // ���� ����������
    string address;            // ������
    int telephone;             // �������� �������
    int idOfComInDep;          // ����� ����, � ��� ����������� �������
};

struct Commission
{
    int id2;                   // ����� ����
    string nameProfCom;        // ������� ����
    string fullNameCom;        // �������, ��'� �� �� ������� ������ ����
    string dateOfCreation;     // ���� ��������� ����
};

struct Meeting
{
    int id3;                   // ����� ��������
    string location;           // ���� ����������
    int idCom;                 // ����� ����
    string themeOfThe;         // ���� ����������
    int sign;                  // ������ ����������
};