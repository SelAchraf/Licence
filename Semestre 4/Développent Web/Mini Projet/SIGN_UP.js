function message(){
    var Name = document.getElementById('name');
    var User_name = document.getElementById('user_name');
    var Email = document.getElementById('email');
    var Phone_Number = document.getElementById('phone_number');
    var Password = document.getElementById('password');
    var Password_Confirmation = document.getElementById('password_confirmation');

    if(Name.value === '' || User_name.value === '' || Email.value === '' || Phone_Number.value === '' || Password.value === '' || Password_Confirmation.value === '' ){
        error.style.display = 'block';
    }
    else{
        setTimeout(() =>{
            Name.value = '';
            User_name.value = '';
            Email.value = '';
            Phone_Number.value = '';
            Password.value = '';
            Password_Confirmation.value = '';
            error.style.display = 'none';
        },2000);
    }
    setTimeout(() =>{
        error.style.display = 'none';
    },2000);
}
