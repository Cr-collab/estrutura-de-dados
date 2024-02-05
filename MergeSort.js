let numbers =  [5,7,9,1,3,10,2,4,8,6];

function merge_sort(list, start, end){
  if(start < end){
    let center = Math.floor((start + end) / 2);
    
    merge_sort(list, start, center);
    merge_sort(list, center + 1, end);

    let startIndex =  start;
    let centerIndex = center +  1;
    let aux = [];

    while (startIndex <=  center && centerIndex <=  end) {
     if(list[startIndex] < list[centerIndex]){
       aux.push(list[startIndex]);
       startIndex++;
     }else {
       aux.push(list[centerIndex]);
       centerIndex++;
     }
    }

    while(startIndex <= center){
     aux.push(list[startIndex]);
     startIndex++;
    }
 
    while(centerIndex <= end){
     aux.push(list[centerIndex]);
     centerIndex++;
    }

    for (let index = 0; index < aux.length; index++) {
      list[start + index] = aux[index];
    }
  }
}


function merge_sort(list, start, end){
  // condição de parada vai ser caso a 
  // posição inicial for menor que a posição final;
  console.log('\t\t\t\n------INICIA PILHA -------------\n\t\t\t\t');
  console.log(`${start} menor que ${end} : ${start < end ? 'entra no if': 'não entra no if'} ` )
  if(start < end){
    let center = Math.floor((start + end) / 2);
    console.log("🚀 ~ merge_sort ~ meio do vetor :", center)
    console.log(`função merge sort executando que vai de ${start} ate ${end} `)
    merge_sort(list, start, center);
    console.log('segunda chamada center é igual = ' + (center + 1) + 'e end =' + end);
    merge_sort(list, center + 1, end);
    merge(list, start, end, center);
  }

}

function merge(list, start, end, center){
   let startIndex =  start;
   let centerIndex = center +  1;

   let aux = [];

   while (startIndex <=  center && centerIndex <=  end) {

    console.log(`${list[startIndex]} < ${list[centerIndex]}`);
    if(list[startIndex] < list[centerIndex]){
      aux.push(list[startIndex]);
      startIndex++;
    }else {
      aux.push(list[centerIndex]);
      centerIndex++;
    }
   }

   console.log(aux);

   while(startIndex <= center){
    aux.push(list[startIndex]);
    startIndex++;
   }
   console.log('resto',aux);


   while(centerIndex <= end){
    aux.push(list[centerIndex]);
    centerIndex++;
   }

   for (let index = 0; index < aux.length; index++) {
     list[start + index] = aux[index];
   }
}


merge_sort(numbers, 0, numbers.length  - 1);
// console.log(numbers);

