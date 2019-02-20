<!DOCTYPE html>
<html>
<head>
	<title></title>
	<link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
</head>
<body>
<?php
	session_start();
	if (isset($_GET['id'])) {
		$id = $_GET['id'];
		$quantity = 1;
		$total = 0;
		//lấy dữ liệu của bảng ghi từ cơ sở dữa liệu
		require "database.php";
		$sql = "SELECT 	ProductName, modem ,UnitPrice FROM products WHERE ProductID = $id";
		$stmt = $db -> prepare($sql);
		$stmt -> execute();
		$result = $stmt->fetch(PDO::FETCH_ASSOC);

		//tạo mảng để chứa dữ liệu từ câu truy vấn
		$row[] = $result;
		$item = array(
			$row[0]['modem'] => array(
				'ProductName' => $row[0]['ProductName'],
				'UnitPrice'   => $row[0]['UnitPrice'],
				'Quantity'    => $quantity
			)
		);
		// echo "<pre>";
		// print_r($item);
		if (!empty($_SESSION['cart'])) {
			//chỉ việc tăng số luongj của sản phẩm đó.
			if (in_array($row[0]['modem'], array_keys($_SESSION['cart']))) {
				//tiến hành duyệt từng phần tử trong session để kiểm tra theo key
				foreach ($_SESSION['cart'] as $key => $value) {
					if ($row[0]['modem'] == $key) {
						$_SESSION['cart'][$key]['Quantity'] +=1;
					}
				}
			} else {
				//nếu sản phẩm cần mua chưa có trong giỏ hàng -> tiến hành gộp vào session			
				$_SESSION['cart'] = array_merge($_SESSION['cart'],$item);
			}
		}
		else{
			//thêm sản phẩm vào
			$_SESSION['cart']=$item;
		}
		?>
			<table class="table table-responsive table-bordered table-hover">
				<tr>
					<th>Mã SP</th>
					<th>Tên SP</th>
					<th>Giá</th>
					<th>Số lượng</th>
					<th>Thành tiền</th>
				</tr>
				<?php
					foreach ($_SESSION['cart'] as $key => $value) {
				?>
				<tr>
					<td><?php echo $key; ?></td>
					<td><?php echo $value['ProductName']; ?></td>
					<td><?php echo $value['UnitPrice']; ?></td>
					<td><?php echo $value['Quantity']; ?></td>
					<td><?php echo $value['Quantity']*$value['UnitPrice']; ?></td>
				</tr>
		<?php
			$total += $value['Quantity']*$value['UnitPrice'];
		}
		?>
				<tr>
					<td colspan="4">Tổng tiền</td>
					<td><?php echo $total; ?></td>
				</tr>
				<tr>
					<td colspan="3"><a href="index.php" class="btn btn-success">Tiếp tục mua hàng</a></td>
					<td colspan="2"><a href="checkout.php" class="btn btn-danger">Thanh toán đơn hàng</a></td>
				</tr>
			</table>
		<?php
	}else{}
?>
</body>
</html>