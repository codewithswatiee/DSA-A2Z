#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job" << endl;
    }
    else if(age <= 54){
        cout << "eligible for job";
        if( age >= 55){
            cout << "but retirement soon";
        }
    } else{
        cout << " retirement time" << endl;
    }
    return 0;
}
