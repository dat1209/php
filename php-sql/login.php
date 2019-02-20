<?php session_start(); ?>
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<form action="" method="post">
		Tên đăng nhập:
		<input type="text" name="txtEmail">
		Mật khẩu:
		<input type="password" name="txtPass">
		<input type="submit" name="btnLogin" value="Đăng nhập">
	</form>
</body>
</html>
<?php
	if (isset($_POST['btnLogin'])) {
		$email = $_POST['txtEmail'];
		$pass = $_POST['txtPass'];
		require 'database.php';
		$sql = "SELECT CustomersID,Email, Password, Fullname FROM customers WHERE Email=? AND Password=?";
		$stmt = $db->prepare($sql);
		$stmt->bindParam(1, $email);
		$stmt->bindParam(2, $pass);
		$stmt->execute();
		$count = $stmt->rowCount();
		if ($count>0) {
			$cust = $stmt->fetch(PDO::FETCH_ASSOC);
			$_SESSION['logged_in'] = true;
			$_SESSION['user'] = $cust['Fullname'];
			$_SESSION['cust_ID'] = $cust['id'];
			header("location:checkout.php");
		}else{
			echo "Đăng nhập không thành công";
		}
	}
?>