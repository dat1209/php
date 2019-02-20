<?php
session_start();
if (!isset($_SESSION['logged_in']) && !isset($_SESSION['user'])) {
	header("location: login.php");
}else{
	//lưu dữu liệu xuống bảng 'order' cảu CSDL
	$custId = $_SESSION['cust_ID'];

	//chèn dữ liệu vào bảng 'order'

	//lấy đc orderID thông qua hàm lastInsertId() đồng thời amng orderID vừa tạo ra + ProductID cahnf vào bảng "order_details"
}
?>