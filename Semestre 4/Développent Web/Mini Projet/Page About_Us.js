function message(){
    var Name = document.getElementById('name');
    var Email = document.getElementById('email');
    var Message = document.getElementById('msg');
    const success = document.getElementById('success');
    const error = document.getElementById('error');

    if(Name.value === '' || Email.value === '' || Message.value === ''){
        error.style.display = 'block';
    }
    else{
        setTimeout(() =>{
            Name.value = '';
            Email.value = '';
            Message.value = '';
        },2000);
        success.style.display = 'block';
    }
    setTimeout(() =>{
        error.style.display = 'none';
        success.style.display = 'none'
    },2000);
}