function react(e){
    if(e.classList[0]=='st'){
        e.style.backgroundColor='green';
        e.classList.add='green'
        e.classList.remove('st')
        money= money + 6;
        see.textContent= money
    } 
    else if(e.classList.contains('green')){
        e.style.backgroundColor='#be1919';
        e.classList.add='white'
        e.classList.remove('green')
    }
    else if(e.classList[0]=='white'){
        e.style.backgroundColor='#a59a9a';
        e.classList.remove('white')
        e.classList.add='st'
        money= money - 6;
        see.textContent= money
    }
    console.log(e.classList)
}