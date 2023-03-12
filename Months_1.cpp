#include <iostream>

int main() {
  int a;
  std::cout << "Enter the month number: ";
  std::cin >> a;
  {
    
  if (a==1){
    std::cout << "January"<< std::endl;
    std::cout << "31"<< std::endl;}
       
  if (a==2){
    std::cout << "February"<< std::endl;
    std::cout << "28"<< std::endl;}
    
  if (a==3){
    std::cout << "March"<< std::endl;
    std::cout << "31"<< std::endl;}
    
  if (a==4){
    std::cout << "April"<< std::endl;
    std::cout << "30"<< std::endl;}
    
  if (a==5){
    std::cout << "May"<< std::endl;
    std::cout << "31"<< std::endl;}
    
  if (a==6){
    std::cout << "June"<< std::endl;
    std::cout << "30"<< std::endl;}
    
  if (a==7){
    std::cout << "July"<< std::endl;
    std::cout << "31"<< std::endl;}
    
  if (a==8){
    std::cout << "August"<< std::endl;
    std::cout << "31"<< std::endl;}
    
  if (a==9){
    std::cout << "September"<< std::endl;
    std::cout << "30"<< std::endl;}
    
  if (a==10){
    std::cout << "October"<< std::endl;
    std::cout << "31"<< std::endl;}
    
  if (a==11){
    std::cout << "November"<< std::endl;
    std::cout << "30"<< std::endl;}
    
  if (a==12){
    std::cout << "December"<< std::endl;
    std::cout << "31"<< std::endl;}
    
  if (a>12 || a<1) { 
   std::cout << "Error: The month number is incorrect." << std::endl;}

return 0;
    }
  
}