const dropBttn = document.getElementById("dropDownBttn");
const dropMenu = document.getElementById("dropDownMenu");

dropBttn.addEventListener("click",function(event){
 event.stopPropagation();
if (dropDownMenu.style.display ==="flex"){
    dropDownMenu.style.display="none";
}

else{
    dropDownMenu.style.display ="flex";
}
});

document.body.addEventListener("click",function(){
    dropDownMenu.style.display ="none";
});

dropDownMenu.addEventListener("click",function(event){
    event.stopPropagation();
});