// short prog

//ğŒ®
if
elsif 
else
end_


// ‹ô””»’è
if n.even?
// Šï””»’è
if n.odd?


// 0‚©‚ç10‚Ìfor•¶
for i in 0..10

// 10‚©‚ç0‚Ìfor•¶
for i in (0..10).to_a.reverse

// •W€“ü—Í
gets.chomp.to_i




// ‹ó”’‹æØ‚è‚Ì“ü—Í a b
// Œo˜H‚Ì‘” ans/sum%mod

a,b=gets.split.map(&:to_i)

sum=1;
ans=1;

for i in 2..a+b-2 do
	ans*=i
end

for i in 2..a-1 do
	sum*=i
end

for i in 2..b-1 do
	sum*=i
end


ans=(ans/sum)%1000000007
puts ans
