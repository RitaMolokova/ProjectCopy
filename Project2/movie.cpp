#include "movie.h"
#include<iostream>
using namespace std;

movie::movie()
{
	name = nullptr;
	time = 0.0;
	year = 0;
	director = nullptr;
	genre = nullptr;
	data = 0;
}

movie::movie(const char* n, double t, int y, const char* d, const char* g, double da)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	time = t;
	year = y;
	director = new char[strlen(d) + 1];
	strcpy_s(director, strlen(d) + 1, d);
	genre = new char[strlen(g) + 1];
	strcpy_s(genre, strlen(g) + 1, g);
	data = da;

}

movie::movie(const movie& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name); 
	time = obj.time;
	year = obj.year;
	director = new char[strlen(obj.director) + 1];
	strcpy_s(director, strlen(obj.director) + 1, obj.director);
	genre = new char[strlen(obj.genre) + 1];
	strcpy_s(genre, strlen(obj.genre) + 1, obj.genre);
	data = obj.data;
}

movie::~movie()
{
	delete[] name;
	delete[] director;
	delete[] genre;
}

void movie::Print()
{
	cout << "Name: " << name << endl << "Time: " << time << endl << "Year: " << year << endl << "Director: " << director << endl << "Genre: " << genre << "Data: " << data;
}

void movie::Input()
{
	char stri[100]{};
	cout << "Movie Name: ";
	cin.getline(stri, 100);
	if (name != nullptr) 
	{
		delete[]name;
	}
	name = new char[strlen(stri) + 1];
	strcpy_s(name, strlen(stri) + 1, stri);

	cout << "Movie Year: ";
	cin >> year;

	cout << "Movie Time: ";
	cin >> time;

	cout << "Movie Director: ";
	cin.getline(stri, 100);
	if (director != nullptr) 
	{
		delete[]director;
	}
	director = new char[strlen(stri) + 1];
	strcpy_s(director, strlen(stri) + 1, stri);

	cout << "Movie Genre: ";
	cin.getline(stri, 100);
	if (genre != nullptr) 
	{
		delete[]genre;
	}
	genre = new char[strlen(stri) + 1];
	strcpy_s(genre, strlen(stri) + 1, stri);
	
	cout << "Movie Data: ";
	cin >> data;

}
