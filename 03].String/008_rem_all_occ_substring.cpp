#include<iostream>
using namespace std;

string rem_Occurances(string s,string part){
    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part) , part.length());
    }
    return s;  // modified string s is returned
}

int main(){
    string s , part;
    cin>>s >>part;
    s = rem_Occurances(s,part);  // returned string is assigned to s
    cout<<s<<endl;
    return 0;
}
