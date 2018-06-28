#include<iostream> 
#include<string> 
#include<cstdio> 
#include<vector> 
#include<algorithm> 
#include<cstring> 
using namespace std;
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

