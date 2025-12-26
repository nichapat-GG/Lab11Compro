#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    srand(time(0));
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    int randomgrade = rand()%9;
    cout << "You will get "<< grade[randomgrade] <<" in this 261102.";
}
