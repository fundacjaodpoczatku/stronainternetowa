<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <main>
        <section class="insert_section">
            <?php

            include "db-connection.php";

            if(isset($_POST['submit']) && !empty($_POST['submit']))
            {
                $name = $_POST['name'];
                $surname = $_POST['surname'];
                $message = $_POST['message'];    

                $insert = mysqli_query($db, "INSERT INTO `wiadomosc` (`imie`,`nazwisko`,`wiadomosc`) VALUES ('$name','$surname','$message')");

                if(!$insert){
                    printf("Wystąpił błąd: %s\n", mysqli_error($link));
                }
                else{
                    echo "Twoja Wiadomość została wysłana";
                }

            }
            else{
                echo "Brak danych w formularzu";
            }
            mysqli_close($db);

            ?>
        </section>
    </main>    
</body>
</html>