<!DOCTYPE html>
<html>
<head>
	<title></title>
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<style type="text/css">
		table{
			margin-top: 20px;
		}
	</style>
</head>
<body>
	<?php
		require "database.php";
		if (isset($_POST['subSearch'])) {
			$sql = "SELECT * FROM dienthoai WHERE mo_ta LIKE '%$s%' OR ten_hang LIKE '%$s%' OR mau_sac LIKE '%$s%' OR ten_dienthoai LIKE '%$s%'";
			$stmt = $db -> prepare($sql);
			$stmt->execute();
			$count = $stmt->rowCount();
			if($count>0)
			{
				?>
				<div class="container">
					<div class="page-header">
						<h3>QUẢN LÝ ĐIỆN THOẠI</h3>
					</div>
					<form action="" method="post" enctype="multipart/form-data">
						Từ khóa tìm kiếm:
						<input type="text" name="txtSearch">
						<input type="submit" name="subSearch" value="Tìm kiếm">
					</form>
					<table class="table table-bodered table-hover">
						<tr>
							<th>Tên điện thoại</th>
							<th>Hãng điện thoại</th>
							<th>Màu sắc</th>
							<th>Giá tiền</th>
							<th>Mô tả</th>
							<th>Ngày đăng</th>
							<th>Trạng thái</th>
							<th>Thao tác</th>
						</tr>
						<?php
							while ($row = $stmt -> fetch(PDO::FETCH_ASSOC)) {
								$ma_hang=$row['ma_hang'];
								$sql1 = "SELECT * FROM hang_dienthoai WHERE ma_hang=$ma_hang";
								$stmt1 = $db -> prepare($sql1);
								$stmt1->execute();
								$hang = $stmt1 -> fetch(PDO::FETCH_ASSOC);
								echo "<tr>";
									echo "<td>".$row['ten_dienthoai']."</td>";
									echo "<td>".$hang['ten_hang']."</td>";
									echo "<td>".$row['mau_sac']."</td>";
									echo "<td>".$row['gia_dienthoai']."</td>";
									echo "<td>".$row['mo_ta']."</td>";
									echo "<td>".$row['ngay_dang']."</td>";
									if ($row['trang_thai']) {
										echo "<td>Hiện</td>";
									}else{echo "<td>Ẩn</td>";}
									$id=$row['ma_dienthoai'];
									echo "<td><a class='btn btn-danger' href='delete.php?id=".$row['ma_dienthoai']."' onclick='xoa(".$id.");'>Xóa</a></td>";
								echo "</tr>";
							}
						?>
					</table>
				</div>
	<?php
		}else{
			header("location:index.php")
		}
	?>
</body>
</html>