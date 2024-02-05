const arvore = {};

function insert(tree, value) {
  if (tree.value === undefined) {
    tree.value = value;
    tree.right = {};
    tree.left = {}
    return;
  } 
  
  if (value > tree.value) {
    insert(tree.right, value);
  } else {
    insert(tree.left, value);
  }
}


insert(arvore, 10)
insert(arvore,11)
console.log(arvore)
