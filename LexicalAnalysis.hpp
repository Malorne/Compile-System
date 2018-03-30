//
//  LexicalAnalysis.hpp
//  Compile
//
//  Created by Wave on 2018/3/23.
//  Copyright © 2018年 Wave. All rights reserved.
//

#ifndef LexicalAnalysis_hpp
#define LexicalAnalysis_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class tokenOut;
int judgeOp(vector<string> splitToken);
int Analysis(std::string token);
void formatPrint(string token, int start, int end);
void printTokenVector(vector<tokenOut>* tokens);
string pretreat(string s);
vector<string> split(string a);
vector<tokenOut>* Lexical(string file);


#endif /* LexicalAnalysis_hpp */


