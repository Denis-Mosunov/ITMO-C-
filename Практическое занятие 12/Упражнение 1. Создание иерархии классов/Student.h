#pragma once

#include "human.h"
#include <string>
#include <vector>

using namespace std;

class student : public human 
{
public:
	
	student(string last_name, string name, string second_name, vector<int> scores) 
		: human(last_name, name, second_name) 
	{
		this->scores = scores;
	}
	
	//--. Obtaining a student's GPA
	float get_average_score()
	{
		//--. Total number of ratings
		unsigned int count_scores = (unsigned int)this->scores.size();		
		//--. Sum of all student grades
		unsigned int sum_scores = 0;		
		//--. Average score
		for( unsigned int i = 0; i < count_scores; ++i ) 
		{
			sum_scores += this->scores[i];
		}
		//--.
		float average_score = (float)sum_scores / (float)count_scores;
		//--.
		return average_score;
	}
private:
	
	//--. Student grades
	vector<int> scores;
};
