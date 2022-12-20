#include <iostream>
#include <string>
using namespace std;


//Dialog of the first example is given below.

int main(){
string name,ID,movie,day,message;

cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";

getline(cin,name);
cout<<"?????: Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
cin>>ID;
int n=ID[0]+ID[1];
cout<<name<<": Fahsai: I think you may be GEAR "<<n-63<<". I have a free movie ticket for you.\n";
cin.ignore();

cout<<"Fahsai: Let's go to the cinema together!!!\n";
cout<<"Fahsai: What movie do you want to watch?\n";

getline(cin,movie);
cout<<name<<": Fahsai: So....which day are you free to go with me?\n";
getline(cin,day);
cout<<name<<": Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
getline(cin,message);
cout<<name<<": Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/\n";
}
