n = gets.strip.to_i

def comparison_string(s1, s2)
  comp_str = []
  (0..s1.length - 1).each do |i|
    comp_str.push s1[i] == s2[i] ? '.' : '*'
  end
  comp_str.join
end

(1..n).each do
  s1 = gets.strip
  s2 = gets.strip

  puts s1
  puts s2
  puts comparison_string(s1, s2)
  puts
end
