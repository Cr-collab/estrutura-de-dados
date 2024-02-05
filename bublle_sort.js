const bublle_sort_interativo =  (array) => {

  let troca = 1;

  while(troca){
    troca = 0;
    let n =  array.length - 1;
    for (let index2 = 0; index2 < n ; index2++) {
      const a = array[index2];
      const b = array[index2 + 1];

      if(a > b){
        array[index2 + 1] =  a;
        array[index2] =  b;
        troca = 1;
      }
    }
    n--;
  }

  return array;
}
const bubble = (array, n)=>{
  if(n < 1){
    return array;
  }

  for (let index = 0; index < n; index++) {
    const a = array[index];
    const b = array[index + 1];
     if(a > b){
      array[index + 1] =  a;
      array[index] =  b;
     }
  }

  return bubble(array ,n - 1);
}

const bubble_sort_recursiva = (array) => {
  return bubble(array, array.length -1);
}

console.log(bublle_sort_interativo([5,4,3,2,1]))
console.log(bubble_sort_recursiva([5,4,3,2,1]))