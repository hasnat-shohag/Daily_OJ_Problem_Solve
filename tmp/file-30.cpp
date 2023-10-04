#include <iostream>
#include <vector>
#include<cmath>

struct Points
{
    int x;
    int y;
};

int liters(int startPos, int endPos)
{
    int liters = 0;
    liters =std::abs((startPos - endPos)) / 100;
    if (liters >= 1)
      {
        return liters;
      }
      return 0;

}



int main()
{
int amountOfCase=0;
int amountOfFriends=0;
int amountOfMove=0;
Points position;
int counterWater = 0;
std::vector <int> amountOfResultCases;

std::cin >> amountOfCase;
while (std::cin >> amountOfFriends >> amountOfMove >> position.x >> position.y)
{
    Points temporaryPos;
    while (amountOfFriends)
    {
        if (amountOfMove > 0)
         {  
            for (int i = 0; i < amountOfMove; ++i)
            {
                std::cin >> temporaryPos.x >> temporaryPos.y;
                 counterWater += liters(position.x, temporaryPos.x);
                 counterWater += liters(position.y, temporaryPos.y);

                    position.x = temporaryPos.x;
                     position.y = temporaryPos.y;
            }
            --amountOfFriends;
          }

        if (amountOfFriends)
          {
              std::cin >> amountOfMove >> position.x >> position.y;
          }
    }

     amountOfResultCases.push_back(counterWater);
     counterWater = 0;
}

for (int i = 0; i < amountOfResultCases.size(); ++i)
{
    std::cout << "Scenario #" << i+1 << " :" << amountOfResultCases[i]<<'\n';
}

}