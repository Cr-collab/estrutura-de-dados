function insertion_sort_interativo(array, tam){
  for (let index = 1; index < tam; index++) {
    let currentPosition = index;
    let valueCurrentCopy =  array[currentPosition];

    while(currentPosition > 0 &&  valueCurrentCopy < array[currentPosition - 1]){
      const beforePosition = currentPosition-1;
      array[currentPosition] = array[beforePosition];
      currentPosition--;
    }

    array[currentPosition] = valueCurrentCopy;
  }

  return array;
}

function insertion_sort_recursivo(array, ini, tam){
    if(ini >= tam){
      return array;
    }

    let currentPosition = ini;
    let valueCurrentCopy =  array[currentPosition];

    while(currentPosition > 0 && valueCurrentCopy < array[currentPosition - 1]){
      const beforePosition = currentPosition-1;
      array[currentPosition] = array[beforePosition];
      currentPosition--;
    }

    array[currentPosition] = valueCurrentCopy;
    return insertion_sort_recursivo(array, ini + 1, tam);
  }

console.log(insertion_sort_interativo([7,3,5,8,2], 5));
console.log(insertion_sort_recursivo([7,3,5,8,2],1, 5));