<?php
session_start();
$total = 0;
//kiểm tra khách hàng đã là thành viên chưa?
if (!isset($_SESSION['logged_in']) && !isset($_SESSION['user'])) {
	header("location: login.php");
}else{
	//hiển thị dữ liệu của giỏ hàng kho đăng nhập thành công
	if (isset($_SESSION['cart'])) {
		?>
		<div>Xin chào: <?php echo $_SESSION['user']; ?></div>
		<table class="table table-responsive table-bordered table-hover" style="border: 1px;">
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
				<td colspan="5">
					Mời bạn lựa chọn phương thức thanh toán<br>
					<input type="radio" name="chkmethod" value="1" checked>COD<br>
					<input type="radio" name="chkmethod" value="2">Gate<br>
					<input type="radio" name="chkmethod" value="3">Internet Banking<br>
				</td>
			</tr>
			<tr>
				<td colspan="5">
					<a href="order.php">Hoàn tất đặt hàng</a>
				</td>
			</tr>
		</table>
		<?php
	} else {
		header('location:index.php');
	}
	
}
?>