echo "ROT13\n"
echo "Input:"
read name

echo "Output:"
echo name |tr 'A-Za-z' 'N-ZA-Mn-za-m'
