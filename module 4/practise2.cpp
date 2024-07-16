#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
    
    Cricketer dhoni;
    dhoni.jersey_no = 7;
    dhoni.country = "India";

    
    Cricketer kohli;

    
    kohli.jersey_no = dhoni.jersey_no;
    kohli.country = dhoni.country;

    
    cout << "Kohli's Jersey Number: " << kohli.jersey_no << endl;
    cout << "Kohli's Country: " << kohli.country << endl;

    return 0;
}
