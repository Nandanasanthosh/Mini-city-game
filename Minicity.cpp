#include <iostream>
 
int main()
{
 char input;  // char input to go Left or Right
 char street[5];  // one dimensional game base
 int posX = 2;  // X position of the player
 
 street[0] = 'A'; // an apple tree on this position
 street[2] = 'C'; // center on this position
 
 
 std::cout << "Walking Person Game" << std::endl;
 std::cout << "Input L for the Left, R for the Right, X to Exit" << std::endl << std::endl;
 
 do
 {
 
 std::cout << "Your position is:" << posX << std::endl;
 switch( street[posX])
 {
 case 'A':
 std::cout << "Here is an apple tree" << std::endl ;
 break;
 
 case 'C':
 std::cout << "Here is center of the road"<< std::endl ;
 break;
 }
 
 std::cout << "Where u go (L, R, X) ?";
 std::cin >> input;
 
 switch(input)
 {
 case 'L':
 case 'l':
 if(posX>0) posX--;
 break;
 
 case 'R':
 case 'r':
 if(posX<5) posX++;
 break;
 
 }
 }while( input != 'X' );
 
 return 0;
}