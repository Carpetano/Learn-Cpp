#pragma once
#include <iostream>
#include "Job.h"
#include <string>

class Employee
{

private:
	std::string name;
	Job job;

public:

	Employee(std::string name, Job job) : name(name), job(job) {};

	void setName(std::string name) {
		this->name = name;
	}

	void setJob(Job job) {
		this->job = job;
	}

	std::string getName() {
		return this->name;
	}

	Job getJob() {
		return this->job;
	}

	std::string toString() {
		return "Employee: " + name + " " + job.toString();
	}

};

