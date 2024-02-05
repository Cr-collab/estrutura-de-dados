const Queue = () => {
  const data = [];

  const add = (value) => {
    data.unshift(value);
  }

  const remove = () => {
    const value = data[data.length - 1];
    data.splice(data.length - 1, 1);
    return value;
  }

  const print = () => {
    console.log(data)
  }

  return {
    add,
    remove,
    print
  }
}

const fila = Queue()

fila.add(1);
fila.add(2);
fila.add(3);
fila.add(4);

fila.print();

fila.remove();
fila.print();

fila.remove();
fila.print(); fila.remove();
fila.print(); fila.remove();
fila.print();


////  fila 2

let fila = null;

function inserir_na_fila(fila, value){
  
}




