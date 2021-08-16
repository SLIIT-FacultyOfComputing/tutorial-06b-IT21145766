#include "Student.h"
#include <iostream>
using namespace std;
#include<cstring>

// Assign studentId and name
void Student::assignDetails(int pstudentId, char pname[]) {
  
  studentId=pstudentId;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display() {

  cout<<"Student ID: "<<studentId <<endl;
  cout<<"Student name: "<<name <<endl;
  
  
}