<!DOCTYPE html>
<html lang="en">

    <head>

        <?php
        require_once "./head.php";
        ?>
        <script type="text/javascript"></script>
    </head>
    <body id='page-top' class='bg-primary'>
        <br><br><br><br>
        <!-- Header -->
        <header class='text-white text-center'>
            <div class='container'>
                <form action="cadPrecoBanco.php" method="POST">
                    <div class='control-group'>
                        <div  class='form-group controls mb-0 pb-2'>
                            <?php
                            $p = rand(1, 5);
                            $imagem = $p . ".jpg";
                            echo "<img style='width: 80%' src='./fotos/" . $imagem . "'/>";
                            echo "<br>";
                            echo "<br>";
                            if ($p == 1) {
                                $nomeProd = 'computador';
                            } else if ($p == 2) {
                                $nomeProd = 'geladeira';
                            } else if ($p == 3) {
                                $nomeProd = 'roupeiro';
                            } else if ($p == 4) {
                                $nomeProd = 'mesa';
                            } else {
                                $nomeProd = 'cama';
                            }
                            ?>
                        </div>
                    </div>
                    <div class='control-group' hidden>
                        <div class='form-group controls mb-0 pb-2'> 
                            <input class='form-control' id="produto" name='nome' type='text' value="<?php echo $nomeProd; ?>" required='required' data-validation-required-message=''>   
                        </div>
                    </div>


                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'> 
                            <input class='form-control' id="preco" name='preco' type='text' placeholder='Preço' required='required' data-validation-required-message=''>   
                        </div>
                    </div>

                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'> 
                            <input class='form-control' id="local" name='lugar' type='text' placeholder='Onde' required='required' data-validation-required-message=''>   
                        </div>
                    </div>
                    <br>
                    <div class="form-group">
                        <button type="submit" class="btn btn-xl" onclick="cadProd()">Cadastrar</button>
                    </div>
                </form>
            </div>
        </header>
        <?php
        require_once "./fimBody.php";
        ?>

    </body>

</html>
