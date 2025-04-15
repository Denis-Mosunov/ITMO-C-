#include "menu.h"
#include <iostream>
#include <limits>

void Menu::showAddGrade() {
    std::string name;
    char grade;
    
    std::cout << "Enter student name: ";
    std::getline(std::cin >> std::ws, name);
    
    std::cout << "Enter grade (A, B, C, D, F): ";
    std::cin >> grade;
    
    try {
        gradeBook.addOrUpdateGrade(name, grade);
        std::cout << "Grade added/updated successfully.\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

void Menu::showGetGrade() {
    std::string name;
    std::cout << "Enter student name: ";
    std::getline(std::cin >> std::ws, name);
    
    try {
        char grade = gradeBook.getGrade(name);
        std::cout << name << "'s grade: " << grade << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

void Menu::run() {
    while (true) {
        std::cout << "\nGrade Book Menu:\n"
                  << "1. Add/Update grade\n"
                  << "2. View student grade\n"
                  << "3. View all grades\n"
                  << "4. Exit\n"
                  << "Enter choice: ";
        
        int choice;
        std::cin >> choice;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }
        
        std::cin.ignore(); // Clear newline
        
        switch (choice) {
            case 1:
                showAddGrade();
                break;
            case 2:
                showGetGrade();
                break;
            case 3:
                gradeBook.displayAllGrades();
                break;
            case 4:
                return;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }
}
