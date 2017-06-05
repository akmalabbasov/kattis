num_people, num_chickens = gets.strip.split.map { |i| i.to_i }
diff = num_people - num_chickens

puts "Dr. Chaz needs #{diff} more piece#{diff == 1 ? '' : 's'} of chicken!" if diff > 0
puts "Dr. Chaz will have #{-diff} piece#{diff == -1 ? '' : 's'} of chicken left over!" if diff < 0
