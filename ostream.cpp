#include <fstream>
#include <iostream>
#define version "20181127.01"

using namespace std;

int main(int argc, char **argv)
{

  fstream file;
 char s[256];

 file.open("file.txt"); //file.open("file.txt",ios::out|ios::in);

 if(!file)
 {
  cerr<<"open err"<<endl;

 } 
 
#if 1
 file<<"Hello file\n"<<75;

 //file.put('w');
#else
 cin>>s;
 file<<s;
#endif

 file.seekg(ios::beg);

 file.getline(s,256);

 cout<<s<<endl;

 file.close();

}
