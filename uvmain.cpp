#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <array>
#include <vector>
#include <sys/stat.h>

using namespace std;

// This method retrieves the manifest specifications
string[] get_manifest() {
    // We will return an array of these variables at the end
    string function_call;
    string variable;
    string constructor_call;

    string line;

    // Open an input stream into the manifest file
    ifstream manifile ( "manifest.txt" );

    // If file is open, get its contents
    if ( manifile.is_open() ) {
        cout << "Manifest file open.\n" << endl;

        // While there are lines in the file
        while ( getline(manifile, line) ) {
            // Starting after the first line
            if ( line.find("?ULTRAEV") == string::npos ) {
                string maniword;

                // Get specifications
                if ( line.find("VARTAG") != string::npos ) {
                    stringstream iss(line);

                    // Get second word of line and store it in the correct variable
                    iss >> maniword;
                    iss >> maniword;

                    variable = maniword;
                } else if ( line.find("FUNCTION_EXECUTE_TAG") != string::npos ) {
                    stringstream iss(line);

                    // Get second word of line and store it in the correct variable
                    iss >> maniword;
                    iss >> maniword;

                    function_call = maniword;
                } else if ( line.find("CONSTRUCTOR_INIT_TAG") != string::npos ) {
                    stringstream iss(line);

                    // Get second word of line and store it in the correct variable
                    iss >> maniword;
                    iss >> maniword;

                    constructor_call = maniword;
                }
            }
        }

        // Create final array with preference values and return
        string final_strings [3] = { variable, function_call, constructor_call };

        return final_strings;
    } else {
        cout << "Cannot open manifest file." << endl;
    }
}

// This method is where all of the functions come together to produce finished files
int main() {}