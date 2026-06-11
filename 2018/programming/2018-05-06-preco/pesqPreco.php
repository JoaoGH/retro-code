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

                
                <form action="cadPrecoBanco.php" method="POST">
                    <div class='control-group'>
                        <div  class='form-group controls mb-0 pb-2'>
                            <?php
                                $p = rand(1,10);
                                $imagem=$p.".jpg";
                                echo "<img style='width: 80%' src='./fotos/".$imagem."'/>";
                                echo "<br>";
                                echo "<br>";
                            ?>
                        </div>
                    </div>
                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'> 
                            <input class='form-control' name='preco' type='text' placeholder='Preço' required='required' data-validation-required-message=''>   
                        </div>
                    </div>

                    <div class='control-group'>
                        <div class='form-group controls mb-0 pb-2'> 
                            <input class='form-control' name='local' type='text' placeholder='Onde' required='required' data-validation-required-message=''>   
                        </div>
                    </div>
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
