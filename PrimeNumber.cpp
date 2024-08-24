#include <iostream>

using std::cout;
using std::endl;

int main(void){
    int proof, limit;
    __int64 number;
    number = 3;
    cout << "1" << "\n" << "2" << "\n";
    while(true){
        bool check = true;
        if (number % 2 == 0){
            check = false;
        }
        else{
            proof =3;
            limit = number;
            while (proof < limit){
                if (number % proof == 0){
                    check = false;
                    break;
                }
                limit = number/proof;
                proof = proof + 2;
            }        
        }
        
        while(proof < limit && check == true){
            if (number % proof == 0){check = false;}
            proof++;
        }
        if (check == 1){cout << number << "\n";}
        number = number + 2;
    }

    return 0;
}