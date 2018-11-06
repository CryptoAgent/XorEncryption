#include <iostream>
#include <string>
#include "XOR.h"

using namespace std;
int main(){

string str = GetLine();
int key = GetKey();
int len = GetLen(str);
char encr[len];
//Encryption
for(int i  = 0;i<len;i++){
    char ch = str[i];
    ch^=key;
    encr[i]=ch;
}
cout<<"Your encrypted message\r\n";
for(int i = 0;i<len;i++){
    cout<<encr[i];
}

str = GetLine();
key = GetKey();
len = GetLen(str);
char decr[len];
//Decryption
for(int i = 0;i<len;i++){
    char ch = encr[i];
    ch^=key;
    decr[i] = ch;
}
cout<<"\r\nDecrypted message is \r\n";
for(int i = 0;i<len;i++){
    cout<<decr[i];
}

return 0;
}
