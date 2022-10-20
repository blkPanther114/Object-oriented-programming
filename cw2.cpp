#define CUBE_H
#define LINE_H
#define TIME_H
#define DATE_H
#define SUPERVISOR_H
#define PROJECT_H
#define STUDENT_H
#define DELIVERABLE_H
#define POINT1_H
#define CIRCLE_H
#define CYLINDER_H
#ifndef SQUARE_H
#define SQUARE_H
#define POINT_H
#ifndef POINT_H

#ifndef CUBE_H
#ifndef LINE_H
#ifndef TIME_H
#ifndef DATE_H
#ifndef SUPERVISOR_H
#ifndef PROJECT_H
#ifndef STUDENT_H
#ifndef DELIVERABLE_H
#ifndef POINT1_H
#ifndef CIRCLE_H
#ifndef CYLINDER_H


#include "stdafx.h"
#include "cw2.h"
#include<iostream>
#include<iomanip>
using std::setiosflags;
using std::setprecision;
using namespace std;
using std::cout;
using std::endl;

Point::Point(int a, int b) {
	setPoint(a, b);
}

void Point::setPoint(int a, int b)
{
	x = a;
	y = b;
}

void Point::print()
{
	cout << "[" << x << "," << y << "]" << endl;
}

Circle::Circle(double r, Point p) :point(p) {
	setRadius(r);
}

void Circle::setRadius(double r) {
	radius = (r >= 0 ? r : 0);
}

double Circle::getRadius()const
{
	return radius;
}

double Circle::area()const {
	return 3.14159*radius*radius;
}

void Circle::print()
{
	cout << "radius = " << radius << endl;
	cout << "The area for Circle is:" << setiosflags(ios::fixed) << setprecision(2) << area() << endl;
}


Cylinder::Cylinder(Circle c, int h) :c(c)
{
	setHeight(h);
}

void Cylinder::setHeight(int h)
{
	height = (h >= 0 ? h : 0);
}

int Cylinder::getHeight()const {
	return height;
}

double Cylinder::area()const
{
	return 3.14159*c.area()*height;
}

void Cylinder::print()
{
	cout << "Height = " << height << endl;
	cout << "The area of the Cylinder is:" << setiosflags(ios::fixed) << setprecision(2) << area() << endl;
}

int _tmain()
{
	Point p(14, 8);
	p.print();
	Circle c(12, p);
	c.print();
	Cylinder C(c, 12);
	C.print();
	return 0;
}
Circle::Circle(double r, int a, int b) :Point(a, b)
{
	setRadius(r);
}

void Circle::setRadius(double r)
{
	radius = (r >= 0 ? r : 0);
}

double Circle::getRadius()const
{
	return radius;
}

double Circle::area()const
{
	return 3.14159*radius*radius;
}

void Circle::print()
{
	cout << "Center = " << x << "" << y << ";Radius = " << radius << endl;
	cout << "The area of the Circle is:" << setiosflags(ios::fixed) << setprecision(2) << area() << endl;
}

Cylinder::Cylinder(int h, double r, int a, int b) :Circle(r, a, b) {
	setHeight(h);
}

void Cylinder::setHeight(int h)
{
	height = (h >= 0 ? h : 0);
}

int Cylinder::getHeight()const
{
	return height;
}

double Cylinder::area()const
{
	return 3.14159*radius*radius*height;
}

void Cylinder::print()
{
	cout << "Cylinder = " << x << "" << y << ";  Radius = " << radius << "  Height = " << height << endl;
	cout << "The area of the Cylinder is:" << setiosflags(ios::fixed) << setprecision(2) << area() << endl;
}

int _tmain()
{
	Point p(30, 50);
	p.print();
	Circle c(12, 14, 8);
	c.print();
	Cylinder C(12, 12, 12, 6);
	C.print();

	return 0;
}

Point::Point(int a, int b)
{
	setPoint(a, b);
}


void Point::setPoint(int a, int b)
{
	x = a;
	y = b;
}

void Point::print()
{
	cout << "[" << x << "," << y << "]" << endl;
}


Line::Line(double l, int a, int b) :Point(a, b){
setLength(l);
}

void Line::setLength(double l)
{
	length = (l >= 0 ? l : 0);
}

double Line::getLength()const
{
	return length;
}

void Line::print()
{
	cout << "Line = " << length << endl;

}

Square::Square(Line l) :Line(l)
{

}


double Square::area()const
{

	return length*length;
}

double Square::perimiter()const
{
	return 4 * length;
}

void Square::print()
{
	cout << "The area of the square is:" << area() << endl;
	cout << "The perimiter of the square is:" << perimiter() << endl;
}

Cube::Cube(Square s) {
	:Square(s)

};

double Cube::area()const {
	return length*length * 6;
}

double Cube::volume()const
{
	return length*length*length;
}

void Cube::print()
{
	cout << "The volume of the cube is: " << volume() << endl;
	cout << "The area of the cube is:" << area() << endl;
}

int main()
{
	Point p(30, 50);
	p.print();
	Line l(11, 10, 9);
	l.print();
	Square s(l);
	s.print();
	Cube c(l);
	c.print();
	return 0;
}
Time::Time()
{
	hour = minute = second = 0;

}

void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h<24) ? h : 0;
	minute = (m >= 0 && m<60) ? m : 0;
	second = (s >= 0 && s<60) ? s : 0;
}

void Time::printMilitary()
{
	cout << (hour<10 ? "0" : " ") << hour << ":" << (minute<10 ? "0" : "") << minute;
}

void Time::printStandard()
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
		<< ":" << (minute<10 ? "0" : "") << minute
		<< ":" << (second<10 ? "0" : "") << second
		<< (hour<12 ? " AM" : " PM");
}
Date::Date(int d, int m, int y)
{

}

void Date::setDate(int d, int m, int y)
{
	day = (d >= 1 && d <= 31) ? d : 0;
	month = (m >= 1 && m <= 12) ? m : 0;
	year = (y >= 1900 && y <= 2017) ? y : 0;
}


void Date::printDate() const
{
	cout << "\nThe date is:" << day << "/" << month << "/" << year << endl;
}

Supervisor::Supervisor(char *f, char *l)
{

}

void Supervisor::setName(char *f, char *l)
{
	int length = strlen(f);
	length = (length < 25 ? length : 24);
	strncpy_s(firstName, f, length);
	firstName[length] = '\0';

	int Length = strlen(l);
	Length = (Length < 25 ? Length : 24);
	strncpy_s(lastName, l, Length);
	lastName[Length] = '\0';

}

void Supervisor::printName()
{
	cout << "\nThe Name of the Supervisor is : " << firstName << " " << lastName << endl;
}

Project::Project(int, int, int, char*f, char*l, char*pName)
	:d(d), s(s)
{

}


void Project::setProject(char *pName)
{
	int length = strlen(pName);
	length = (length < 25 ? length : 24);
	strncpy_s(projectName, pName, length);
	projectName[length] = '\0';
}

void Project::print()
{
	cout << "\nThe name of the project is: " << projectName << endl;

}

Student::Student(int, int, int, int, int, int, char*f, char*l, char*pName, char*sName, char*sID)
	:d(d), p(p)
{

}

void Student::setStudent(char *sName, char *sID)
{
	int length = strlen(sName);
	length = (length < 25 ? length : 24);
	strncpy_s(studentName, sName, length);
	studentName[length] = '\0';

	int Length = strlen(sID);
	Length = (Length < 25 ? Length : 24);
	strncpy_s(studentID, sID, Length);
	studentID[Length] = '\0';
}

void Student::print()
{
	cout << "\nThe name of the Student is: " << studentName << endl;
	cout << "The student ID is: " << studentID << endl;
}

Deliverable::Deliverable(int, int, int, int, int, int, char*sName, char*sID)
	:t(t), d(d), u(u)
{

}


void Deliverable::print()
{

}

int _tmain()
{
	Time t;
	Date p;
	Supervisor s;
	Project G;
	Student u;
	Deliverable d;

	t.setTime(13, 27, 6);
	cout << "\n\nMilitary time is: ";
	t.printMilitary();
	cout << "\nStandard time  is  ";
	t.printStandard();

	p.setDate(11, 11, 1992);
	p.printDate();

	s.setName("james", "apple");
	s.printName();

	G.setProject("oop Project");
	G.print();

	u.setStudent("Amy", "123456");
	u.print();

	return 0;
}
