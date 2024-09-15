function message(){
    var Email = document.getElementById('email');
    var Password = document.getElementById('password');
    const error = document.getElementById('error');

    if(Email.value === '' || Password.value === ''){
        error.style.display = 'block';
    }
    else{
        setTimeout(() =>{
            Email.value = '';
            Password.value = '';
            error.style.display = 'none';
        },2000);
    }
    setTimeout(() =>{
        error.style.display = 'none';
    },2000);
    
}