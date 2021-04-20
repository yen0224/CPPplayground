#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //設定記數器初值、宣告輸入值型別、根之型別
    int iter_count=1,toFind,initialGuessVal;
    double guessVal,pre_guessVal;
    //user input
    cout<<"Enter a number to find its square root:";
    cin>>toFind;
    cout<<"Enter the initial guess";
    cin>>initialGuessVal;
    //因計算需求，初始值不可改變
    guessVal=initialGuessVal;
    //輸出標題列
    cout<<setw(10)<<left<<"iter."<<"root"<<endl;
    cout<<"---------------------------------"<<endl;
    //計算
    do {
        //計算前先記錄上一次的輸出值，以便運算結束後判斷是否繼續運行回圈
        pre_guessVal=guessVal;
        //輸出上次計算之值，因do-while特性，計算後可能會不符題目條件，故先輸出，再計算 <21行、23行次序可調換>
        cout<<setw(10)<<left<<iter_count<<setw(10)<<right<<setprecision(6)<<fixed<<guessVal<<endl;
        //計算：(n/上次計算值+上次計算值)/2
        guessVal=(toFind/pre_guessVal+pre_guessVal)/2;
        //計數器遞增
        iter_count++;
    }while(pre_guessVal-guessVal>0.00001);
    return 0;
}