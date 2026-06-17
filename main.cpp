#include <iostream>
using namespace std;
int main(){
    bool isSunny = false;
    bool isWeekend = false;
    
    if (isSunny){
        if(isWeekend){
            cout << "I will be happy and go to my mom's house" << endl;
        }
        else{
            cout << "I will be happy but not go to my mom's house" << endl;
        }
    }
    else{
        if(isWeekend){
            cout << "Iam not happy but I will go to my mom's house atleast" << endl;
        }
        else{
            cout << "I am not gonna be happy and i am not going to my moms house" << endl;
        }

    }
    return 0;
}
    
