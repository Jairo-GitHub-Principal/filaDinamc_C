typedef int TipoItem;
const int max_itens = 3;
struct No // node ou nó
{
    TipoItem valor;
    No* proximo;
};
class FilaDinamica{
private:
    No* primeiro;
    No* ultimo;
    
public:
    FilaDinamica(); // metodo construtor
    ~FilaDinamica();// metodo destrutor
    bool estavazio();// isempty
    bool estacheio();// isfull
    void inserir(TipoItem item);// push //enqueue
    TipoItem remover();//pop//dequeue
    void imprimir();// print
};

