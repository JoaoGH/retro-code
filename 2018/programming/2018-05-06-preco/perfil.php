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
    <body  id='page-top' class='bg-primary'>
        <br><br><br><br>
        <header class='text-white text-center' onload=>
            <div class='container'>
                <h1 class='text-uppercase mb-0'>Veja os preços mais baixos aqui.</h1>
                <hr class='star-light'>
                <h4 class='font-weight-light mb-0'>Para ver os preços dos produtos, cadastre ao menos 5 preços antes<br><br></h4>

            
                <br>

                
                <!--Faz um script que o botao de pesquisa fique disabled até que o user cadastre no minimo 5 produtos-->
	            <form action="./cadPreco.php">
	            	<button type="submit" class="btn btn-secondary" id="cadPreco" style="width: 50%">Cadastrar preços</button>
	        	</form>
	            <br><br>
	            <form action="./pesqPreco.php">
	            	<button disabled="" type="submit" class="btn btn-secondary" id="pesqPreco" style="width: 50%">Pesquisar preços</button>
	            </form>



            </div>

        </header>


		<?php
            require_once "./fimBody.php";
        ?>

    </body>
</html>
