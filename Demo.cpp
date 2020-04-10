
#include "FamilyTree.hpp"

#include <iostream>
using namespace std;

int main() {

	family::Tree Dan("Dan"); 
	Dan.addFather("Dan", "David")
	.addMother("Dan", "Lisa")  
	.addFather("David", "Asaf")
	.addMother("David", "Sasha")
	.addFather("Lisa", "Jacob")
	.addMother("Lisa", "Alice")
	.addFather("Asaf", "Alon")
    .addMother("Asaf", "Laura")
    .addFather("Jacob", "Yuri")
    .addFather("Alon", "Bentzi")
    .addMother("Alon", "Dorit")
    .addFather("Yuri", "Alex")
    .addFather("Alex", "Boris")
    .addMother("Boris", "Johana")
    .addFather("Johana", "Bruce");
	Dan.display();

	cout << Dan.find("great-great-great-grandfather") <<endl;
    cout << Dan.find("great-great-great-great-grandmother") << endl;
    cout << Dan.find("great-great-great-great-great-grandfather") << endl;

    return 0;
}
