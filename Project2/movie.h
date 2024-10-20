#pragma once
class movie
{
   // режисер
   // жанр
   // дата
		char* name;
		double time;
		int year;
		char* director;
		char* genre;
		double data;
	public:
		movie();
		movie(const char* n, double t, int y, const char* d, const char* g, double da);
		movie(const movie & obj);
		~movie(); 
		void Print();
		void Input();
};

