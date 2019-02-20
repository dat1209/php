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
		$sql = "SELECT * FROM dienthoai";
		$stmt = $db -> prepare($sql);
		$stmt->execute();
		$count = $stmt->rowCount();
		if($count>0)
		{
			?>
			<div class="container">
				<div class='row page-header'>
					<div class="col-xs-6">
						<h3>QUẢN LÝ ĐIỆN THOẠI</h3>
					</div>
					<div class="col-xs-6" style="text-align: right;">
						<a href="create.php" class="btn btn-success">Thêm mới</a>
					</div>
				</div>
				<form action="" method="post" enctype="multipart/form-data">
					Từ khóa tìm kiếm:
					<input type="text" name="txtSearch">
					<input type="submit" name="btnSearch" value="Tìm kiếm">
				</form>

				<?php
					if (isset($_GET['btnSearch'])) {
						$search = $_GET['txtSearch'];
						$sql2 = "SELECT * FROM dienthoai WHERE ma_dienthoai LIKE '%".$search."%'";
						$stmt2 = $db -> prepare($sql2);
						$stmt2 -> execute();
						$count1 = $stmt2->rowCount();
						if ($count1>0) {
							?>
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
											echo "<td>";
												$id=$row['ma_dienthoai'];
												echo "<a class='btn btn-success' href='update.php?id=".$row['ma_dienthoai']."'>Sửa</a>";
												echo "<a class='btn btn-danger' href='delete.php?id=".$row['ma_dienthoai']."' onclick='xoa(".$id.");'>Xóa</a>";
											echo "</td>";
										echo "</tr>";
									}
								?>
							</table>
							<?php
						}else{
							echo "<div class='alert alert-danger'>Không có sản phẩm nào</div>";
						}
					} else {
					
				?>

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
								echo "<td>";
									$id=$row['ma_dienthoai'];
									echo "<a class='btn btn-success' href='update.php?id=".$row['ma_dienthoai']."'>Sửa</a>";
									echo "<a class='btn btn-danger' href='delete.php?id=".$row['ma_dienthoai']."' onclick='xoa(".$id.");'>Xóa</a>";
								echo "</td>";
							echo "</tr>";
						}
					?>
				</table>
				<?php
					}
				?>
			</div>
			<?php
		}
	?>
</body>
</html>