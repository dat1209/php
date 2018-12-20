<!DOCTYPE html>
<html>
<head>
	<title>Trang chi tiết</title>
</head>
<body>
	<?php
		if (isset($_GET['id'])&&isset($_GET['catid'])) {
			//lấy giá trị cảu tham số trên URL
			$_id=$_GET['id'];
			echo "Mã sản phẩm ".$_id;
			$_catid=$_GET['catid'];
			if ($_catid==1) {
				echo "<br>Sản phẩm thuộc danh mục Laptop";
			} else {
				if ($_catid==2) {
					echo "<br>Sản phẩm thuộc danh mục computer";
				} elseif ($_catid==3) {
					echo "<br>Sản phẩm thuộc danh mục máy tính bảng";
				}
			}
		} else {
			header("location:index.php");
		}	
	?>
</body>
</html>