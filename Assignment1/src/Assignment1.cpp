//============================================================================
// Name        : Assignment1.cpp
// Author      : Syed Sadman
// Version     : 2
// Copyright   : Your copyright notice
// Description : Jack is a contender for highest salesman award of his company. He wants to know how
//               many salesman (if any) have sales higher than him in the 5 products given during this
//               mid-year review.
//============================================================================

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;


class Employee{
public:

	//Data member sales to hold employees 5 product sales
	int sales [5];

	//Reads 5 inputs and saves them to sales
	//Input is passed as a sale array
    void input(int productSale[]){
        sales[0] = productSale[0];
        sales[1] = productSale[1];
        sales[2] = productSale[2];
        sales[3] = productSale[3];
        sales[4] = productSale[4];
    }

    int calculateTotalSales(){
        int total = 0;
        for(int i=0; i<5; i++) {
            total = sales[0]+sales[1]+sales[2]+sales[3]+sales[4];
            //total += sales[i];
        }
        return total;
    }

};



	int main() {

		//Save employee instances with input and total sales
		vector<Employee> emplObject;

		//Keep track of the employees
		int employeeCount;

		//Retrieve the number of employees
		cout << "Enter number of employees : ";
		cin >> employeeCount;

		//There needs to be at least 1 employee and no more than 100
		while( !((employeeCount >= 1) && (employeeCount <= 100 )) ) {
			cout << "Enter the number of employees";
			cin >> employeeCount;
		}

		//If conditions are met, proceed
		if ((employeeCount >= 1) && (employeeCount <= 100 )) {

			cout << "(Note: Employee 0 is Jack)" << endl;

			//From the fist employee to the last...
			for(int i=0; i<employeeCount; i++) {
				Employee employee;

				//Request and store the product sales into an array
				int productSales [5] = { };
				cout << "Enter the sales of " << i << " Employee : ";
				cin >> productSales[0] >> productSales[1] >> productSales[2] >> productSales[3] >> productSales[4];

				//Check if product sales match criteria
				for(int i=0;i<5;i++){

					//If any product sales doesn't meet the criteria
					if(!((productSales[i] >= 0) && (productSales[i] <= 50))) {

						//Delete the sales
						for(int j=0;j>5;j++){
							productSales[j] = 0;
						}

						//Ask user to re-enter sales
						cout << "Enter the sales of " << i << " Employee : ";
						cin >> productSales[0] >> productSales[1] >> productSales[2] >> productSales[3] >> productSales[4];
					}

				}

				//If it passes check, start saving
				//Pass the array to inputs
				employee.input(productSales);
				//Save instance of object to differentiate employees
				emplObject.push_back(employee);

			}

	   }

		//Counter to keep track of employees > Jack
		int counter = 0;

		for(int k = 1; k<emplObject.size(); k++){
			Employee Jack = emplObject.at(0);

			//Get jacks total
			int jackTotal = Jack.calculateTotalSales();

			//Get each employees total(previously stored in vector)
			int employeeTotal = emplObject.at(k).calculateTotalSales();

			//Compare sales
			if(jackTotal < employeeTotal) {
				counter++;
			}

		}

		//Print our results
		cout << "Number of employees whose sales are greater than Jack : " << counter;
		return 0;
	}


