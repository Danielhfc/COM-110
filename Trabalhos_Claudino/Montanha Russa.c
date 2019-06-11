// Disciplina   : Fundamentos de Física para Computação
// Professor    : Roberto Claudino da Silva
// Aluno        : Daniel Henrique Ferreira Carvalho
// Mátricula    : 2019005426
// Aluno        : Hugo Nunes Machado
// Matrícula    : 2019005678
#include<math.h>
#include<stdio.h>

int main (){


 float g,h,massa,pot,cin,v,atrito,d,l;

    printf("Qual e a gravidade da montanha russa? \n");
    scanf("%f",&g);
    printf("Qual e a altura da montanha russa? \n");
    scanf("%f",&h);
    printf("Qual e o atrito da montanha russa? \n");
    scanf("%f",&atrito);
    printf("Qual o limite de velocidade que o carrinho pode ultrapassar? \n"); //A velocidade precisa ser nula para o carrinho nao sair do trilho. Contudo, é extremamente dificil zera a velocidade, então um valor será acrecisdo para facilitar.
    scanf("%f",&l);

printf("\nPonto A ate B\n");


     printf("Qual e a massa do carrinho? \n");
     scanf("%f", &massa);

pot = massa*g*h; // potencial adquirida na descida
cin = pot; // a potencia tranforma-se totalmente em cinética nos vales


     printf("A energia potencial e: %f\n",pot);
     printf("\nA energia cinetica e: %f\n",cin);

     printf("\nPonto B ate C\n");
     printf("\nQual a massa do carrinho? \n");
     scanf("%f", &massa);
     pot = massa*g*(5*h/4); // A cinetica deve ser transformada totalmente na potencial para que o carro nao saia voando: v=0
     printf("A energia potencial e: %f\n",pot);

   if(pot>cin) { //caso a cinetica seja menor que a potencial, a velocidade não será suficiente para chegar ao topo
        printf("\nA energia potencial e: %f\n",pot);
        printf("\nA velocidade foi baixa, o carrinho nao subiu\nEntao a pessoa precisa emagrecer!");
        exit(0);
   }
   if(pot+l<cin){ //caso a cinetica seja muito maior que a potencial, o carrinho irá sair do trilho
       printf("A energia potencial e: %f\n",pot);
       printf("\nA velocidade foi muito alta!\nO carrinho saiu do planeta!");
       exit(0);
   }

   printf("Voce passou! Continue assim!\n");

printf("\nPonto C ate D\n");

     printf("\nQual a massa do carrinho? \n");
     scanf("%f", &massa);

pot = massa*g*(5*h/4);
cin = pot;

     printf("A energia potencial e: %f",pot);
     printf("\nA energia cinetica e: %f\n",cin);

printf("\nPonto D ate E\n");

     printf("\nQual a massa do carrinho? \n");
     scanf("%f", &massa);

cin = pot;
pot = massa*g*(3*h/4);

     printf("A energia potencial e: %f\n",pot);


   if(pot>cin) {
        printf("\nA energia potencial e: %f\n",pot);
        printf("\nA velocidade foi baixa, o carrinho nao subiu\nEntao a pessoa precisa emagrecer!");
        exit(0);
   }
   if(pot+l<cin){
       printf("A energia potencial e: %f\n",pot);
       printf("\nA velocidade foi muito alta!\nO carrinho saiu do planeta!");
       exit(0);
   }

   printf("Voce passou! Continue assim!\n");

printf("\nPonto E ate F\n");

     printf("\nQual a massa do carrinho? \n");
     scanf("%f", &massa);

pot = massa*g*(3*h/4);
cin = pot;

     printf("A energia potencial e: %f",pot);
     printf("\nA energia cinetica e: %f\n",cin);


printf("\nPonto F ate G\n");


     printf("\nQual a massa do carrinho? \n");
     scanf("%f", &massa);

pot = massa*g*(h/2);

     printf("A energia potencial e: %f\n",pot);


  if(pot>cin) {
        printf("\nA energia potencial e: %f\n",pot);
        printf("\nA velocidade foi baixa, o carrinho nao subiu\nEntao a pessoa precisa emagrecer!");
        exit(0);
   }
   if(pot+l<cin){
       printf("A energia potencial e: %f\n",pot);
       printf("\nA velocidade foi muito alta!\nO carrinho saiu do planeta!");
       exit(0);
   }

   printf("Voce passou! Continue assim!\n");

printf("\nPonto G ate H\n");
     printf("\nQual a massa do carrinho? \n");
     scanf("%f", &massa);

pot = massa*g*(3*h/4);
v = (2*pot)/massa; // Retorna velocidade ao quadrado

printf("\nA velocidade e : %f\n",v);

printf("\nPonto H ate I\n");

   d=v/250*atrito;

   printf("O carrinho ira frear em %f metros\n",d);

if(d<3*h) printf("Voce passou em todas! Parabens!");
else ("Voce e pessimo"); // O carrinho deve frear antes do final do percurso


   }












