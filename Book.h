#pragma once

class Book {
public:
	Book();
	Book(char* name, char* author, int releaseYear, char* annotation, char* genre, int size);
	Book(Book* orig);
	~Book();

	void setName(char* name);
	char* getName();
	void setAuthor(char* author);
	char* getAuthor();
	void setReleaseYear(int releaseYear);
	int getReleaseYeare();
	void setAnnotation(char* annotation);
	char* getAnnotation();
	void setGenre(char* genre);
	char* getGenre();
	void setSize(int size);
	int getSize();
private:
	// Книга : название, автор, год выпуска, аннотация, жанр, объем страниц
	char* name;
	char* author;
	int releaseYear;
	char* annotation;
	char* genre;
	int size;
};