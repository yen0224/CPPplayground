#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int iter_count=1,toFind,initialGuessVal;
    double guessVal,pre_guessVal;
    cout<<"Enter a number to find its square root:";
    cin>>toFind;
    cout<<"Enter the initial guess";
    cin>>initialGuessVal;
    guessVal=initialGuessVal;
    cout<<setw(10)<<left<<"iter."<<"root"<<endl;
    cout<<"---------------------------------"<<endl;
    do {
        pre_guessVal=guessVal;
        cout<<setw(10)<<iter_count<<setw(10)<<guessVal<<endl;
        guessVal=(toFind/pre_guessVal+pre_guessVal)/2;
        iter_count++;
    }while(pre_guessVal-guessVal>0.00001);
    return 0;
}