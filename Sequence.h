#include<iostream> 
#include<string> 
#include<cstdio> 
#include<cstdlib> 
#include<vector> 
#include<algorithm> 
#include<cstring> 
using std::string; 
using std::cin; 
using std::sort; 
using std::vector; 
class Sequence 
 { 
 	public: 
 		Sequence(); 
 		Sequence(const string& filename); 
 		int length(); 
 		int numberOf(char base); 
 		string longestConsecutive(); 
 		string longestRepeated();  
 		string total;		 
 		int countA,countT,countC,countG; 
 }; 

