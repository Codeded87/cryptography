#include<stdio.h>
#include<stdlib.h>
int asciiValue;
int randomValue;
int j=0;

int main(){
    char str[256];
    int i=0;
    printf("Enter the string");
    scanf("%s",str);
    while(str[i] != '\0'){
        if(checkAscii(str[i])){}
        else{NotAsciiExist(str[i]);}
    }
}

void NotAsciiExist(char ch){
    j = rand() % 256;
    if(randCheck(j)){}
    else{randNotExist(j,ch);}
}

bool randCheck(int z){
    for(int k=0;k<256;k++){
        if(randomValue==z){return true;}
        if(randomValue != z){return false;}
    }
}
void randNotExist(int j, char ch){
    
}
bool checkAscii(char ch){
    for(int p ;p<256;p++){
        if(p ==asciiValue){
            return true;
        }if(p!= asciiValue){if(p==255)return false;}
    }
}
