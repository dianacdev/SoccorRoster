// Program to create a roster
// Created by Diana Cervantes

#include <iostream>
#include <vector>
using namespace std;

char selection;
const int ROSTER_NUM = 5;
vector<int> jerseyNumber(ROSTER_NUM);
vector<int> playerRating(ROSTER_NUM);
int i;

void printRoster(const int ROSTER_NUM, int i, vector<int> jerseyNumber, vector<int> playerRating)
{
   cout << "ROSTER" << endl;
   for (i = 0; i < ROSTER_NUM; i++)
   {
      cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNumber.at(i) << ", Rating: " << playerRating.at(i) << endl;
   }
   cout << endl;
}

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
      cout << "a entered" << endl;
      break;
   case 'd': // Remove player
      /*code*/
      break;
   case 'u': // Update player
      /*code*/
      break;
   case 'r': // Output players above a rating
      /*code*/
      break;
   case 'o': // Output roster
      printRoster(ROSTER_NUM, i, jerseyNumber, playerRating);
      menu(selection);
      break;
   case 'q': // Quit Program
      /*code*/
      break;

   default:
      break;
   }
}

int main()
{
   // Entering the Roster, player jersey's and ratings
   for (i = 0; i < ROSTER_NUM; ++i)
   {
      cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
      cin >> jerseyNumber.at(i);
      cout << "Enter player " << i + 1 << "'s rating:" << endl;
      cin >> playerRating.at(i);
      cout << endl;
   }

   printRoster(ROSTER_NUM, i, jerseyNumber, playerRating);

   menu(selection);

   return 0;
}
