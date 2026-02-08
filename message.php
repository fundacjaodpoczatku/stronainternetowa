<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="form.css">
    <title>Answer</title>
</head>
<body>
    <section>
        <?php
            include "db-connection.php";

            if(isset($_POST['username'], $_POST['e-mail'], $_POST['password'])){
                $username=$_POST['username'];
                $email=$_POST['e-mail'];
                $password=$_POST['password'];
                

                $username=stripcslashes($username);
                $email=stripcslashes($email);
                $password=stripcslashes($password);

                $sql="SELECT * FROM uzytkownicy where username='$username' and email='$email' and password='$password'";
                $result=mysqli_query($db, $sql);
                $row=mysqli_fetch_assoc($result);
                $count=mysqli_num_row($result);

                if($count==1){
                    $_SESSION["name"]=$username
                    echo "Jesteś zalogowany/a";
                }
                else{
                    echo "Błędny login lub hasło";
                }
            }            
        ?>
    </section>
    <section>
        <?php

        include "db-connection.php"

        $sql="SELECT id, imie, nazwisko, wiadomosc FROM wiadomosc";
        $result=mysqli_query($db,$sql);

        if(mysqli_num_rows($result)>0){
            while($row=msqli_fetch_assoc($result)){
                echo "id: ".$row["id"]. "Name: ".$row["imie"]. "Surname".$row["nazwisko"]. "Text: ".$row["wiadomosc"];
            }
        }
        else{
            echo "Brak danych";
        }
        mysqli_close($db);
        ?>
    </section> 
    <footer>
        <a href="log_out.php">Wyloguj</a>
    </footer>   
</body>
</html>