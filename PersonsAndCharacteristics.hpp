#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


struct Person {
	std::string name;
	std::string job;
};


struct evidence {
	std::string evidence_name;
	std::string description;
};


void Print_pers(const Person& P);

void Print_Char();

void Print_evi(const evidence& E);

void cafe();

void house();

void hospital();

void university();

void random_event1();

void random_event2();

void random_event3();

void fight();

void fight2();

void worst_ending_Intuition();

void worst_ending_Power();

void bad_ending_Intuition();

void bad_ending_Power();

void good_ending_Intuition();

void good_ending_Power();


void endings();