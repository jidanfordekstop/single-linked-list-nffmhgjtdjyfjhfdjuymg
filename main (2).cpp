#include <iostream>
using namespace std;

// disini deklarasi single linked list
struct Buku{
    string judul, pengarang;
    int tahunTerbit;
    Buku *next;
};

int main(){

    // dan ini inisialisasi node
    Buku *node1, *node2, *node3;

    node1 = new Buku();
    node2 = new Buku();
    node3 = new Buku();

    // node 1
    node1->judul = "Matematika";
    node1->pengarang = "Ahli Matematika";
    node1->tahunTerbit = 1995;
    node1->next = node2;

    // node 2
    node2->judul = "Dia adalah Kakakku";
    node2->pengarang = "Tere Liye";
    node2->tahunTerbit = 2009;
    node2->next = node3;

    // node 3
    node3->judul = "Kata";
    node3->pengarang = "Geez & Aan";
    node3->tahunTerbit = 2018;
    node3->next = NULL; // akhir list

    // OUTPUT
    Buku *cur = node1;
    int no = 1; // nomor buku

    cout << "\n===== DAFTAR BUKU DI LINKED LIST =====\n\n";

    while (cur != NULL){
        cout << "Buku ke-" << no << endl;
        cout << "Judul Buku\t: " << cur->judul << endl;
        cout << "Pengarang\t: " << cur->pengarang << endl;
        cout << "Tahun Terbit\t: " << cur->tahunTerbit << endl;
        cout << "-------------------------------------\n";
        cur = cur->next;
        no++;
    }

    return 0;
}


