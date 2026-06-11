<!DOCTYPE html>
<html lang="en">
    <head>
        <?php
        require_once "./head.php";
        ?>
    </head>
    <body id='page-top' class='bg-primary'>
        <br><br><br><br>
        <!-- Header -->
        <header class='text-white text-center'>
            <div class='container'>


                <form action="pesqPreco.php" method="POST">
                    <div class='control-group'>
                        <div  class='form-group controls mb-0 pb-2'>
                        </div>
                    </div>
                    <?php
                    session_start();
                    require './conectar.php';

                    $q = "select * from produtos";
                    $query = $conexao->query($q);
                    $num = $query->num_rows;
                    for ($i = 0; $i < $num; $i++) {
                        $q2 = "select * from produtos where id=" . $i;
                        $qtd = $query->fetch_array(MYSQLI_NUM);
                        echo "<div class='control-group'>
                                <div class='form-group controls mb-0 pb-2'>" .
                                    $qtd[4]
                                . "</div>
                             </div>";
                    }
                    ?>
                    <br>
                    <div class="form-group">
                        <button type="submit" class="btn btn-xl">Cadastrar</button>
                    </div>
                </form>




            </div>
        </header>
        <?php
        require_once "./fimBody.php";
        ?>

    </body>

</html>
