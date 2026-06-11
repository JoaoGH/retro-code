<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <?php
        require_once "./head.php";
        ?>
    </head>
    <script type="text/javascript">
        function teste() {
            input = document.getElementById("hidden").value;
            if (input >= 5) {
                document.getElementById("pesqPreco").disabled = false;
            }

        }
    </script>
    <body  id='page-top' class='bg-primary' onload='teste()'>
        <br><br><br><br>
        <header class='text-white text-center'>
            <div class='container'>
                <h1 class='text-uppercase mb-0'>Veja os preços mais baixos aqui.</h1>
                <hr class='star-light'>
                <h5 class='font-weight-light mb-0'>Para ver os preços dos produtos, cadastre ao menos 5 preços antes de começar. E 1 hoje, caso já tenha cadastrado os 5.<br><br></h5>

                <br>


                <!--Faz um script que o botao de pesquisa fique disabled até que o user cadastre no minimo 5 produtos-->
                <form action="./cadPreco.php">
                    <button type="submit" class="btn btn-secondary" id="cadPreco" style="width: 50%">Cadastrar preços</button>
                </form>
                <br><br>
                <form action="./pesqPreco.php">
                    <button disabled="" type="submit" class="btn btn-secondary" id="pesqPreco" style="width: 50%">Pesquisar preços</button>
                </form>
                <?php
                if (isset($_GET['qtd'])) {
                    echo"<br><br><input type='hidden' id='hidden' value='" . $_GET['qtd'] . "' />";
                }
                ?>


            </div>

        </header>


        <?php
        require_once "./fimBody.php";
        ?>

    </body>
</html>
