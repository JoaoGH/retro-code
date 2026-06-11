<?php
session_start();
session_destroy();
header("loation: index.php");
?>
<!DOCTYPE html>
<html lang="en">

    <head>

        <?php
            require_once "./head.php";
        ?>

        <script>
            precos=[];
            function inicio() {
                opc = document.getElementById("cadastro");
                opc2 = document.getElementById("login");
                opc.style = "display:none";
                opc2.style = "display:none";
            }
            function aparece(nome) {
                elem = document.getElementById(nome);
                if (nome == "login") {
                    document.getElementById("cadastro").style = "display:none";
                } else {
                    document.getElementById("login").style = "display:none";
                }
                elem.style = "display:block";
            }

        </script>
    </head>
    <body id='page-top' class='bg-primary' onload="inicio()">
        <br><br><br><br>
        <!-- Header -->
        <header class='text-white text-center'>
            <div class='container'>
                <img class='img-fluid mb-5 d-block mx-auto' src='img/profile.png' alt=''>
                <h1 class='text-uppercase mb-0'>Preço baixo</h1>
                <hr class='star-light'>
                <h2 class='font-weight-light mb-0'>Bem vindo<br><br></h2>

                <a class="navbar-brand text-white js-scroll-trigger" href="#login" onclick="aparece('login')">Login</a>

                <a class="navbar-brand text-white js-scroll-trigger" href="#cadastro" onclick="aparece('cadastro')">Cadastro</a>

                <form id='login' name='login' name='sentMessage' id='contactForm' novalidate='novalidate' action="login.php" method="POST">
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' name='nome' type='text' placeholder='Nome' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' name='senha' type='password' placeholder='Senha' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div id="success"></div>
                    <div class="form-group">
                        <button type="submit" class="btn btn-xl" id="entrar">Entrar</button>
                    </div>
                </form>

                <form id='cadastro' name='sentMessage' id='contactForm' novalidate='novalidate' action="cadUser.php" method="POST">
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' name='nome' type='text' placeholder='Nome' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' name='senha' type='password' placeholder='Senha' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' name='senha2' type='password' placeholder='Confrime a senha' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div id="success"></div>
                    <div class="form-group">
                        <button type="submit" class="btn btn-xl" id="cadastrar">Cadastrar</button>
                    </div>
                </form>
                <?php
                if (isset($_GET['retorno'])) {
                    echo"<br><br><a class='navbar-brand js-scroll-trigger' style='color: #000080;' href='#login' onclick='aparece('login')'>".$_GET['retorno']."</a>";
                }
                ?>

            </div>
        </header>




        <?php
            require_once "./fimBody.php";
        ?>

    </body>

</html>
