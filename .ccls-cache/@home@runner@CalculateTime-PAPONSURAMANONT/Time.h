void getTime(int &h,int &m){
  cout<<"Input hour & min:";
  cin>> h>>m;
    
   
}

int subtract(int h1,int m1,int h2,int m2){ //return hour
  return((h2-h1)+23)%24;
}
int subtract(int m1, int m2){//return min
  return ((m2-m1)+60)%60;
}