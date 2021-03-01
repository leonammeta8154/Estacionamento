#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<unistd.h>
using namespace std;
int c = 0, e = 0, h = 3;
int i = 0, j = 0, k = 0;
int x = 1, y = 1, z = 1;

class dados{
    private:
        int numcad[30] = {};
        string nome[30] = {};
        string cpf[30] = {};
        string endereco[30] = {};
        string crscrg[30] = {};
    public:
        void setNumcad(int nc){
            this -> numcad[i] = nc;
        }
        int getNumcad(){
            return this -> numcad[i];
        }

        void setNome(string n){
            this -> nome[i] = n;
        }
        string getNome(){
            return this -> nome[i];
        }

        void setCpf(string cpf){
            this -> cpf[i] = cpf;
        }
        string getCpf(){
            return this -> cpf[i];
        }

        void setEndereco(string log){
            this -> endereco[i] = log;
        }
        string getEndereco(){
            return this -> endereco[i];
        }

        void setCrscrg(string cc){
            this -> crscrg[i] = cc;
        }
        string getCrscrg(){
            return this -> crscrg[i];
        }
};

class veiculo{
    private:
        int numcadvcl[30] = {};
        string marca[30] = {};
        string modelo[30] = {};
        string placa[30] = {};
        int numcaddono[30] = {};
    public:
        void setNumcadvcl(int ncv){
            this -> numcadvcl[j] = ncv;
        }
        int getNumcadvcl(){
            return this -> numcadvcl[j];
        }

        void setMarca(string mrc){
            this -> marca[j] = mrc;
        }
        string getMarca(){
            return this -> marca[j];
        }

        void setModelo(string mdl){
            this -> modelo[j] = mdl;
        }
        string getModelo(){
            return this -> modelo[j];
        }

        void setPlaca(string p){
            this -> placa[j] = p;
        }
        string getPlaca(){
            return this -> placa[j];
        }

        void setNumcaddono(int ncd){
            this -> numcaddono[j] = ncd;
        }
        int getNumcaddono(){
            return this -> numcaddono[j];
        }
};

class horario{
    private:
        int numcadhorario[30]= {};
        string horaentrada[30] = {};
        string horasaida[30] = {};
        int qtdhoras[30] = {};
        int qtddias[30] = {};
        int qtdmeses[30] = {};
        double valor[30] = {};
        int numcadcliente[30] = {};

    public:
        void setNumcadhorario(int nch){
            this -> numcadhorario[k] = nch;
        }
        int getNumcadhorario(){
            return this -> numcadhorario[k];
        }

        void setHoraentrada(string he){
            this -> horaentrada[k] = he;
        }
        string getHoraentrada(){
            return this -> horaentrada[k];
        }

        void setHorasaida(string hs){
            this -> horasaida[k] = hs;
        }

        string getHorasaida(){
            return this -> horasaida[k];
        }

        void setQtdhoras(int qh){
            this -> qtdhoras[k] = qh;
        }
        int getQtdhoras(){
            return this -> qtdhoras[k];
        }

        void setQtddias(int qd){
            this -> qtddias[k] = qd;
        }
        int getQtddias(){
            return this -> qtddias[k];
        }

        void setQtdmeses(int qm){
            this -> qtdmeses[k] = qm;
        }
        int getQtdmeses(){
            return this -> qtdmeses[k];
        }

        void setValor(int v){
            this -> valor[k] = v;
        }
        double getValor(){
            return this -> valor[k];
        }

        void setNumcadcliente(int ncc){
            this -> numcadcliente[k] = ncc;
        }
        int getNumcadcliente(){
            return this -> numcadcliente[k];
        }
};

class estacionamento: public dados, veiculo, horario {
    public:
        void cadastro(){
            if(c == 1){
                for(i = 0; i < 30; i++){
                    if(getNome().empty() && getCpf().empty())
                        break;
                }
                int nc;
                string n, cpf, log, cc;
                cout << "Número do Cadastro: " << x << endl;
                cout << "Nome: ";
                getline(cin, n);
                cout << "CPF: ";
                getline(cin, cpf);
                cout << "Endereço: ";
                getline(cin, log);
                cout << "Curso ou Cargo: ";
                getline(cin, cc);
                setNumcad(x);
                setNome(n);
                setCpf(cpf);
                setEndereco(log);
                setCrscrg(cc);
                x++;
                sleep(3);
                system("clear || cls");
            } else if(c == 2){
                int qtd, ncv, ncd;
                string mrc, mdl, p;
                cout << "Cadastrar quantos carros?" << endl;
                cin >> qtd;
                cout << "Número de cadastro do proprietário: ";
                cin >> ncd;
                for(int q = 0; q < qtd; q++){
                    for(j = 0; j < 30; j++){
                        if(getModelo().empty() && getPlaca().empty()){
                            break;
                        }
                    }
                    cout << "Número de Cadastro do Veículo: " << y << endl;
                    cout << "Marca: ";
                    getline(cin, mrc);
                    cout << "Modelo: ";
                    getline(cin, mdl);
                    cout << "Placa: ";
                    getline(cin, p);
                    setNumcadvcl(y);
                    setMarca(mrc);
                    setModelo(mdl);
                    setPlaca(p);
                    setNumcaddono(ncd);
                    y++;
                    sleep(3);
                    system("clear || cls");
                }
            }
        }

        void excluir(){
            if(e == 1){
                string ps;
                cout << "Digite o Nome do cadastrado: ";
                getline(cin, ps);
                for(i = 0; i < 30; i++){
                    if(ps == getNome()){
                        cout << "--------------- Ficha de Cadastro ---------------" << endl;
                        cout << "Número de Cadastro: " << getNumcad() << endl;
                        cout << "Nome: " << getNome() << endl;
                        cout << "CPF: " << getCpf() << endl;
                        cout << "Endereço: " << getEndereco() << endl;
                        cout << "Cargo ou Curso: " << getCrscrg() << endl;
                        cout << "------------------- Veículos --------------------" << endl;
                        for(j = 0; j < 30; j++){
                            if(i + 1 == getNumcaddono()){
                                cout << "Número de Cadastro do Veículo: " << getNumcadvcl() << endl;
                                cout << "Marca: " << getMarca() << endl;
                                cout << "Modelo: " << getModelo() << endl;
                                cout << "Placa: " << getPlaca() << endl;
                                cout << "-------------------------------------------------" << endl << endl;
                            }
                        }
                        int sn;
                        cout << "É está pessoa?" << endl;
                        cout << "1 - Sim    2 - Não" << endl;
                        cin >> sn;
                        if(sn == 1){
                            int ncad = 0;
                            string dds = "";
                            setNumcad(ncad);
                            setNome(dds);
                            setCpf(dds);
                            setEndereco(dds);
                            setCrscrg(dds);
                            for(j = 0; j < 30; j++){
                                if(i + 1 == getNumcaddono()){
                                    setNumcadvcl(ncad);
                                    setMarca(dds);
                                    setModelo(dds);
                                    setPlaca(dds);
                                    setNumcaddono(ncad);
                                }
                            }
                            sleep(3);
                            system("clear || cls");
                            cout << "Apagado com sucesso!!" << endl << endl;
                        } else{
                            sleep(3);
                            system("clear || cls");
                            cout << "Não foi possível localiza-lo!" << endl << "Tente Novamente!" << endl << endl;
                        }
                        break;
                    }
                }
            } else if(e == 1){
                string ps;
                cout << "Digite a Placa do veículo: ";
                getline(cin, ps);
                for(j = 0; j < 30; j++){
                    if(ps == getPlaca()){
                        cout << "------------------- Veículos --------------------" << endl;
                        cout << "Número de Cadastro do Veículo: " << getNumcadvcl() << endl;
                        cout << "Marca: " << getMarca() << endl;
                        cout << "Modelo: " << getModelo() << endl;
                        cout << "Placa: " << getPlaca() << endl;
                        cout << "-------------------------------------------------" << endl << endl;
                        break;
                    }
                }
                int sn;
                cout << "É este veículo?" << endl;
                cout << "1 - Sim    2 - Não" << endl;
                cin >> sn;
                if(sn == 1){
                    int ncad = 0;
                    string dds = "";
                    setNumcadvcl(ncad);
                    setMarca(dds);
                    setModelo(dds);
                    setPlaca(dds);
                    setNumcaddono(ncad);
                    sleep(3);
                    system("clear || cls");
                    cout << "Apagado com sucesso!!" << endl;
                }else{
                    sleep(3);
                    system("clear || cls");
                    cout << "Não foi possível localizar o veículo!" << endl << "Tente Novamente!" << endl << endl;
                }
            }
        }

        void horario(){
            if(h == 1){
                int qh, ncc;
                string he, hs;
                cout << "Horário de Entrada e Saída por favor digite no formato 'hh:mm'!!" << endl;
                cout << "Número de Cadastro de Horário: " << z << endl;
                cout << "Horário de Entrada: ";
                getline(cin, he);
                cout << "Horário de Saída: ";
                getline(cin, hs);
                cout << "Quantidade de Hora(s): ";
                cin >> qh;
                cout << "Número de Cadastro do Cliente: ";
                cin >> ncc;
                cout << "Valor: R$" << qh * 2;
                setNumcadhorario(z);
                setHoraentrada(he);
                setHorasaida(hs);
                setQtdhoras(qh);
                setNumcadcliente(ncc);
                setValor(qh * 2);
                sleep(3);
                system("clear || cls");
            } else if(h == 2){
                int qd, ncc;
                string he, hs;
                cout << "Horário de Entrada e Saída por favor digite no formato 'hh:mm'!!" << endl;
                cout << "Número de Cadastro de Horário: " << z << endl;
                cout << "Horário de Entrada: ";
                getline(cin, he);
                cout << "Horário de Saída: ";
                getline(cin, hs);
                cout << "Quantidade de Dia(s): ";
                cin >> qd;
                cout << "Número de Cadastro do Cliente: ";
                cin >> ncc;
                cout << "Valor: R$" << qd * 48 * 0.85;
                setNumcadhorario(z);
                setHoraentrada(he);
                setHorasaida(hs);
                setQtddias(qd);
                setNumcadcliente(ncc);
                setValor(qd * 48 * 0.85);
                sleep(3);
                system("clear || cls");
            } else if(h == 3){
                int qm, ncc;
                string he, hs;
                cout << "Horário de Entrada e Saída por favor digite no formato 'hh:mm'!!" << endl;
                cout << "Número de Cadastro de Horário: " << z << endl;
                cout << "Horário de Entrada: ";
                getline(cin, he);
                cout << "Horário de Saída: ";
                getline(cin, hs);
                cout << "Quantidade de Mês(es): ";
                cin >> qm;
                cout << "Número de Cadastro do Cliente: ";
                cin >> ncc;
                cout << "Valor: R$" << qm * 30 * 48 * 0.75;
                setNumcadhorario(z);
                setHoraentrada(he);
                setHorasaida(hs);
                setQtdmeses(qm);
                setNumcadcliente(ncc);
                setValor(qm * 30 * 48 * 0.75);
                sleep(3);
                system("clear || cls");
            }
            z++;
        }
};

int main(){
    setlocale(LC_ALL, "");
    estacionamento est;
    int esc;
    do{
        cout << "################ Menu #################" << endl;
        cout << " 1 - Cadastro Cliente" << endl;
        cout << " 2 - Cadastro Veículo" << endl;
        cout << " 3 - Excluir Cadastro de Cliente" << endl;
        cout << " 4 - Excluir Cadastro de Veículo" << endl;
        cout << " 5 - Contratar Estacionamento por Hora" << endl;
        cout << " 6 - Contratar Estacionamento por Dia" << endl;
        cout << " 7 - Contratar Estacionamento por Mês" << endl;
        cout << " 8 - Sair" << endl;
        cout << "#######################################" << endl;
        esc = getch();
        switch(esc){
            case '1':
                system("clear || cls");
                c = 1;
                est.cadastro();
                break;
            case '2':
                system("clear || cls");
                c = 2;
                est.cadastro();
                break;
            case '3':
                system("clear || cls");
                e = 1;
                est.excluir();
                break;
            case '4':
                system("clear || cls");
                e = 2;
                est.excluir();
                break;
            case '5':
                system("clear || cls");
                h = 1;
                est.horario();
                break;
            case '6':
                system("clear || cls");
                h = 2;
                est.horario();
                break;
            case '7':
                system("clear || cls");
                h = 3;
                est.horario();
                break;
            case '8':
                cout << "Até mais!!" << endl;
                system("exit");
                break;
            default:
                cout << "Opção Inválida!!" << endl << endl;
                break;
        }
    }while(esc != '8');
}
