<!DOCTYPE html>
<html>
<head>
	<title></title>
	<link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<script type="text/javascript">
		function xoa(id) {
			var result = window.confirm("Bạn có chắc muốn xóa sản phẩm có mã: "+id);
			if (result==true) {
				window.location.href="delete.php?id="+id;
			}
		}
	</script>
</head>
<body>
<?php
	//Bước 1
	require "database.php";
	//Bước 2
	$sql = "SELECT * FROM products";
	//Bước 3
	$stmt = $db->prepare($sql);
	//Bước 5
	$stmt->execute();

	$count = $stmt->rowCount();

	if($count>0){
		//Biểu diễn dữ liện
		?>
		<div class="container">
			<div class="row page-header">
				<div class="col-xs-6">
					<h4>Danh sách sản phẩm</h4>
				</div>
				<div class="col-xs-6" style="text-align: right">
					<a href="create.php" class="btn btn-success">Thêm mới</a>
				</div>
			</div>

			<div style="margin-bottom: 20px;">
				Nhập tên sản phẩm cần tìm:
				<form action="" method="">
					<input type="text" name="txtSearch">
					<input type="submit" name="btnSearch" value="Tìm kiếm">
				</form>
			</div>
			<?php
				if (isset($_GET['btnSearch'])) {
					$search = $_GET['txtSearch'];
					$sql1 = "SELECT * FROM products WHERE ProductName LIKE '%".$search."%' OR ";
					$stmt1 = $db -> prepare($sql1);
					$stmt1 -> execute();
					$count1 = $stmt1->rowCount();
					if ($count1) {
						?>
						<table class="table table-responsive table-bordered table-hover">
							<tr>
								<th>Tên</th>
								<th>Giá</th>
								<th>Số lượng nhập kho</th>
								<th>Chức năng</th>

							</tr>

							<?php
								while ($row1 = $stmt1->fetch(PDO::FETCH_ASSOC)) {
									echo "<tr>";
										echo "<td><a href='detail.php?id=".$row1['ProductID']."'>";
										echo $row1['ProductName'];
										echo "</a></td>";
										
										echo "<td>".$row1['UnitPrice']."</td>";
										echo "<td>".$row1['QuantityPerUnit']."</td>";
										echo "<td>";
											$id = $row1['ProductID'];
											echo "<a class='btn btn-success' href='update.php?id=".$row1['ProductID']."'>Sửa</a>";
											echo "<a class='btn btn-danger' href='delete.php?id=".$row1['ProductID']."' onclick='xoa(".$id.");'>Xóa</a>";
										echo "</td>";
									echo "</tr>";
								}
							?>
						</table>
						<?php
					}else{
						echo "<div class='alert alert-danger'>Sản phẩm không tồn tại</div>";
					}
				}else{
			?>

			<table class="table table-responsive table-bordered table-hover">
				<tr>
					<th>Tên</th>
					<th>Giá</th>
					<th>Số lượng nhập kho</th>
					<th>Chức năng</th>

				</tr>

				<?php
					while ($row = $stmt->fetch(PDO::FETCH_ASSOC)) {
						echo "<tr>";
							echo "<td><a href='detail.php?id=".$row['ProductID']."'>";
							echo $row['ProductName'];
							echo "</a></td>";
							
							echo "<td>".$row['UnitPrice']."</td>";
							echo "<td>".$row['QuantityPerUnit']."</td>";
							echo "<td>";
								$id = $row['ProductID'];
								echo "<a class='btn btn-success' href='update.php?id=".$row['ProductID']."'>Sửa</a>";
								echo "<a class='btn btn-danger' href='delete.php?id=".$row['ProductID']."' onclick='xoa(".$id.");'>Xóa</a>";
								echo "<a class='btn btn-default' href='cart.php?id=".$row['ProductID']."' onclick='them(".$id.");'>Thêm vào giỏ</a>";
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