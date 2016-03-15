<!DOCTYPE HTML>
<html>
	<head>
		<title>TP2</title>
	</head>
	<body>
		<?php
            echo '<table style="border-collapse:collapse">';
            $nb_lignes=100;
            $nb_colonnes=25;
            $blue=255;
            $green=255;
            $green2=180;
            $red=255;
            $pas=(int)($blue/$nb_colonnes);

            $chaine='abcdefghijklmnopqrstuvwxyz';
            for ($i=0; $i < $nb_lignes ; $i++) 
            { 
                $tab[$i]=substr(str_shuffle($chaine), 0, rand(4,8));
                //echo $tab[$i][0];
            }
            sort($tab); 
            echo '<tr>';
            for ($i=0; $i < strlen(($chaine)); $i++)
            {
                echo '  <td>
                           <a href="">'.$chaine[$i].'</a>
                        </td>';
            }
            echo '</tr>';
            for ($i=0; $i < $nb_lignes ; $i++)
            {
                echo '<tr>';
                $blue=255;
                $green=255;
                $green2=180;
                $red=255;
                $pas=(int)($blue/$nb_colonnes);
                for ($j=0; $j<$nb_colonnes ; $j++)
                {
                    if($j == 0)
                    {
                        if(strcmp($tab[$i][0],$tab[$i-1][0]) != 0)
                        {
                            echo '<td id="'.$tab[$i][0].'">'.$tab[$i+1].'</td>';
                        }
                        else
                        {
                            echo '<td>'.$tab[$i].'</td>';
                        }

                    }
                    if($i==0 || $i%25==0 || $i==$nb_lignes-1)
                    {
                        echo '<th>'.$j.'</th>';
                    }
                    elseif($i%10==0)
                    {
                        echo '<td style="background-color:rgb('.$red.','.$green2.',0)">000</td>';
                        $green2=$green2-$pas;
                        $red=$red-$pas;
                    }
                    else
                    {
                        if($i%2==0)
                        {
                            echo '<td style="background-color:rgb(0,0,'.$blue.')">000</td>';
                            $blue=$blue-$pas;
                        }
                        else
                        {
                            echo '<td style="background-color:rgb(0,'.$green.',0)">000</td>';
                            $green=$green-$pas;
                        }   
                    }
                }
                echo '</tr>';
            }
            echo '</table>';
            $tab[$nb_lignes+1]='</table>';
			/*$tab;
			//palindrome('elu par cette crapule');
			function palindrome($pal)
			{
				$pal=str_replace(' ','',$pal);
				$temp=strrev($pal);
				if(!strcmp($temp, $pal))
				{
					echo "C'est un palindrome";	
				}
			}
			$t1=microtime();
			for ($i=0; $i < 1000 ; $i++) 
			{ 
				$tab[]=rand();	
			}
			//print_r($tab);
			//asort($tab);
			executer_tri_par_tas($tab);
			//print_r($tab);
			echo microtime()-$t1;
            */
			function echanger (&$arbre, $a, $b)
			{
       			$temp = $arbre[$a];
        		$arbre[$a] = $arbre[$b];
        		$arbre[$b] = $temp;
    		}

    		function tamiser (&$arbre, $noeud, $n)
    		{
        		$k = $noeud;
        		$j = 2 * $k;
        		while ($j <= $n)
        		{
        		    if (($j < $n) && ($arbre[$j] < $arbre[$j + 1]))
        	        $j++;
        		    if ($arbre[$k] < $arbre[$j])
        		    {
            	   		echanger($arbre, $k, $j);
            	    	$k = $j;
            	    	$j = 2 * $k;
            		}
            		else 
            		{
            	    	break;
        			}
        		}	
    		}

    		function executer_tri_par_tas (&$arbre) 
    		{
        		for ($i = count($arbre) >> 1; $i >= 0; $i--)
            		tamiser($arbre, $i, count($arbre) - 1);

        		for ($i = count($arbre) - 1; $i >= 1; $i--)
        		{
            		echanger($arbre, $i, 0);
            		tamiser($arbre, 0, $i - 1);
        		}
   			}

		?>
	</body>
</html>