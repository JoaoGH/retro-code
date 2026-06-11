<!DOCTYPE html>
<html>

    <head>

        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
        <meta name="description" content="">
        <meta name="author" content="">

        <title>Livros</title>

        <!-- Bootstrap core CSS -->
        <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">

        <!-- Custom fonts for this template -->
        <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
        <link href="vendor/simple-line-icons/css/simple-line-icons.css" rel="stylesheet" type="text/css">
        <link href="https://fonts.googleapis.com/css?family=Lato:300,400,700,300italic,400italic,700italic" rel="stylesheet" type="text/css">

        <!-- Custom styles for this template -->
        <link href="css/landing-page.min.css" rel="stylesheet">

        <script src="./controller/rapido.js"></script>
    </head>

    <body>

        <form method="./controller/verLivros.php">
            <nav class="navbar navbar-light bg-light static-top">
                <div class="container">
                    <input id="pesq" type="text" class="form-control form-control-sm navbar-brand col-xl-5" placeholder="Título, autor, ano, editora..."/>
                    <button onclick="verLivros()" class="btn btn-primary">Procurar</button>
                </div>
            </nav>
        </form>

        <!-- Masthead -->
        <header class="masthead text-white text-center">
            <div class="overlay"></div>
            <div class="container">
                <div class="row">
                    <div class="col-xl-9 mx-auto">
                        <h1 class="mb-5">Os melhores livros</h1>
                    </div>

                    <div class="col-md-12 col-lg-12 col-xl-8 mx-auto">
                        <a href="#cad"><button class="btn btn-block btn-lg btn-primary" onclick="aparece('cad')">Cadastrar livros</button></a>
                    </div>
                </div>
            </div>
        </header>
        <section class='showcase'>
            <div class='container-fluid'>
                <div class='row'>
                    <div class="col-md-12 col-lg-12 col-xl-8 mx-auto">
                        <div class="form-row" id="cad" style="display:none">
                            <div class='col-lg-12 order-lg-1 showcase-text mx-auto'>
                                <h1>Cadastro de livros</h1>
                                <br>
                                <p class='lead mb-0 '>Título do livro: </p>
                                <input type="text" class="form-control form-control-lg" id="titulo" required>
                                <br>
                                <p class='lead mb-0'>Ano: </p>
                                <input type="text" class="form-control form-control-lg" id="ano" required pattern="^\d{4}$">
                                <br>
                                <p class='lead mb-0'>Autor(a): </p>
                                <input type="text" class="form-control form-control-lg" id="autor" required pattern="^[^0-9]+$">
                                <br>
                                <input type="checkbox" onclick="habilita()" id="segAutor"/>
                                <p class='lead mb-0'>Autor(a) 2: </p>
                                <input type="text" class="form-control form-control-lg" disabled="" id="autor2" pattern="^[^0-9]+$">
                                <br>
                                <input type="checkbox" onclick="habilita()" id="terAutor"/>
                                <p class='lead mb-0'>Autor(a) 3: </p>
                                <input type="text" class="form-control form-control-lg" disabled="" id="autor3" pattern="^[^0-9]+$">
                                <br>
                                <p class='lead mb-0'>Editora: </p>
                                <input type="text" class="form-control form-control-lg" required id="editora">
                                <br><br><br>
                                <div class="col-12 col-md-3">
                                    <button onclick="cadLivros()" class="btn btn-block btn-lg btn-primary">Cadastrar</button>
                                </div>

                            </div>

                        </div>
                    </div>
                </div>
            </div>
        </section>
        <!--<div class=""></div>-->
        <section class='showcase bg-light mb-0' id="secVer" style="display:none">
            <div class='container'>
                <div class='row'>
                    <div class="col-md-12 col-lg-12 col-xl-8 mx-auto">
                        <br><br><br><h1>Livros</h1>
                        <div class="form-row" id="ver" >

                        </div>      
                    </div>  
                </div>
            </div>
        </section>
        <section class='showcase'>
            <div class='container'>
                <div class='row'>
                    <div class="col-md-12 col-lg-12 col-xl-8 mx-auto">
                        <div class="form-row">
                            <div class='col-lg-12 order-lg-1 showcase-text mx-auto'>
                                <div class='col-lg-12 order-lg-1 showcase-text mx-auto' id='msg'></div>
                            </div>  
                        </div>      
                    </div>  
                </div>
            </div>
        </section>



        <!-- Bootstrap core JavaScript -->
        <script src="vendor/jquery/jquery.min.js"></script>
        <script src="vendor/bootstrap/js/bootstrap.bundle.min.js"></script>

    </body>

</html>
