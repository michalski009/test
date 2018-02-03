#include <iostream>

using namespace std;


int main()
{

    using namespace std;
int waga, wzrost;
float BMI;



cout << "Ile masz centymentOw wzroztu? ";
cin >> wzrost;

while(wzrost < 40 || wzrost > 300)
{
   cout << "To nie jest poprawny wzrost. ";
   cin >> wzrost;
}

cout << "Jaka jest Twoja waga? ";
cin >> waga;

while(waga < 30 || waga > 500)
{
   cout << "To nie jest poprawna waga. ";
   cin >> waga;
}

BMI = waga / (wzrost*wzrost/10000.);

cout << "BMI dla podanych parametrow wynosi:" << BMI << "\n";



if(BMI < 15)
{
cout << "Zacznij wreszcie jesc." << endl;
}

if(BMI < 18 && BMI > 15)
{
cout << "Za malo wazysz, zrob cos z tym." << endl;
}

if(BMI > 18 && BMI < 25)
{
cout << "Niezle BMI, gratuluje" << endl;
}

if(BMI > 25 && BMI < 30)
{
cout << "Alert: nadwaga!" << endl;
}

if(BMI > 30 && BMI < 35)
{
cout << "No, no, przyda się troche schudnac." << endl;
}
if(BMI > 35)
{
cout << "Dobrze, ale przydalo by sie pare owockow czasem zjesc ;) " << endl;
}

return 0;
}
