<?php
	session_start();
	if (isset($_SESSION['login'])&&isset($_SESSION['loggedin'])&&$_SESSION['loggedin']==true) {
		//hủy phiên làm việc
		session_unset($_SESSION['login']);
		$_SESSION['loggedin']=false;
		header('location:login.php');
	} else {
		//điều hướng về login
		header('location:login.php');
	}
?>