#include<iostream>
using namespace std;

int odd_even,odd,even;

int Number (){
    cin >> odd_even;
    while(odd_even != 0){
        if (odd_even%2 == 0){
            even++;
            cout << "Enter an integer: ";
            Number();
        }
        else{
            odd++;
            cout << "Enter an integer: ";
            Number();
        }
    }
    return 0;
}

int main(){
    cout << "Enter an integer: ";
    Number();
    cout << "#Even numbers = "<< even <<"\n";
    cout << "#Odd numbers = "<< odd;
    return 0;
}
