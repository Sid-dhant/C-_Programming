#include<iostream> 
using namespace std; 

int main() 
{ 
    char s1[] = "Siddhant", s2[100]; 
    int i;
    cout<<"string s1 : "<<s1<<"\n"; 

    for (i = 0; s1[i] != '\0'; ++i) { 

        s2[i] = s1[i]; 
    } 
    s2[i] = '\0'; 

    cout<<"string s2 : "<<s2<<"\n";
    return 0; 
} 
