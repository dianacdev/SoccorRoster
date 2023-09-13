// Program to create a roster
// Created by Diana Cervantes

#include <iostream>
#include <vector>
using namespace std;


const int ROSTER_NUM = 5;
vector<int> jerseyNumber(ROSTER_NUM);
vector<int> playerRating(ROSTER_NUM);
int tempJersey;
int tempRating;

//Prints the roster of the players, and there rating.
void printRoster( vector<int> jerseyNumber, vector<int> playerRating)
{
   cout << "ROSTER" << endl;
   for (int i = 0; i < jerseyNumber.size(); i++)
   {
      cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNumber.at(i) << ", Rating: " << playerRating.at(i) << endl;
   }
   cout << endl;
}

//Prints the Menu and gets users selection. Recurisive call to itself if selection is not q (Quit)
void menu(char selection)
{
   cout << "MENU" << endl;
   cout << "a - Add player" << endl;
   cout << "d - Remove player" << endl;
   cout << "u - Update player rating" << endl;
   cout << "r - Output players above a rating" << endl;
   cout << "o - Output roster" << endl;
   cout << "q - Quit" << endl;

   cout << endl
        << "Choose an option:" << endl;
   cin >> selection;

   switch (selection)
   {
   case 'a': // Add player
         cout << "Enter a new player's jersey number:" << endl;
         cin >> tempJersey;
         jerseyNumber.push_back(tempJersey);
         cout << "Enter the player's rating:" << endl;
         cin >> tempRating;
         playerRating.push_back(tempRating);
         cout <<endl;
         menu(selection);
      break;
   case 'd': // Remove player
         cout << "Enter a jersey number:" << endl;
         cin >> tempJersey;
         for (int i=0; i<jerseyNumber.size(); i++){
            if (jerseyNumber.at(i) == tempJersey){
               jerseyNumber.erase(jerseyNumber.begin()+i);
               playerRating.erase(playerRating.begin()+i);
            }
         }
         cout <<endl;
         menu(selection);
      break;
   case 'u': // Update player
         cout << "Enter a jersey number:" << endl;
         cin >> tempJersey;
         cout << "Enter a new rating for player:" << endl;
         cin >> tempRating;
         for (int i =0; i<jerseyNumber.size(); i++){
            if (jerseyNumber.at(i) == tempJersey){
               playerRating.at(i) = tempRating;
            }
         }
         cout <<endl;
         menu(selection);
      break;
   case 'r': // Output players above a rating
         cout << "Enter a rating:";
         cin >> tempRating;
         cout << endl << "ABOVE " << tempRating << endl;
         for (int i = 0; i<playerRating.size(); i++){
            if (playerRating.at(i) > tempRating){
               cout << "Player " << i+1 <<" -- Jersey number: " << jerseyNumber.at(i) << ", Rating: " << playerRating.at(i) << endl;
            }
         }
         cout <<endl;
         menu(selection);
      break;
   case 'o': // Output roster
      printRoster( jerseyNumber, playerRating);
      menu(selection);
      break;
   case 'q': // Quit Program
      break;

   default:
      break;
   }
}

int main()
{
   char selection;
   // Entering the Roster, player jersey's and ratings
   for (int i = 0; i < jerseyNumber.size(); ++i)
   {
      cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
      cin >> jerseyNumber.at(i);
      cout << "Enter player " << i + 1 << "'s rating:" << endl;
      cin >> playerRating.at(i);
      cout << endl;
   }

   printRoster(jerseyNumber, playerRating);
   menu(selection);

   return 0;
}
