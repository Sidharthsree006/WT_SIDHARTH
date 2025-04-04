function validate()
{
        let email=document.getElementById("email").value;
        let password=document.getElementById("password").value;
        let emailPattern=/^.+@.+$/
        if(password.trim()==""||email.trim()=="")
        {
                alert("username and password required");
        }
	else if(!emailPattern.test(email))
	{
		alert("Incorrect username");
	}
}
