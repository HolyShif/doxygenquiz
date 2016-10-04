/** @file college.h
*		@brief header file for tracking courses and GPA
*		@author Matthew Aberegg
*/
//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************

#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H

/** The college class. Used to construct, add, remove, and track college courses
*		as well as the user's GPA and credit hours taken.
*/
class College{
	public:
		/** The College constructor.
		*		@param s a string for the name
		*/
	College(std::string s);
	~College();
	College(const College& other);
	College& operator =(const College& other);
	/** Member function add.
	*		adds a course to the list
	*		@param c a course object
	*/
	void add(course& c);
	/** Member function remove.
	*		removes a course from the list if found
	*		@param coursename a string of the desired removal
	*/
	void remove(std::string coursename);
	void display(std::ostream& outs);
	/** Member function hours.
	* 	@return total number of credit hours
	*/
	double hours();
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
