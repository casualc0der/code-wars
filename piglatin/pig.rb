def pig_it(test)
  puts test
  arr = test.split

  arr.map! {|x| 
   puts x 
   if x[0].match(/\W/)
       x
   else
    e = x[0] + "ay"
    x[0] = ''
    x << e
   end}

   arr.join(' ')
end





puts pig_it('Quis custodiet ipsos custodes ?')