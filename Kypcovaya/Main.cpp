#include "Header.h"
#include "Header1.h"

// Автоматизована інформаційно - пошукова система Верховної Ради України

int main()
{
	SetConsoleOutputCP(1251);                                 // вставка кодової таблиці Windows-1251 в потік виведення
	SetConsoleCP(1251);                                       // вставка кодової таблиці Windows-1251 в потік введення
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	string PATH = "Народні депутати України.txt";             // ім'я файла "Народні депутати України.txt"
	string PATH2 = "Комісії.txt";                             // ім'я файла "Комісії.txt"
	string PATH3 = "Засідання.txt";                           // ім'я файла "Засідання.txt
	string PATH4;                                             // ім'я файла. Вводиться з клавіатури

	Deputies numberOfDeputies[50];                            // до 50 депутатів
	Commission numberOfCommission[20];                        // до 20 комісій
	Meeting numberOfMeeting[20];                              // до 20 засідань

	flowerDrawing();                                          // виведення квітів на екран
	system("pause");                                          // пауза
	system("cls");                                            // очистка екрану

	int delD;                                                 // видалення депутата за номером
	int delC;                                                 // видалення комісії за номером

	int a,                                                    // пошук депутата за номером
		b,                                                    // пошук комісії за номером
		fileName;                                             // пошук засідання за номером
	int answer, choice, menu, choice2;                        // вибір
	char ans, ans2;                                           // перегляд
	int n,                                                    // депутат
		m,                                                    // комісія
		h;                                                    // присутність депутата(ів) на засіданні


	m = getItemsFromFileCom(PATH2, numberOfCommission);
	n = getItemsFromFileDep(PATH, numberOfDeputies);
	h = getItemsFromFileMeeting(PATH3, numberOfMeeting);

	do
	{
		showTheMainMenu();                                    // виведення головного меню на екран
		cin >> menu;

		switch (menu)
		{
		case 0: 
			saveItemsToFileDep(numberOfDeputies, n, PATH);
			saveItemsToFileCom(numberOfCommission, m, PATH2);
			saveItemsToFileMeeting(numberOfMeeting, h, PATH3);
			return 0;
		case 1:
			system("cls");
			chairmanOfTheVerkhovnaRada();
			system("pause");
			break;
		case 2:
			system("cls");
			theLeadershipOfTheVerkhovnaRada();
			system("pause");
			break;
		case 3:
			showCommissionsMenu();
			cin >> choice;
			switch (choice)
			{
			case 0:
				saveItemsToFileDep(numberOfDeputies, n, PATH);
				saveItemsToFileCom(numberOfCommission, m, PATH2);
				saveItemsToFileMeeting(numberOfMeeting, h, PATH3);
				return 0;
			case 1:
				system("cls");
				cout << endl;
				printItemsCom(numberOfCommission, m);
				system("pause");
				continue;
			case 2:
				system("cls");
				cout << endl;
				m = addItemsCom(numberOfCommission, m);
				continue;
			case 3:
				system("cls");
				registerCom(numberOfCommission, m);
				cout << endl;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
				cout << "Введіть номер комісії про яку хочете дізнатись: ";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				cin >> b;

				if (printIdCom(numberOfCommission, m, b))
				{
					informAboutTheComByNumber(numberOfCommission, m, b);
				}
				else
				{
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << endl << "Ви вказали невірний номер комісії!\n\n";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				}
				system("pause");
				continue;
			case 4:
				system("cls");
				printItemsCom(numberOfCommission, m);
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
				cout << "Введіть номер комісії яку хочете видалити: ";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				cin >> delC;

				if (printIdCom(numberOfCommission, m, delC))
				{
					m = removalOfCom(numberOfCommission, m, delC);
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << "\nБажаєте переглянути комісії? (1/0)  ";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
					cin >> ans;
					if (ans == '1')
					{
						printItemsCom(numberOfCommission, m);
					}
					else
					{
						continue;
					}
				}
				else
				{
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << endl << "Ви вказали невірний номер комісії!\n\n";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				}
				system("pause");
				continue;
			case 5:
				showTheMainMenu();
				continue;
			default:
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << "\n\t\t\t\t\t\t\t\tНевірно введений код операції.\n\n";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				system("pause");
			}
			break;
		case 4:
			showTheMenuOfDeputies();
			cin >> answer;
			switch (answer)
			{
			case 0:
				saveItemsToFileDep(numberOfDeputies, n, PATH);
				saveItemsToFileCom(numberOfCommission, m, PATH2);
				saveItemsToFileMeeting(numberOfMeeting, h, PATH3);
				return 0;
			case 1:
				system("cls");
				cout << endl;
				printItemsDep(numberOfDeputies, n);
				system("pause");
				continue;
			case 2:
				system("cls");
				cout << endl;
				n = addItemsDep(numberOfDeputies, n, numberOfCommission, m);
				continue;
			case 3:
				system("cls");
				registerDep(numberOfDeputies, n);
				cout << endl;
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
				cout << "\nВведіть номер депутата про якого хочете дізнатись: ";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				cin >> a;
				if (printIdDep(numberOfDeputies, n, a))
				{
					informAboutTheDepByNumber(numberOfDeputies, n, a);
				}
				else
				{
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << endl << "Ви вказали невірний номер депутата!\n\n";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				}
				system("pause");
				continue;
			case 4:
				system("cls");
				printItemsDep(numberOfDeputies, n);
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
				cout << "Введіть номер депутата якого хочете видалити: ";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				cin >> delD;

				if (printIdDep(numberOfDeputies, n, delD))
				{
					n = removalOfDep(numberOfDeputies, n, delD);
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << "\nБажаєте переглянути депутатів? (1/0)  ";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
					cin >> ans2;
					if (ans2 == '1')
					{
						printItemsDep(numberOfDeputies, n);
					}
					else
					{
						continue;
					}
				}
				else
				{
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << endl << "Ви вказали невірний номер депутата!\n\n";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				}
				system("pause");
				continue;
			case 5:
				showTheMainMenu();
				continue;
			default:
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << "\n\t\t\t\t\t\t\t\tНевірно введений код операції.\n\n";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				system("pause");
			}
			continue;
		case 5:
			showMeetingMenu();
			cin >> choice2;
			switch (choice2)
			{
			case 0:
				saveItemsToFileDep(numberOfDeputies, n, PATH);
				saveItemsToFileCom(numberOfCommission, m, PATH2);
				saveItemsToFileMeeting(numberOfMeeting, h, PATH3);
				return 0;
			case 1:
				system("cls");
				cout << endl;
				printItemsMeeting(numberOfMeeting, h);
				system("pause");
				continue;
			case 2:
				system("cls");
				cout << endl;
				h = addItemsMeeting(PATH4, numberOfMeeting, h, numberOfCommission, m, numberOfDeputies, n);
				continue;
			case 3:
				system("cls");
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((14)));
				cout << endl << "Введіть номер засідання: ";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				cin >> fileName;

				if (printIdMeeting(numberOfMeeting, h, fileName))
				{
					printItemsFromFileName(PATH4, numberOfMeeting, h, numberOfDeputies, n);
					cout << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
					cout << endl << "Ви вказали невірний номер засідання!\n\n";
					SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				}
				system("pause");
				continue;
			case 4:
				showTheMainMenu();
				continue;
			default:
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
				cout << "\n\t\t\t\t\t\t\t\tНевірно введений код операції.\n\n";
				SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
				system("pause");
			}
			break;
		case 6:
			system("cls");
			numberOfDeputiesPresentDtMeetings(numberOfMeeting, n);
			system("pause");
			break;
		default:
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((10)));
			cout << "\n\t\t\t\t\t\t\t\tНевірно введений код операції.\n\n";
			SetConsoleTextAttribute(hConsoleHandle, (WORD)((15)));
			system("pause");
		}
	} while (menu);
	return 0;
	}