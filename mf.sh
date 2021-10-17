arr=( $(ls *.cpp) )
declare -a array
for FILENAME in "${arr[@]}"
do
extension="${FILENAME##*.}"
filename="${FILENAME%.*}"
short="${filename:0:2}"
   echo "$filename"
   array+=($short.$extension)
done

IFS=$'\n'           ## only word-split on '\n'
sorted=( $(printf "%s\n" ${array[@]} | sort -r ) )  ## reverse sort

##echo "${sorted[@]}"
var=${sorted[0]%.*}
ext="${sorted[0]##*.}"

var=$((var + 1))
if [[ ${#var} < 2 ]] 
then
    var="00${var}"
    var="${var: -2}"
fi

touch "${var}-$1.$ext"
echo "${var}-$1.$ext"