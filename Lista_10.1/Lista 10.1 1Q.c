struct ponto{
    float x,y;
};

int main(){
    struct ponto vet[2]={{10,20},{30,40}};

    for(int i=0;i<2;i++){
        printf("%f e %f\n",vet[i].x,vet[i].y);
    }

}
