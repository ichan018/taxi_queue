#include <iostream>
#include <string>
#include <queue>
using namespace std;


class TaxiRider {
    public:
       string GetName(){
           return userName;
       }
       string SetName(string name){
           userName = name;
       }
       TaxiRider(string name):userName(name){}
    private:
       string userName="";
};

//stack<TaxiRider*> s;
queue<TaxiRider*> s;

int main(){
   
   //queue<TaxiRider*> s;

   string userInput = "";
   while(userInput != "-1"){
       cout << "Enter names (Type -1 to stop adding names):";
       cin >> userInput;

       if(userInput != "-1"){
          TaxiRider* t = new TaxiRider(userInput);
          s.push(t);
       }
   }

   while(!s.empty()){
       cout << (s.front())->GetName() << " " << endl;
       s.pop();
   }
   return 0;
}
