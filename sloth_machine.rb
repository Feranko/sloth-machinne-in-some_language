def spin(user_input)
  win = 0
  lose = 0
  num1, num2, num3 = 0
  for i in 1..Integer(user_input)
    puts "----#{i}----"
    for j in 0..5 do
      num1 = rand(1..3)
      num2 = rand(1..3)
      num3 = rand(1..3)

      puts "#{num1}-#{num2}-#{num3}"
    end
    if num1 == num2 && num2 == num3
      puts "\033[32mYou won :)\033[37m"
      win = win + 1
    else
      puts "\033[31mYou lose :(\033[37m"
      lose = lose + 1
    end
  end
  puts "\033[37mYou won for : \033[33m#{win}"
  puts "\033[37mYou lose for : \033[31m#{lose}"
end

def main
  puts "\033[31minput \033[33mend\033[31m to end the game"
  loop do
    puts "\033[32m--int the number of spin--\033[37m"
    user_input = gets.chomp
    if user_input == ""
      puts "invalid input"
    elsif user_input == "end"
      exit
    else
      spin(user_input)
    end
  end
  return
end
main
