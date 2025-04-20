#pragma once 

#include "IdCard.h"
#include <string>

using namespace std;



//---------------------------------
//--.
class Student
{

public:
	// Конструктор класса Student
    Student(string, string, IdCard*);
	Student(string, string);

    // Установка имени студента
    void set_name(string);
    // Получение имени студента
    string get_name();
    // Установка фамилии студента
    void set_last_name(string);
    // Получение фамилии студента
    string get_last_name();
    // Установка промежуточных оценок
    void set_scores(int []);
    // Установка среднего балла
    void set_average_score(double);
    // Получение среднего балла
    double get_average_score();
	
    //--.
	void display() const; 

	void setIdCard(IdCard *c);
	IdCard getIdCard();

    //----------------------------------------------------------------------
    //--.
    friend bool operator== (const Student& p1, const Student& p2)
    {
        return (p1.name == p2.name && p1.last_name == p2.last_name) ? true : false;
    }

    //----------------------------------------------------------------------
    //--.
    friend bool operator< (const Student& p1, const Student& p2)
    {
        if (p1.last_name == p2.last_name)
            return (p1.name < p2.name) ? true : false;
        return (p1.last_name < p2.last_name) ? true : false;
    }

    //----------------------------------------------------------------------
    //--.
    friend bool operator!= (Student& p1, Student& p2)
    {
        return !(p1 == p2);
    }

    //----------------------------------------------------------------------
    //--.
    friend bool operator> (Student& p1, Student& p2)
    {
        return !(p1 < p2) && !(p2 == p2);
    }
private:
        // Промежуточные оценки
        int scores[5];
        // Средний балл
        double average_score;
        // Имя
        string name;
        // Фамилия
        string last_name;
		// Карточка
		IdCard *iCard;
		
};


//---------------------------------
//--.
class compareStudent
{
public:
    bool operator()(const Student* ptrSt1, const Student* ptrSt2) const
    {
        //--.
        if( ptrSt1 == nullptr || ptrSt2 == nullptr )
        {
            return ptrSt1 != nullptr;
        }
        //--.
        return *ptrSt1 < *ptrSt2;
    }
};
