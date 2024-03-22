#include <iostream>
#include <string>
using namespace std;

class Cadastro
{
    private:
    string nome;
    string matricula;
    string curso;
    
    public:
    
void setNome(string nome)
{
    this->nome= nome;
};

string getNome()
{
    return nome;
};

void setMatricula(string matricula)
{
    this->matricula= matricula;
};

string getMatricula()
{
    return matricula;
};

void setCurso(string Curso)
{
    this->curso= curso;
};

string getCurso()
{
    return curso;
};


void printCadastro()
{
    cout << nome <<","<< matricula<<","<< curso<< endl;
}



};
int main()
{
    Cadastro a;
    a.setNome("Anna");
    a.setMatricula("232567812");
    a.setCurso("Engenharia");
    
    a.printCadastro();

    return 0;
}

