<!DOCTYPE HTML>
<html>
<head>
    <title>Dest</title>
</head>
<body>
    <?php
    /*require_once('adresses.php');
    if((int)$_GET['id']<count($adr))
    {
        echo '<p>'.$adr[$_GET['id']].'</p>';
    }*/
    foreach (unserialize($_GET['is']) as $key => $value)
    {
        echo '  <p>Prix : '.($value*$_GET['prix']).'<p>
                <p>Devise : '.$_GET['devise'].'<p>
                <p>Domaine : '.$_GET['domaine'].'<p>';
    }
    ?>
</body>
</html>