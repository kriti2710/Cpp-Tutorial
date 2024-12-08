# include <iostream>
# include <string>
using namespace std;

int main() {
  int age;
  cout<<"Enter your age: ";
  cin>>age;
  string name;
  cout<<"Enter your name: ";
  getline(cin, name);
  cout<<"Your age is "<<age<<endl;
  cout<<"Your name is "<<name<<endl;
  return 0;
}
