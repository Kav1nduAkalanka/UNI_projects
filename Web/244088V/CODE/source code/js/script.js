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





let slideIndex = 0;
showSlides();

function showSlides() {
        let i;
        let slides = document.getElementsByClassName("slide");
        for (i = 0; i < slides.length; i++) {
            slides[i].style.display = "none";
        }
        slideIndex++;

        if (slideIndex > slides.length) {
            slideIndex = 1;
        }

        slides[slideIndex - 1].style.display = "block";

        setTimeout(showSlides, 1500);
}


function showSidebar(){
    const sidebar = document.querySelector('.sidebar');
    sidebar.style.display ="flex";
}

function hideSidebar(){
    const sidebar = document.querySelector('.sidebar');
    sidebar.style.display ="none";
}