#include <iostream>
#include <string>
using namespace std;

class Aluno
{
    private:
    string nota;
    string falta;
    
    
    public:
    
void setNota(string nota)
{
    this->nota= nota;
};

string getNota()
{
    return nota;
};

void setFalta(string falta)
{
    this->falta= falta;
};

string getFalta()
{
    return falta;
};



void printAluno()
{
    cout << nota <<","<< falta<< endl;
}



};
int main()
{
    Aluno a;
    a.setNota(" Sua nota é 8");
    a.setFalta("Voce tem 1 falta");
    
    a.printAluno();

    return 0;
}

