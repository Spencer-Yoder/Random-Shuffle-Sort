#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

int NUM_SIZE=10;

int myrandom (int i)
{
  return std::rand()%i;
}

int main()
{
  vector<int> r;
  int count = 0;
  int filecount = 0;
  srand(time(0));
  
  ofstream myfile;
  myfile.open("output" + to_string(filecount) + ".csv");
  
  for(int i=0; i < NUM_SIZE; i++) //Added numbers to the vector
    {
      r.push_back(i);
    }
  
  random_shuffle(r.begin(), r.end(), myrandom); //Do the first shuffle
  
  while (true)
    {
      if (is_sorted(r.begin(), r.end())) //Check to see if the vector is sorted
	break;
      
      random_shuffle(r.begin(), r.end(), myrandom); //Shuffle the vector
      
      for (int i=0; i < NUM_SIZE; i++) //Add the vector contents into the csv
	{
	  myfile << r[i] << ",";
	}
      
      myfile << "\n";
      
      if (count >= 995000) //If the file has more than 995000 line in it, Make a new file
	{
	  count = 0;
	  filecount++;
	  myfile.close();
	  myfile.open("output" + to_string(filecount) + ".csv");//Open the new file
	}
      count++;
    }
  
  
  myfile.close();
  return 0;
  
}
