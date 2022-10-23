function RandomColorScheme()

let mycolors = split(globpath(&rtp,"**/colors/*.vim"),"\n")
exe 'so ' . mycolors[localtime() % len(mycolors)]
unlet mycolors
endfunction

call RandomColorScheme()
:command NewColor call RandomColorScheme()
