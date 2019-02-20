<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Page Title</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
</head>
<body>
    <?php
    if (isset($_POST['btnCreate'])) {
        require 'database.php';
        $sql = "INSERT INTO dienthoai SET ten_dienthoai=?, ma_hang=?, gia_dienthoai=?, mau_sac=?, mo_ta=?, trang_thai=?, ngay_dang=?";
        $stmt = $db -> prepare($sql);
        $time = date('Y/m/d H:i:s');
        $stmt->bindParam(1,$_POST['txtName']);
        $stmt->bindParam(2,$_POST['Brand']);
        $stmt->bindParam(3,$_POST['txtPrice']);
        $stmt->bindParam(4,$_POST['txtColor']);
        $stmt->bindParam(5,$_POST['txtDesc']);
        $stmt->bindParam(6,$_POST['TrangThai']);
        $stmt->bindParam(7,$time);

        $stmt -> execute();
        if($stmt->execute()==true){
                //echo "<script>alert('Thêm mới thành công');</script>";
                header("location:index.php");
            }else{
                echo "<div class='alert alert-danger'>Thêm mới thất bại.</div>";
            }
    ?>
    <div class="container">
    	<div class="page-header">
    		THÊM MỚI SẢN PHẨM
    	</div>
    	<form action="" method="post" enctype="multipart/form-data">
    		<table class="table table-bodered table-hover">
    			<tr>
    				<td>Tên diện thoại</td>
    				<td>
    					<input type="text" name="txtName" class="form-control" placeholder="Mời nhập tên sản phẩm">
    				</td>
    			</tr>
                <tr>
                    <td>Hãng</td>
                    <?php
                        $sql1 = "SELECT * FROM hang_dienthoai";
                        $stmt1 = $db -> prepare($sql1);
                        $stmt1 -> execute();;
                    ?>
                    <td>
                        <select class="form-control" name="Brand">
                            <?php
                                while($s = $stmt1->fetch(PDO::FETCH_ASSOC)){
                                    echo '<option value="'.$s['ma_hang'].'">'.$s['ten_hang'].'</option>';
                                }
                            ?>
                        </select>
                    </td>
                </tr>
    			<tr>
    				<td>Giá</td>
    				<td>
    					<input type="text" name="txtPrice" class="form-control" placeholder="Mời nhập tên sản phẩm">
    				</td>
    			</tr>
    			<tr>
    				<td>Màu sắc</td>
    				<td>
    					<input type="text" name="txtColor" class="form-control" placeholder="Mời nhập tên sản phẩm">
    				</td>
    			</tr>
    			<tr>
    				<td>Mô tả</td>
    				<td>
    					<textarea name="txtDesc" class="form-control"></textarea>
    				</td>
    			</tr>
    			<tr>
                    <td>Trạng thái</td>
                    <td>
                        <select class="form-control" name="TrangThai">
                            <option value="0">Ẩn</option>
                            <option value="1">Hiện</option>
                        </select>
                    </td>         
                </tr>
                <tr>
                    <td></td>
                    <td>
                        <input type="submit" name="btnCreate" value="Thêm" class="form-control btn btn-success">
                    </td>
                </tr>
    		</table>
    	</form>
    </div>
    <?php
        }
    ?>
</body>
</html>