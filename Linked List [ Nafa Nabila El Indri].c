#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
} 

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void hitungnode(node *head);

int main()
{
  node *head;
  char pilih;

  head = NULL;
  do{
    system("cls");
    chgcolor(14);
	printf(" _______________________________________________________________\n");
	printf("|                        SELAMAT DATANG ^_^                     |\n");
    printf("|_______________________________________________________________|\n");
    printf("|______________________________Menu_____________________________|\n");
    printf("|    1. Tambah data di awal                                     |\n");
    printf("|    2. Tambah data di tengah list                              |\n");
    printf("|    3. Hapus data                                              |\n");
    printf("|    4. Cetak isi list                                          |\n");
    printf("|    5. Tampilkan jumlah node data dan jumlah seluruh isi data  |\n");
    printf("|_______________________________________________________________|\n");
    chgcolor(10);
    printf("| Untuk keluar pilih k |\n");
    printf("|______________________|\n");
    chgcolor(15);
    printf("\n Masukan Pilihan Anda  : ");
     fflush(stdin);
     scanf("%c", &pilih);
     if (pilih == '1')
     		tambahAwal(&head);
     else if (pilih == '2')
			tambahData(&head);
     else if (pilih == '3')
     		hapusData(&head);
     else if (pilih == '4'){
     		tranverse(head);
     		getch();
     	}
     else if (pilih == '5'){
     		hitungnode(head);
         getch();
     }
  } while (pilih != 'k');
  deleteList(head);
}

node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

void tambahAwal(node **head){
  int bil;
  node *pTemp;

  system("cls");
  fflush(stdin);
  chgcolor(15);
  printf("Masukkan bilangan : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  		pTemp->data = bil;
      pTemp->next = NULL;
      insertNode(head, NULL, pTemp);
  }
  else{
  	  chgcolor(14);
     printf("=============================\n");
     printf("|   Alokasi memeori gagal   |\n");
     printf("=============================\n");
      getch();
  }
}


void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  system("cls");
  
  tranverse(*head);
  chgcolor(15);
  printf("\nPosisi penyisipan setelah data bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
  	 chgcolor(14);
  	 printf("===============================\n");
     printf("|  Maaf node tidak ditemukan  |\n");
     printf("===============================\n");
     getch();
  }
  else if (pTemp == NULL){
  	 chgcolor(14);
  	 printf("=============================\n");
     printf("|   Alokasi memeori gagal   |\n");
     printf("=============================\n");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

void tranverse(node *head){
	node *pWalker;
    system("cls");
	pWalker = head;
	while (pWalker != NULL){
   	printf("%d->", pWalker -> data);
   	pWalker = pWalker -> next;
	}
   printf("NULL");
}


void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;
  system("cls");
  tranverse(*head);
  chgcolor(15);
  printf("\nData yang akan dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pPre = pCur;
    pCur = pCur -> next;
  }

  if (pCur == NULL){
  	 chgcolor(15);
     printf("\nMaaf node tidak ditemukan");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}

void deleteList(node *head){
  node *pTemp;


  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}

void hitungnode(node *head){
	node *pWalker;

    system("cls");
    int i=0;
    int hsl=0;
	pWalker = head;
	while (pWalker != NULL){
	hsl=hsl+pWalker -> data;
	i=i+1;
   	pWalker = pWalker -> next;
	}
   chgcolor(6);
   printf("========================================\n");
   chgcolor(15);
   printf("|| Jumlah node data  = %d              ||\n",i);
   printf("|| Jumlah seluruh isi data = %d       ||\n",hsl);
   chgcolor(6);
   printf("========================================\n");
}
