<!DOCTYPE html>
<html>
<head>
	<title></title>
	<style type="text/css">
		label{
			display: inline-block;
			width: 100px;
			margin-bottom: 10px;
		}
		input[type='text'], input[type='password']{
			width: 250px;
			line-height: 25px;
			border: 1px solid black;
			border-radius: 3px;
		}
	</style>
</head>
<body>
	<form action="process.php" method="post">
		<label>Usernam</label>
		<input type="text" name="txtUser"><br>
		<label>Password</label>
		<input type="password" name="txtPass"><br>
		<label></label>
		<input type="submit" name="btnLogin" value="Login">
	</form>
</body>
</html>