#pragma once
#include <iostream>
#include <string>

class Job
{

private:
	std::string jobName;
	int salary;

public:

	Job(std::string jobName, int salary) : jobName(jobName), salary(salary) {};

	void setSalary(int salary) {
		this -> salary = salary;
	}

	void setJobName(std::string jobName) {
		this -> jobName = jobName;
	}

	int getSalary() {
		return this->salary;
	}

	std::string getJobName() const {
		return this->jobName;
	}

	std::string toString() {
		return "Job Title: " + jobName + " Salary: " + std::to_string(salary);
	}

};

