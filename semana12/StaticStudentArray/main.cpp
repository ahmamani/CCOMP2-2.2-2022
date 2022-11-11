#include <iostream>
#include "StaticStudentArray.h"

using namespace std;

int main() {

    StaticStudentArray a(3);    

    Student s1("Samuel", 123414, 20);
    Student s2("Rodrigo", 123442, 18);
    Student s3("Esteban", 978654, 17);

    a.setAt(0, s1);
    a.setAt(1, s2);   
    a.setAt(2, s3);   

    cout << a << endl;    
 
    return 0;
}
