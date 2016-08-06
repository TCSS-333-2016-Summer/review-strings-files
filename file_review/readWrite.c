 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(int argc, char *argv[]){
  char *inputFile,*outputFile,text2Bin=1;

  //parse the command line for flags -i -o and an optional -b falg
  //i.e.
  //readWriteFiles -i <inputFile> -o <outputFile> -b (optional) in any order
  //if the -b flag appears set the text2Bin to 0
  
  //if text2Bin is 1 you will call readTextWriteBin on inputFile and outputFile
  //otherwise you will call readBinWriteText on inputFile and outputFile
  
  
  //write two functions readTextWriteBin and readBinWriteText
  
  //the text format is two fields on each line, one a name and the other an age (integer) separated by a space
  //the binary format is a series of 3 repeating fields <nameLength><name><age> i.e. an integer, a series of characters, and a 
  
  //to read the text format use fgets and sscanf and write using 3 fwrites
  //to read the binary format use a while loop and 3 freads (one can be in the loop) and write the text using fprintf
  
  //two sample files are given to you sample.txt sample.bin
  
  //assume no line is greater than 500 characters in length

  
  return 1;
	}  

 
