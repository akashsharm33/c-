#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int constant=0;
    int vowel=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowel++;
        else
        constant++;
        i++;
    }
    cout<<constant<<endl;
    cout<<vowel;
}
