#include<bits/stdc++.h>
using namespace std;
int main(){
    string s=("jayes");
    string s1(5,'*');
    cout<<s.length();
    cout<<s.at(5);//here we are finding the value at index 5
    s.clear()//clear the string
    string s3=s.substr(0,3);
    cout<<s3;//it is used to derive the substring here the first 3 characters is printed
    int index=s.for("es");//this statement if it finds it return the starting index else return -1
    s.replace(ind,3,"are");//to replace the index of the sub string
    //replace(a,b,str) b charecters of a index from str

    cout<<s;

}
