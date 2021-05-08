#ifndef DOB_H
#define DOB_H

class DOB
{
private:
	int month;
	int day;
	int year;
public:
	DOB();
	DOB(int m, int d, int y);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void printDate() const;
	void setDob(int m, int d, int y);
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);
};
#endif