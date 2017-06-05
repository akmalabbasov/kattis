loop do
  input = gets.strip.split
  exit if input.length == 1

  x1, y1, x2, y2, p = input.map { |i| i.to_f }
  puts "%.10f" % (((x1-x2).abs**p + (y1-y2).abs**p)**(1/p))
end
