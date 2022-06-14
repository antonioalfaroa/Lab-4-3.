#include <iostream>
#pragma once
using namespace std;
static const int MAX = 40;

class HugeInteger{
private:
int X[MAX];

public:
HugeInteger(void);
~HugeInteger(void);

void input(int[MAX]);
void output(void);

HugeInteger add(HugeInteger first);
HugeInteger Sub(HugeInteger first);
HugeInteger multi(HugeInteger first);

bool isEqualTo(HugeInteger first);
bool isNotEqualTo(HugeInteger first);
bool isGreaterThan(HugeInteger first);
bool isLessThan(HugeInteger first);
bool iszero();



};

HugeInteger::HugeInteger(void){
for(int i=MAX-1;i>=0;i--){
    this->X[i] = 0;
  
  }
}
HugeInteger::~HugeInteger(void){

  
}
void HugeInteger::input(int Z[MAX]){
  for(int i=MAX-1;i>=0;i--){
    this->X[i]=Z[i];
  }
  
}
void HugeInteger::output(){
  for(int i=0;i<MAX;i++){
    cout<<this->X[i]<<endl;
  }
  
}
bool HugeInteger::isEqualTo(HugeInteger first){
  bool res = true;
  for(int i=0;i<MAX;i++){
    if(this->X[i] != first.X[i] ){
      bool res = false;
    }
  }
  return res;
}
bool HugeInteger::isNotEqualTo(HugeInteger first){
 bool res = true;
  for(int i=0;i<MAX;i++){
    if(this->X[i] == first.X[i] ){
      bool res = false;
    }
  }
  return res;
}


bool HugeInteger::isGreaterThan(HugeInteger first){
  bool res = false;
  for(int i=0;i<MAX;i++){
    if(this->X[i] > first.X[i]){
      bool res = true;
    }
    }
  return res;
  }
bool HugeInteger::isLessThan(HugeInteger first){
  bool res = false;
  for(int i=0;i<MAX;i++){
    if(this->X[i] < first.X[i]){
      bool res = true;
    }
    }
  return res;
  
}
bool HugeInteger::iszero(void){

  bool res = true;
  for(int i=0;i<MAX;i++){
    if(this->X[i] != 0){
     res = false;
    }
  }
  return res;
}

HugeInteger HugeInteger::add(HugeInteger first){
  HugeInteger result;
  for(int i=0;i<MAX;i++){
    result.X[i] = this->X[i] + first.X[i];
  }
  return result;
}
HugeInteger HugeInteger::Sub(HugeInteger first){
   HugeInteger result;
  for(int i=0;i<MAX;i++){
    result.X[i] = this->X[i] - first.X[i];
  }
  return result;
}

HugeInteger HugeInteger::multi(HugeInteger first){
   HugeInteger result;
  for(int i=0;i<MAX;i++){
    result.X[i] = this->X[i] * first.X[i];
  }
  return result;
}

int main(){
  int X1[40] = {1,2,3,4,5,6,7,8,9,1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40 };
  int X2[40] = {40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};


  HugeInteger option1;
  HugeInteger option2;
  HugeInteger result;

  option1.input(X1);
  option2.input (X2);

  cout<<"First array : "<<endl;
  option1.output();

  cout<<"\nSecond Array : "<<endl;
  option2.output();

  cout<<"First array equal to 0? : "<<endl;
  cout<<option1.iszero()<<endl;

  cout<<"Second array equal to 0? : "<<endl;
  cout<<option2.iszero()<<endl;

  cout<<"\nAdding the second array to the first one : "<<endl;
  result = option1.add(option2);
  cout<<"Result of the add : "<<endl;
  result.output();

  cout<<"\nSubstract of the second array to the first one : "<<endl;
  result = option1.add(option2);
  cout<<"Result of the substraction : "<<endl;
  result.output();

  cout<<"\nMultiplying the first array and the second array : "<<endl;
  result = option1.multi(option2);
  cout<<"Result of the multiplication : "<<endl;
  result.output();

  cout<<"\nThe first array is equal to the second one? : "<<endl;
  cout<<option1.isEqualTo(option2)<<endl;

  cout<<"\nThe first array is not equal to : "<<endl;
  cout<<option1.isNotEqualTo(option2);

  cout<<"\nThe first array is grater than the second one? : "<<endl;
  cout<<option1.isGreaterThan(option2);

  cout<<"\nThe first array is less than the second one? : "<<endl;
  cout<<option1.isLessThan(option2);

  
}
