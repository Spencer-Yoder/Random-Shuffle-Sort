#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime> 

using namespace std;

int NUM_SIZE=10;

int myrandom (int i) { return std::rand()%i;}

int main()
{
  vector<int> r;
  int count=0;
  srand(time(0));
  
  for(int i=0; i < NUM_SIZE; i++)
    {
      r.push_back(i);
    }
  
  random_shuffle(r.begin(), r.end(), myrandom);
  
  while (true)
    {
      if (is_sorted(r.begin(), r.end()))
	  break;

      
      random_shuffle(r.begin(), r.end(), myrandom);

      for (int i=0; i < NUM_SIZE; i++)
	{
	  cout << r[i];
	}
      cout << endl;
      
      count++;
      cout <<count <<endl;
      
    }
  

  return 0;

}
