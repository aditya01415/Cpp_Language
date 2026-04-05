/*
Ques : Write a program to check whether a 
given character is a vowel or a consonant.
*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter A character : ";
    cin>>ch;

    int ch_num=(int)ch;

    if((ch_num >= 65 && ch <= 90) || (ch_num >= 97 && ch_num <= 122)){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            cout<<"Given char is a Vowel";
        } else {
            cout << "Given char is Consonant";
        }
    } else {
        cout<<"It's not a alphabet";
    }

    
}