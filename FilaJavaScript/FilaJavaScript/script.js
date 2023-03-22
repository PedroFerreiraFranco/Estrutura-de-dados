//criando instancia da fila a partir da classe
let minhaFila = new Fila(5);

function addFila(){ 
    const novo = 
        document.getElementById("novoElemento");
   if(minhaFila.enqueue(novo.value)===true){
    novo.value="";
    novo.focus(); // volta o foco para o obj
    mostrarFila();
   }//
   else
    alert("Fila cheia!");
}
//--------------------------------------------------    
function mostrarFila(){
    const filaElemento = 
       document.getElementById("listFila");
    filaElemento.textContent = 
        minhaFila.toString();   
}
//------------------------------------------
function removerFila(){
    if(minhaFila.isEmpty())
        alert("Fila vazia");
    else{
       let retorno = minhaFila.dequeue();
       alert("Valor removido:"+retorno);
       mostrarFila();
    }// fim else
}
//------------------
function primeiroFila(){
    if(minhaFila.isEmpty())
        alert("Fila vazia");
    else{
        alert("Primeiro elemento: "+minhaFila.first());
        console.log("Primeiro da fila mostrado");

    }// fim else
}
    function ultimoFila(){
        if(minhaFila.isEmpty())
            alert("Fila vazia");
        else{
            alert("Último elemento: "+minhaFila.last());
            console.log("Último da fila mostrado");
    
        }// fim else
    }