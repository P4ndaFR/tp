<!DOCTYPE HTML>
<html>
<head>
    <title>Source</title>
</head>
<body>
    <table>
        <?php
        /*require_once('adresses.php');
        for ($i=0; $i < count($adr); $i++)
        {
            echo '
            <tr>
                <td>'.$i.'</td><td><a href="dest.php?id='.$i.'">'.$adr[$i].'</a></td>
            </tr>
            ';
        }*/
        $prix=25.87;
        $devise='euro';
        $domaine='électronique';
        $items = array(2,3.5,8,0.8,1);
        $is=serialize($items);
        echo '<a href="dest.php?prix='.$prix.'&amp;devise='.$devise.'&amp;domaine='.$domaine.'&amp;is='.$is.'">OK</a>';
        ?>
    </table>
</body>
</html>