// #include<iostream>
// #include<algorithm>
// using namespace std;

// bool checkAnagram(string str1,string str2){ //Time = O(nlogn)
//     if(str1.length()!=str2.length()){
//         return false;
//     }
//     sort(str1.begin(),str1.end());
//     sort(str2.begin(),str2.end());

//     return str1 == str2;
// }

// int main(){
//     string str1 = "listen";
//     string str2 = "silent";

//     bool res = checkAnagram(str1,str2);
//     if(res){
//         cout<<"The given string is anagram"<<endl;
//     }
//     else{
//         cout<<"The given string is not anagram"<<endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
bool areAnagram(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
    
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0)return false;
    }
    return true;
} 
 
int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 