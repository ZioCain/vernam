#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAXPW 20
using namespace std;

int main(int argc, char *argv[]){
  // vernam encrypt <filename> <outputfile>
  // vernam decrypt <filename> <outputfile>
  if(argc!=4){
    cout<<"Correct usage:\n$ vernam encrypt|decrypt <filename> <outputfile>\n";
    return 1;
  }
  ifstream f;
  ofstream fout;
  f.open(argv[2], ios::ate|ios::binary|ios::in);
  if(!f.is_open()){
    cout<<"Can't open input file: '"<<argv[2]<<"'\n";
    return 2;
  }
  long fin_size = f.tellg();
  f.seekg(0,f.beg);
  cout<<"INPUT FILE SIZE: "<<fin_size<<"\n";
  //cout<<"DIFF end-beg: "<<(f.end-f.beg)<<"\n";
  fout.open(argv[3]);
  if(!fout.is_open()){
    cout<<"Can't open output file";
    return 3;
  }
  char pw[MAXPW], c=0;
  int pwi=0;
  cout<<"Type encrypting password (max "<<MAXPW<<" chars): ";
  do{
    c=getchar();
    if(c!='\n'){
      pw[pwi++]=c;
    }
  }while(c!='\n');
  pwi=0;
  int k=0;
  if(!strcmp(argv[1],"e") || !strcmp(argv[1], "encrypt")){
    while(!f.eof() && k++<fin_size){
      char b;
      f.read(&b, 1);
      if(b!=EOF){
        //cout<<"Byte read: "<<b;
        fout<<(char)(b+pw[pwi]);
        pwi=(pwi+1)%MAXPW;
      }
    }
  }
  if(!strcmp(argv[1],"d") || !strcmp(argv[1], "decrypt")){
    while(!f.eof() && k++<fin_size){
      char b;
      f.read(&b, 1);
      //cout<<"Byte read: "<<b;
      fout<<(char)(b-pw[pwi]);
      pwi=(pwi+1)%MAXPW;
    }
  }
  f.close();
  fout.close();
}
/* error codes:
  1: incorrect parameters
  2: cannot open input file
  3: cannot open output file
*/
