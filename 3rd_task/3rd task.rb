def is_prime(num)
    return false if num <= 1
    (2..Math.sqrt(num)).each do |i|
      return false if num % i == 0
    end
    true
  end
  
  puts "Введите количество чисел: "
  n = gets.to_i
  
  count = 0
  puts "Введите число через Enter: "
  n.times do
    num = gets.to_i
    count += 1 if is_prime(num)
  end
  
  puts "Количество простых чисел: #{count}"
  