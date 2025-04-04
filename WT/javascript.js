function validate()
{
	let email=document.getElementById("email").value;
	let password=document.getElementById("password").value;
	let emailpattern=/^.+@.+$/;
	if(password.trim()==""||email.trim()=="")
	{
		alert("Incorrect username or password");
	}
}
