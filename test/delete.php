<?php
if (isset($_GET['id']) && $_GET['id']!="") {
	//Lay gia tri cua tham so 'id' tren URL
	$id = $_GET['id'];
	require "database.php";
	$query = "DELETE FROM dienthoai WHERE ma_dienthoai = ?";
	$stmt = $db->prepare($query);
	$stmt->bindParam(1,$id);
	
	if($stmt->execute()){
		echo "confirm('Bạn có muốn xóa không?')";
		header("location:index.php");
	}

}else{
	header("location:index.php");
}
?>