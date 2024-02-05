const selection_sort_interativo =  (array) => {  
   for (let index = 0; index < array.length; index++) {
    let  menor = index;
    for (let index2 = index + 1; index2 < array.length; index2++) {
      if(array[index2] < array[menor]){
        menor = index2;
      }
    }

    const aux  = array[index];
    array[index] = array[menor];
    array[menor] = aux;
  }

  return array;
}


const selection_sort_recursivo = (array, ini , tam ) => {
  if(ini >= tam ){
    return array;
  }

  let  menor = ini;
  for (let index = ini; index < tam; index++) {
    if(array[index] < array[menor]){
      menor = index;
    }
  }
  
  const aux  = array[ini];
  array[ini] = array[menor];
  array[menor] = aux;

  return selection_sort_recursivo(array, ini + 1, tam);
}


console.log(selection_sort_interativo([2,1,3,4,5]))
let a = [5,4,3,2,1]
console.log(selection_sort_recursivo(a, 0, a.length))