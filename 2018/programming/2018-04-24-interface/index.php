<!DOCTYPE html>
<html lang="en">

    <head>

        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
        <meta name="description" content="">
        <meta name="author" content="">

        <title>Freelancer - Start Bootstrap Theme</title>

        <!-- Bootstrap core CSS -->
        <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">

        <!-- Custom fonts for this template -->
        <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
        <link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet" type="text/css">
        <link href="https://fonts.googleapis.com/css?family=Lato:400,700,400italic,700italic" rel="stylesheet" type="text/css">

        <!-- Plugin CSS -->
        <link href="vendor/magnific-popup/magnific-popup.css" rel="stylesheet" type="text/css">

        <!-- Custom styles for this template -->
        <link href="css/freelancer.min.css" rel="stylesheet">

        <script>
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

                <form id='login' name='login' name='sentMessage' id='contactForm' novalidate='novalidate' action="test.php" method="POST">
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
                        <button type="submit" class="btn btn-xl" id="sendMessageButton">Send</button>
                    </div>
                </form>

                <form id='cadastro' name='sentMessage' id='contactForm' novalidate='novalidate' action="cadUser.php">
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' id='nome' type='text' placeholder='Nome' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' id='senha' type='password' placeholder='Senha' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'>
                            <input class='form-control' id='senha' type='password' placeholder='Confriem a senha' required='required' data-validation-required-message=''>
                        </div>
                    </div>
                    <div id="success"></div>
                    <div class="form-group">
                        <button type="submit" class="btn btn-xl" id="sendMessageButton">Send</button>
                    </div>
                </form>
                <?php
                if (isset($_GET['retorno'])) {
                    echo"<br><br><a class='navbar-brand js-scroll-trigger' style='color: #000080;' href='#login' onclick='aparece('login')'>Dados inválidos!</a>";
                }
                ?>

            </div>
        </header>




        <!-- Bootstrap core JavaScript -->
        <script src='vendor/jquery/jquery.min.js'></script>
        <script src='vendor/bootstrap/js/bootstrap.bundle.min.js'></script>

        <!-- Plugin JavaScript -->
        <script src='vendor/jquery-easing/jquery.easing.min.js'></script>
        <script src='vendor/magnific-popup/jquery.magnific-popup.min.js'></script>

        <!-- Contact Form JavaScript -->
        <script src='js/jqBootstrapValidation.js'></script>
        <script src='js/contact_me.js'></script>

        <!-- Custom scripts for this template -->
        <script src='js/freelancer.min.js'></script>

    </body>

</html>
