#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    int noOfq, q, y;
    string x;
    map<string, int> stds;  // map to store student names and their marks
    vector<int> results;    // vector to store the results for query type 3
    
    cin >> noOfq;
    
    for(int i = 0; i < noOfq; i++) {
        cin >> q >> x;
        
        if(q == 1) {
            cin >> y;  // Read the marks for query type 1
            stds[x] += y;  // Add or update the student's marks
        } 
        else if(q == 2) {
            stds.erase(x);  // Remove the student from the map
        } 
        else if(q == 3) {
            // Find the student and store the result
            auto it = stds.find(x);
            if(it != stds.end()) {
                results.push_back(it->second);  // Store the marks if found
            } else {
                results.push_back(0);  // Store 0 if the student doesn't exist
            }
        }
    }
    
    // Output all results for query type 3 at the end
    for(int res : results) {
        cout << res << endl;
    }
    
    return 0;
}
