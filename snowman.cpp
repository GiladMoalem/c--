#include <iostream>
#include <string>
using namespace std;


namespace ariel{

string hat(int H){
switch(H){
case 1:
 return " _===_";
case 2:
 return " ___ \n.....";
case 3:
 return "   _   \n  /_\\  ";
case 4:
 return " ___ \n(_*_)";
default:
 return "error";
}
}

string highBody(int X, int L, int N, int R, int Y){
string result="";
switch(X){
case 1:
 result += " ";
 break;
case 2:
 result += "\\";
 break;
case 3:
 result += " ";
 break;
case 4:
 result += " ";
 break;
default:
  return "error!";
}
result+="(";
switch(L){
case 1:
 result += ".";
 break;
case 2:
 result += "o";
 break;
case 3:
 result += "O";
 break;
case 4:
result += "-";
break;
default:
  return "error!";
}
switch(N){
case 1:
result +=",";
break;
case 2:
result += ".";
 break;
case 3:
 result += "_";
 break;
case 4:
 break;
default:
 return "error!";
}
switch(R){
case 1:
 result += ".";
 break;
case 2:
 result += "o";
 break;
case 3:
 result += "O";
 break;
case 4:
 result +="-";
 break;
default:
 return "error";
}
result+=")";
switch(Y){
case 1:
 result += " ";
 break;
case 2:
 result +="/";
 break;
case 3:
 result += " ";
 break;
case 4:
 result +=" ";
 break;
default:
 return "error!";
}
return result;
}

string lowBody(int X,int T, int Y){
string result="";

switch(X){
case 1:
 result+="<";
 break;
case 2:
 result +=" ";
 break;
case 3:
 result +="/";
 break;
case 4:
 result +=" ";
 break;
default:
 return "error";
}

result +="(";

switch(T){
case 1:
 result +=" : ";
 break;
case 2:
 result +="] [";
 break;
case 3:
 result += "> <";
 break;
case 4:
 result +="   ";
 break;
default:
 return "error";
}
result +=")";

switch(Y){
case 1:
 result +=">";
 break;
case 2:
 result += " ";
 break;
case 3:
 result +="\\";
 break;
case 4:
 result += " ";
 break;
default:
 return "error";
}
return result;
}

string base(int B){

switch(B){
case 1:
 return " ( : ) ";
case 2:
 return {' ', '(', '"', ' ', '"', ')', ' ', '\0'};
case 3:
 return " (___) ";
case 4:
 return " (   ) ";
default:
 throw "error";
}

}

string snowman(int num){
if(num <11111111 || num > 44444444) throw "error";
int arr[8];
int i;

for(i=0;i<8;i++){
  arr[i] = num%10;
  num /= 10;
  if(arr[i]<1 || arr[i]>4) throw "error";
}

string result ="";

result += hat(arr[7]);
result += "\n";
result += highBody(arr[3],arr[5],arr[6],arr[4],arr[2]);
result += "\n";
result += lowBody(arr[3],arr[1],arr[2]);
result += "\n";
result += base(arr[0]);
result += "\n";

return result;
}

}