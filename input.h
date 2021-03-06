#ifndef input_h
#define input_h

#include <stdbool.h>

#define Prev(P) P->prev
#define Info(P) P->info
#define Next(P) P->next
#define Head(L) (L).head
#define Current(L) (L).current
#define Tail(L) (L).tail

#define MAX_ROWS 5
#define MAX_COLUMNS 5

typedef struct element_list *address;

typedef struct element_list{
	address prev;
	char info;
	address next;	
}element_input;

typedef struct{
	address head;
	address current;
	address tail;
}list;

address Alokasi(char ch);
void create_text_editor(list *L);
void input_keyboard(list *L, int *baris, int *kolom, char namaFile[], bool validasi_file);
bool cek_input(char ch);
void normal_input(list *L, address P, int *baris, int *kolom);
void handling_input(list *L, char ch, int *baris, int *kolom, bool *status_bar);
void arrows(list *L, char ch, int *baris, int *kolom);
void enter(list *L, char ch, int *baris, int *kolom);
void dealokasi(list *L);
void backspace(list *L, char ch, int *baris, int *kolom);
void F1_12(list *L, char ch, int *baris, int *kolom, bool *status_bar);

#endif
