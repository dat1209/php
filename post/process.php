<?php
	session_start();
	//tạo 1 cơ sở dữ liệu giả lập chứa các tài khoản cơ sở dữ liệu
	$acc=array(
		'admin' => '123456',
		'manager' => '1234',
		'member' => 'abcd',
		'tuandat' => 'dat12091999a'
	);
	$status=0;
	$_SESSION['loggedin']=false;
	//kiểm tra người dùng có ấn nút BTNLogin 
	if (isset($_POST['btnLogin'])) {
		//tiến hành lấy dữ liệu
		$user=$_POST['txtUser'];
		$pass=$_POST['txtPass'];
		foreach ($acc as $key => $value) {
			if ($key==$user&&$value==$pass) {
				$status=1;
				break;
			}
		}
		if ($status==1) {
			$_SESSION['login']=$user;
			$_SESSION['loggedin']=true;
			header('location:index.php');
		} else {
			header('location:login.php');
		}
		
	} else {
		header('location:login.php');
	}
	
?>