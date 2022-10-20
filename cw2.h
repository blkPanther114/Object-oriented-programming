#pragma once
#define CUBE_H
#define LINE_H
#define TIME_H
#define DATE_H
#define SUPERVISOR_H
#define PROJECT_H
#define STUDENTT_H
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
#ifndef STUDENTT_H
#ifndef DELIVERABLE_H
#ifndef POINT1_H
#ifndef CIRCLE_H
#ifndef CYLINDER_H



#include "stdafx.h"
#include<iostream>
#include<iomanip>
using std::setiosflags;
using std::setprecision;
using namespace std;
using std::cout;
using std::endl;

class Point {
public:
	Point(int = 0, int = 0);
	void setPoint(int, int);
	int getX() const { return x; }
	int getY() const { return y; }
	void print();
protected:
	int x, y;
};
#endif
class Circle {
public:
	Circle(double, Point);
	void setRad(double);
	double getRad()const;
	double area()const;
	void print();

protected:
	double rad;
	Point point;
};
#endif
class Cylinder {
public:
	Cylinder(Circle, int h = 0);
	void setHeight(int);
	int getHeight()const;
	double area()const;
	void print();

protected:
	int height;
	Circle c;

};
#endif
class Circle :public Point {
public:
	Circle(double r = 0.0, int x = 0, int y = 0);
	void setRadius(double);
	double getRadius()const;
	double area()const;
	void print();

protected:
	double radius;
};

class Cylinder :public Circle {
public:
	Cylinder(int h = 0, double r = 0.0, int x = 0, int y = 0);
	void setHeight(int);
	int getHeight()const;
	double area()const;	void print();

protected:
	int height;
};
#endif
class Point {
public:
	Point(int = 0, int = 0);
	void setPoint(int, int);
	int getX() const { return x; }
	int getY() const { return y; }
	void print();
protected:
	int x, y;
};

#endif
class Line :public Point {
public:
	Line(double l = 0.0, int x = 0, int y = 0);
	void setLength(double);
	double getLength()const;
	void print();

protected:
	double length;
};
#endif
class Square :public Line {
public:

	Square(Line);
	double area()const;
	double perimiter()const;
	void print();


	class Cube :public Square {
	public:
		Cube(Square);
		double area()const;
		double volume()const;
		void print();

	};
};
#endif
class Time {
public:
	Time();
	void setTime(int, int, int);
	void printMilitary();
	void printStandard();

private:
	int hour;
	int minute;
	int second;
};
#endif
class Date {
public:
	Date(int = 1, int = 1, int = 1900);
	void setDate(int, int, int);
	void printDate() const;

protected:
	int month;
	int day;
	int year;
};
#endif
class Supervisor {
public:
	Supervisor(char*f = NULL, char*l = NULL);
	void setName(char*, char*);
	void printName();

protected:
	char firstName[25];
	char lastName[25];
};
#endif
class Project {
public:
	Project(int = 1, int = 1, int = 1900, char*f = NULL, char*l = NULL, char*pName = NULL);
	void setProject(char*);
	void print();

protected:
	char projectName[25];
	Date d;
	Supervisor s;

};
#endif
class Student {
public:
	Student(int = 1, int = 1, int = 1900, int = 1, int = 1, int = 1900, char*f = NULL, char*l = NULL, char*pName = NULL, char*sName = NULL, char*sID = NULL);//default constructor
	void setStudent(char*, char*);
	void print();

protected:
	char studentName[25];
	char studentID[25];
	Date d;
	Project p;

};
#endif
class Deliverable {
public:
	Deliverable(int = 0, int = 0, int = 0, int = 1, int = 1, int = 1900, char*sName = NULL, char*sID = NULL);//default constructor
	void print();

protected:
	Student u;
	Date d;
	Time t;

};
#endif
