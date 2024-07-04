 #include<iostream>
 using namespace std;
 


 int main(){

// cout << "Gaurav" << endl;
// cout << "Gaurav" << endl;
// cout << "Gaurav" << endl;

//  for
// for(int count = 1; count <= 10; count = count + 1 ){
//   cout << " Gaurav " << endl;
// }


//  counting 1 to 10;
// for (int i=1; i<=10; i=i+1){
//    cout << i << endl;
// }

//counting 51 to 69;
// for(int i=51; i<=69; i= i+1){
// cout << i << endl;
// }

// looping with breke
  for(int i=1; i<=10; i = i+1 ){
    cout << i << " ";

    if( i == 5){
      break;
    }
   cout << "Iteration: " << i << endl;
  
  }

 // looping with continue
  for(int i=1; i<=10; i = i+1 ){
    cout << i << " ";

    if( i == 5){
      continue;
    }
    cout << "Iteration: " << i << endl;
  }


  return 0;
 }