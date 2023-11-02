#include "Manual.h"

Manual::Manual() {

};
Manual::Manual(char* name, char* author, int releaseYear, char* educFacility, int yearStudy, int size) {

};
Manual::Manual(Manual* orig) {

};
Manual::~Manual() {

};

void Manual::print() {

};
void Manual::setProduct() {

};
void Manual::getFromFile(ifstream& fin) {

};
void Manual::printInFile(ofstream& fout) {

};

void Manual::setName(char* n) {

};
char* Manual::getName() {
	return name;
};
void Manual::setAuthor(char* a) {

};
char* Manual::getAuthor() {
	return author;
};
void Manual::setReleaseYear(int rY) {

};
int Manual::getReleaseYear() {
	return releaseYear;
};
void Manual::setEducFacility(char* eF) {

};
char* Manual::getEducFacility() {
	return educFacility;
};
void Manual::setYearStudy(char* yS) {

};
int Manual::getYearStudy() {
	return yearStudy;
};
void Manual::setSize(int s) {

};
int Manual::getSize() {
	return size;
};