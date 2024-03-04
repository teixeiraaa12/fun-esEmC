#include <stdio.h>



void dizerbomdia (char nome[20]){
  printf("\nBom dia!\n %s", nome);
}
void dizerboatarde (char nome[20]){
printf( "\nBoa tarde!\n %s", nome);

}


int main(void){
  dizerbomdia("Miguel");
  dizerbomdia("João");
  dizerbomdia("guizin");
  dizerboatarde("Miguel");
  dizerboatarde("João");
  dizerboatarde("guizin");
  
  

  return 0;
}