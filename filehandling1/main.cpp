#include <iostream>
#include <fstream>
using namespace std;

class filehandling
{
public:
    void run();
};

void filehandling::run()

{
  fstream datafile;
  datafile.open("test.txt",ios::out);
  cout<<"Test file is created";
  datafile<<"hello"<<"\n";
  datafile<<"How are you???"<<"\n";
}

int main()
{
    fil
    ehandling obj;
    obj.run();
    return 0;
}
//code ends here
