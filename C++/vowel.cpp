#include<iostream>
using namespace std;
 int main()
 {
   char r;
   int lower,upper;
   cout<<"Enter the alphabet:";
   cin>>r;
   lower=(r=='a' ||r=='e' || r=='i' || r=='o' || r=='u');
   upper=(r=='A' || r=='E' || r=='I' || r=='O' || r=='U');
   if (lower || upper)
   cout<<"The alphabet is a vowel"<<endl;
   else
   cout<<"The alphabet is a consonant";
   return 0;
 }
