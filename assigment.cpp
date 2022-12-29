#include <iostream>
using namespace std;

int main() {
  cout<<endl;
  
 float score; 
cout << "Type a number: ";
cin >> score;

  if(score>90){
    cout<<endl<<"You got A grade";
  }else if(score>70){
    cout<<endl<<"you got b grade";
  }else if (score>50){
    cout<<endl<<"You got C grade";
  }else if (score>30){
    cout<<endl<<"you got D grade";
  }else{
    cout<<endl<<"You failed";
  }
}
