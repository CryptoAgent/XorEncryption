#ifndef XOR
#define XOR

std::string GetLine(){
std::cout<<"\r\nEnter message \r\n";
std::string str;
std::cin.sync();
getline(std::cin,str);
return str;
}

int GetLen(std::string str){
int len = 0;
    for(int i = 0;str[i]!='\0';i++){
        len++;
    }
return len;
}

int GetKey(){
std::cout<<"\r\nEnter key \r\n";
int k;
std::cin>>k;
return k;
}

#endif
