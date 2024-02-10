#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Internship {
public:
    string title;
    string description;
    string duration;
    string requirements;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Duration: " << duration << endl;
        cout << "Requirements: " << requirements << endl;
    }
};

class InternshipManager {
private:
    vector<Internship> internships;
    string filename = "internships.txt";

public:
    void addInternship(const Internship& internship) {
        internships.push_back(internship);
        saveInternshipsToFile();
    }

    void displayInternships() {
        for (const auto& internship : internships) {
            internship.display();
            cout << endl;
        }
    }

    void applyForInternship(const string& title, const string& applicantName, const string& email, const string& resume) {
        // Here you can implement the logic to handle internship applications
        // For simplicity, let's just display a message for now
        cout << "Application for internship '" << title << "' submitted by " << applicantName << " (" << email << ") with resume: " << resume << endl;
    }

    void saveInternshipsToFile() {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& internship : internships) {
                file << internship.title << "|" << internship.description << "|" << internship.duration << "|" << internship.requirements << endl;
            }
            file.close();
        }
    }

    void loadInternshipsFromFile() {
        ifstream file(filename);
        if (file.is_open()) {
            internships.clear(); // Clear existing internships before loading from file
            string line;
            while (getline(file, line)) {
                Internship internship;
                size_t pos = 0;
                pos = line.find("|");
                internship.title = line.substr(0, pos);
                line.erase(0, pos + 1);
                pos = line.find("|");
                internship.description = line.substr(0, pos);
                line.erase(0, pos + 1);
                pos = line.find("|");
                internship.duration = line.substr(0, pos);
                line.erase(0, pos + 1);
                internship.requirements = line;
                internships.push_back(internship);
            }
            file.close();
        }
    }
};

int main() {
    InternshipManager manager;
    manager.loadInternshipsFromFile(); // Load existing internships from file

    // Example: Adding a new internship
    Internship newInternship;
    newInternship.title = "Software Developer Intern";
    newInternship.description = "Work on exciting software projects.";
    newInternship.duration = "3 months";
    newInternship.requirements = "Programming skills required.";
    manager.addInternship(newInternship);

    // Display all available internships
    cout << "Available Internships:\n";
    manager.displayInternships();

    // Example: Applying for an internship
    manager.applyForInternship("Software Developer Intern", "John Doe", "john@example.com", "Attached resume");

    return 0;
}
