$('h1').click(function(){
	$(this).text("Muskan is indeed the best!")
})

$('input').eq(0).keypress(function(){
	$('h3').toggleClass('TurnBlue');
})