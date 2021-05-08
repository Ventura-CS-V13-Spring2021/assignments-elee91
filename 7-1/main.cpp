#include "address.hpp"
#include "dob.hpp"
#include "student.hpp"

int main()
{
	DOB student_dob(12, 24, 2000);
	Address student_address("4667 Telegraph Road", "CA", 93003);
	
	Student s1("Johns", 9001001, student_dob, student_address);
	s1.printStudent();
	DOB newdob = s1.getDob();
	newdob.setYear(2020);
	s1.setDob(newdob);
	s1.printStudent();

	student_dob.setDob(1, 1, 2020);
	student_address.setAddress("1000 Grand Ave", "CA", 90001);
	s1.setDob(student_dob);
	s1.setAddress(student_address);
	s1.printStudent();
}