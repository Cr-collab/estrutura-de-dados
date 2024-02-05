function particiona(vet,  inicio, fim){
  let meio  = (inicio + fim) / 2;
  let position = (vet.length <=  meio ? vet[meio] : vet[fim]);
  let pivot = Math.floor((vet[inicio] + vet[fim] + position) / 3);
  while(inicio < fim ){  
    while(inicio < fim && vet[inicio] <= pivot){
      inicio = inicio + 1;
    }
    
    while(inicio < fim && vet[fim] > pivot){
      fim = fim - 1;
    }

    let aux =  vet[inicio];
    vet[inicio] =  vet[fim];
    vet[fim] =  aux;

  }
  return inicio;
}

function quick_sort(vetor, inicio, fim){

  let inicioMenorQueFim = inicio < fim;
  if(inicioMenorQueFim){
    let pivo =  particiona(vetor, inicio, fim);
    quick_sort(vetor, inicio, pivo - 1);
    quick_sort(vetor, pivo, fim  );
  }
  return vetor;
}
function main(){
  let vet =  [47,35,12,49,56,25,71,83,5,3,1,70,99,10,61];
  console.log("🚀 ~ main ~ vet:", vet)
  vet =   quick_sort(vet, 0,vet.length - 1);
  console.log("🚀 ~ main ~ vet:", vet)

}

main()