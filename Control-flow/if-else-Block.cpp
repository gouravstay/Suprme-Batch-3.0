#include<iostream>
using namespace std;

int main(){

int budget;
cout << "Enter your Budget: "<<endl;

//input 
cin >> budget;

if(budget > 2000000){ // ture wali conditon
    cout << " you can buy Scorpio " << endl;
}

else{ // false wali condition
    cout << " you cannot buy Scorpio" <<endl;
}

 return 0;
}