<!DOCTYPE HTML>
	<html>
		<head>
			<title>TP1</title>
		</head>
		<body>
			 <?php
			 	//echo("Hello World");
			 	//phpinfo();
				$color='green';
				$color2='blue';
				$border='1px solid';
				$width='20';

			 	/*
			 	$n1=1;
			 	$n2=2;

			 	$chaine1='Hello ';
			 	$chaine2='World';

			 	echo ($n1+$n2).'<br>';
			 	echo $chaine1.$chaine2;
			 	*/
			 	//echo 'Voici un texte en <span style="color:blue;font-size:5em">bleu</span> et <span style="font-size:5em">énorme</span><br/>';
			 	//echo 'Voici un texte en <span style="color:'.$color.';font-size:'.$size.'">bleu</span> et <span style="font-size:'.$size.'">énorme</span><br/>';
			 	//echo "Voici un texte en <span style=\"color:$color;font-size:$size\">bleu</span> et <span style=\"font-size:$size\">énorme</span><br/>";
			 	//echo '<img src="zip_isen_php1/paysage1.jpg" width="'.$width.'%""><img src="zip_isen_php1/paysage2.jpg" width="'.(2*$width).'%">';
			 	/*echo 	'<table style="border-collapse:collapse">
			 					<tr>
			 						<td style="width:'.$width.'px;border:'.$border.' '.$color.'">'.$width.'px</td>
			 						<td style="width:'.(2*$width).'px;border:'.$border.' '.$color.'">'.(2*$width).'px</td>
			 						<td style="width:'.(3*$width).'px;border:'.$border.' '.$color.'">'.(3*$width).'px</td>
			 						<td style="width:'.(4*$width).'px;border:'.$border.' '.$color.'">'.(4*$width).'px</td>
			 					</tr>
			 			</table>
			 			<table style="border-collapse:collapse">
			 					<tr>
			 						<td style="width:'.(4*$width).'px;border:'.$border.' '.$color2.'">'.(4*$width).'px</td>
			 						<td style="width:'.(3*$width).'px;border:'.$border.' '.$color2.'">'.(3*$width).'px</td>
			 						<td style="width:'.(2*$width).'px;border:'.$border.' '.$color2.'">'.(2*$width).'px</td>
			 						<td style="width:'.$width.'px;border:'.$border.' '.$color2.'">'.$width.'px</td>
			 					</tr>
			 			</table>';*/
				//echo 'Nous somme le '.date('D j F o').' et il est '.date('H\h i\m\i\n s\s\e\c');
				//$date=date('N d m Y H i s');
				//echo $date;
				//echo $date{0};
				/*for ($i=0; $i < strlen($date); $i++)
				{
					$temp;
					if($date{$i}!=' ') 
					{
						echo '<img src="zip_isen_php1/chiffres/'.$date{$i}.'.png" style="display:inline" />';
					}
					if($i<11 && $date{$i}==' ')
					{

						echo '<img src="zip_isen_php1/chiffres/tiret.png" style="display:inline" />';
					}
					if($i>=11 && $date{$i}==' ')
					{
						echo '<img src="zip_isen_php1/chiffres/2points.png" style="display:inline" />';	
					}
				}*/
				$date=date('N d m Y H i s');
				echo '	<p>Heure Serveur<span id="srv">'.$date.'</span></p>
						<script>
							var d=new Date();
							
			 ?>
		</body>
	</html>