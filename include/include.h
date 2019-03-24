#pragma once
#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cassert>
#include <functional>

using namespace std;

static vector<vector<string>> MinPokers //用于第一次出牌选用的最小牌，设置最小牌
{ 
{ "1" },
{ "1", "1" },
{ "1" , "1", "1" }, 
{ "3", "1", "1", "1" }, 
{ "3", "3", "1", "1", "1" },
{ "6", "5", "4", "3", "1" },
{ "7", "6", "5", "4", "3" , "1" },
{ "4", "4", "3", "3", "1", "1" },
{ "3", "3", "3", "1" "1", "1" },
{ "8", "7", "6", "5", "4", "3", "1" },
{ "9", "8", "7", "6", "5", "4", "3", "1" },
{ "4", "3", "3", "3", "1" "1", "1", "5" },
{ "5", "5",  "4", "4", "3", "3", "1", "1" },
{ "10", "9", "8", "7", "6", "5", "4", "3", "1" },
{ "J", "10", "9", "8", "7", "6", "5", "4", "3", "1" },
{ "4", "4", "3", "3", "3", "1" "1", "1", "5", "5" },
{ "6", "6", "5", "5",  "4", "4", "3", "3", "1", "1" },
{ "Q",  "J", "10", "9", "8", "7", "6", "5", "4", "3", "1" },
{ "K", "Q",  "J", "10", "9", "8", "7", "6", "5", "4", "3", "1" },
{ "7", "7", "6", "6", "5", "5",  "4", "4", "3", "3", "1", "1" },
{ "A", "K", "Q",  "J", "10", "9", "8", "7", "6", "5", "4", "3", "1" }
};