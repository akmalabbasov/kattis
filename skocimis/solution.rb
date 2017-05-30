a, b, c = gets.strip.split.map { |i| i.to_i }

interval1 = b - a - 1
interval2 = c - b - 1

puts [interval1, interval2].max
