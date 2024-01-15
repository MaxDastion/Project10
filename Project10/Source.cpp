#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

using namespace std;

void main() {
    for (int i = 1; i <= 3; ++i) {
        filesystem::create_directory("folder" + to_string(i));
        for (int j = 1; j <= 3; ++j) {
            ofstream file("folder" + to_string(i) + "/file" +std::to_string(j) + ".txt");
            file << "This is the content of file" + to_string(j) + ".txt in folder" + to_string(i);
            file.close();
        }
    }
   
}